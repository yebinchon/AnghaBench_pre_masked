
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;



__attribute__((used)) static void
FUNC_0(const char *VAR_0, const char **VAR_1, ssize_t *VAR_2)
{
 int VAR_3;
 const char *VAR_4;





 *VAR_1 = ((void*)0);
 *VAR_2 = 0;
 VAR_3 = 0;
 for (VAR_4 = VAR_0; *VAR_4 != 0; VAR_4++) {
  if (!VAR_3) {

   if (*VAR_4 != '/') {
    *VAR_1 = VAR_4;
    VAR_3 = 1;
   }
  } else {

   if (*VAR_4 == '/') {
    *VAR_2 = VAR_4 - *VAR_1;
    VAR_3 = 0;
   }
  }
 }

 if (VAR_3)
  *VAR_2 = VAR_4 - *VAR_1;
}
