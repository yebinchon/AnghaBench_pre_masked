
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6, char *VAR_7)
{
 char *VAR_8;


 *VAR_4 = FUNC_0(VAR_3);
 VAR_3 += 4;


 *VAR_5 = FUNC_0(VAR_3);
 VAR_3 += 4;


 if (*VAR_3++ != 2) {

  return -1;
 }


 if (*VAR_3++ != VAR_2) {

  return -1;
 }
 *VAR_6 = FUNC_0(VAR_3);
 VAR_3 += 4;


 if (*VAR_3++ != VAR_1) {

  return -1;
 }
 VAR_3[VAR_0-1] = '\0';
 VAR_3 += 2;
 VAR_8 = VAR_7 + FUNC_1(VAR_7, "%s", VAR_3);


 for (VAR_8--;
      (VAR_8 != VAR_7) && ((*VAR_8 == 0xd) || (*VAR_8 == 0xa));
      VAR_8--) {
  *VAR_8 = '\0';
 }

 return 0;
}
