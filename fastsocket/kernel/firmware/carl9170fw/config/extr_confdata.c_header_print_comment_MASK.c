
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 size_t FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,size_t,int,int *) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_0, const char *VAR_1, void *VAR_2)
{
 const char *VAR_3 = VAR_1;
 size_t VAR_4;

 FUNC_0(VAR_0, "/*\n");
 for (;;) {
  VAR_4 = FUNC_1(VAR_3, "\n");
  FUNC_0(VAR_0, " *");
  if (VAR_4) {
   FUNC_0(VAR_0, " ");
   FUNC_2(VAR_3, VAR_4, 1, VAR_0);
   VAR_3 += VAR_4;
  }
  FUNC_0(VAR_0, "\n");
  if (*VAR_3++ == '\0')
   break;
 }
 FUNC_0(VAR_0, " */\n");
}
