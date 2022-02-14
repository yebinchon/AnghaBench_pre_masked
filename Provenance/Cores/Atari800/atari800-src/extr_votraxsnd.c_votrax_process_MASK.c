
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SWORD ;


 int FUNC_0 (int ,int*,int) ;
 double VAR_0 ;

__attribute__((used)) static void FUNC_1(SWORD *VAR_1, int VAR_2, SWORD *VAR_3)
{
 static SWORD VAR_4;
 static SWORD VAR_5;
 static double VAR_6;
 static int VAR_7;
 int VAR_8 = (int)(VAR_6 + (double)(VAR_2 - 1)*VAR_0);
 int VAR_9 = 0;
 double VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 if (VAR_7 == 2) {
     VAR_3[0] = VAR_4;
  VAR_3[1] = VAR_5;
  FUNC_0(0, VAR_3 + 2, (VAR_8 + 1 + 1) - 2);
 }
 else if (VAR_7 == 1) {
     VAR_3[0] = VAR_4;
  FUNC_0(0, VAR_3 + 1, (VAR_8 + 1 + 1) - 1);
 }
 else if (VAR_7 == 0) {
  FUNC_0(0, VAR_3, VAR_8 + 1 + 1);
 }
 else if (VAR_7 < 0) {
  FUNC_0(0, VAR_3, -VAR_7);
  FUNC_0(0, VAR_3, VAR_8 + 1 + 1);
 }

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  SWORD VAR_13;
  SWORD VAR_14;
  SWORD VAR_15;
  VAR_9 = (int)(VAR_6 + (double)VAR_11*VAR_0);
  VAR_10 = VAR_6 + (double)VAR_11*VAR_0 - (double)VAR_9;
  VAR_13 = VAR_3[VAR_9];
  VAR_14 = VAR_3[VAR_9+1];
  VAR_15 = (int)(VAR_13 + VAR_10*(double)(VAR_14-VAR_13));
  VAR_1[VAR_11] = VAR_15;
 }
 VAR_12 = (int)(VAR_6 + (double)VAR_2*VAR_0);
 VAR_6 = (VAR_6 + (double)VAR_2*VAR_0) - (double)VAR_12;
 if (VAR_12 == VAR_8)
 {
  VAR_7 = 2;
  VAR_4 = VAR_3[VAR_12];
  VAR_5 = VAR_3[VAR_12+1];
 }
 else if (VAR_12 == VAR_8 + 1) {
  VAR_7 = 1;
  VAR_4 = VAR_3[VAR_12];
 }
 else {
  VAR_7 = (VAR_12 - (VAR_8 + 2));
 }
}
