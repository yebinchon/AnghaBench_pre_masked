
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_file {char* alt; char* path; } ;


 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
   const struct item_file *VAR_2 = (const struct item_file*)VAR_0;
   const struct item_file *VAR_3 = (const struct item_file*)VAR_1;
   const char *VAR_4 = VAR_2->alt ? VAR_2->alt : VAR_2->path;
   const char *VAR_5 = VAR_3->alt ? VAR_3->alt : VAR_3->path;
   return FUNC_0(VAR_4, VAR_5);
}
