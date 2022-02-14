
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_bbf_classifier_cascade_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int,int *) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*,unsigned char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(int VAR_0, char** VAR_1)
{
 FUNC_0(VAR_0 >= 3);
 ccv_bbf_classifier_cascade_t* VAR_2 = FUNC_2(VAR_1[1]);
 if (FUNC_10(VAR_1[2], "bin") == 0)
 {
  FUNC_0(VAR_0 >= 4);
  int VAR_3 = FUNC_1(VAR_2, ((void*)0), 0);
  char* VAR_4 = FUNC_8(VAR_3);
  FUNC_1(VAR_2, VAR_4, VAR_3);
  FILE* VAR_5 = FUNC_5(VAR_1[3], "w");
  FUNC_7(VAR_4, 1, VAR_3, VAR_5);
  FUNC_3(VAR_5);
  FUNC_6(VAR_4);
 } else if (FUNC_10(VAR_1[2], "c") == 0) {
  FUNC_11(VAR_2);
 } else if (FUNC_10(VAR_1[2], "json") == 0) {
  FUNC_12(VAR_2);
 } else if (FUNC_10(VAR_1[2], "cbin") == 0) {
  int VAR_6 = FUNC_1(VAR_2, ((void*)0), 0);
  char* VAR_7 = FUNC_8(VAR_6);
  FUNC_1(VAR_2, VAR_7, VAR_6);
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
   FUNC_9("\\x%x", (unsigned char)VAR_7[VAR_8]);
  FUNC_4(((void*)0));
  FUNC_6(VAR_7);
 }
 return 0;
}
