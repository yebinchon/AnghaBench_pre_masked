
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {char* name; scalar_t__ end; scalar_t__ start; struct resource* sibling; struct resource* child; } ;
typedef int off_t ;


 int FUNC_0 (char*,char*,unsigned long,unsigned long,char const*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, char **VAR_1, off_t VAR_2, int VAR_3, int *VAR_4,
    void *VAR_5)
{
 char *VAR_6 = VAR_0, *VAR_7 = VAR_0 + VAR_3;
 struct resource *VAR_8;
 const char *VAR_9;

 for (VAR_8 = ((struct resource *)VAR_5)->child; VAR_8 != ((void*)0); VAR_8 = VAR_8->sibling) {
  if (VAR_6 + 32 >= VAR_7)
   break;
  VAR_9 = VAR_8->name;
  if (VAR_9 == ((void*)0))
   VAR_9 = "???";

  VAR_6 += FUNC_0(VAR_6, "%08lx-%08lx: %s\n",
        (unsigned long)VAR_8->start,
        (unsigned long)VAR_8->end, VAR_9);
 }

 return VAR_6-VAR_0;
}
