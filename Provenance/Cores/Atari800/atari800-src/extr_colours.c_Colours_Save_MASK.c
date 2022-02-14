
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rgb ;
typedef int FILE ;


 char FUNC_0 (int) ;
 char FUNC_1 (int) ;
 char FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int,int,int *) ;

int FUNC_6(const char *VAR_2)
{
 FILE *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_2, "wb");
 if (VAR_3 == ((void*)0)) {
  return VAR_0;
 }


 for (VAR_4 = 0; VAR_4 < 256; VAR_4 ++) {
  char VAR_5[3];
  VAR_5[0] = FUNC_2(VAR_4);
  VAR_5[1] = FUNC_1(VAR_4);
  VAR_5[2] = FUNC_0(VAR_4);
  if (FUNC_5(VAR_5, sizeof(VAR_5), 1, VAR_3) != 1) {
   FUNC_3(VAR_3);
   return VAR_0;
  }
 }

 FUNC_3(VAR_3);
 return VAR_1;
}
