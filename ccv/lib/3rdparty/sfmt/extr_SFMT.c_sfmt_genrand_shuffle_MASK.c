
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sfmt_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(sfmt_t * VAR_0, void *VAR_1, int VAR_2, int VAR_3) {
 int VAR_4, VAR_5;
 char *VAR_6 = (char *)FUNC_0(VAR_3);
 char *VAR_7 = (char *)VAR_1;
 char *VAR_8 = VAR_7 + (VAR_2 - 1) * VAR_3;
 for (VAR_4 = VAR_2 - 1; VAR_4 >= 0; VAR_4--) {
  VAR_5 = FUNC_2(VAR_0) % (VAR_4 + 1);
  if (VAR_4 != VAR_5)
  {
   char *VAR_9 = VAR_7 + VAR_5 * VAR_3;
   FUNC_1(VAR_6, VAR_8, VAR_3);
   FUNC_1(VAR_8, VAR_9, VAR_3);
   FUNC_1(VAR_9, VAR_6, VAR_3);
  }
  VAR_8 -= VAR_3;
 }
}
