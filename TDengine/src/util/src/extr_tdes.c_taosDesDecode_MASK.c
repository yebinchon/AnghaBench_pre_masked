
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (unsigned char*,char*,int,int ) ;

char* FUNC_4(int64_t VAR_1, char* VAR_2, int VAR_3) {
  unsigned char* VAR_4 = (unsigned char*)(&VAR_1);
  char* VAR_5 = FUNC_0(VAR_3 + 8, 1);
  FUNC_2(VAR_5, VAR_2, VAR_3);
  VAR_3 += 8;

  char* VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_3, VAR_0);
  FUNC_1(VAR_5);

  return VAR_6;
}
