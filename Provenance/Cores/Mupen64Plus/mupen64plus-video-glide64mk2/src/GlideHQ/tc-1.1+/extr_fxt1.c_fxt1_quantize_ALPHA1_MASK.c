
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qword ;
typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int const,int const,float*,float,int*) ;
 size_t VAR_2 ;
 int FUNC_1 (int const,int const,float*,float,float*,float*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 size_t VAR_5 ;

__attribute__((used)) static void
FUNC_5 (dword *VAR_6,
        byte VAR_7[VAR_4][VAR_3])
{
    const int VAR_8 = 3;
    const int VAR_9 = 4;
    float VAR_10[1 + 1 + 1][VAR_3];
    float VAR_11, VAR_12[VAR_3];
    int VAR_13, VAR_14, VAR_15;
    qword VAR_16;
    dword VAR_17, VAR_18;

    int VAR_19;
    int VAR_20;
    int VAR_21 = 0, VAR_22 = 0;
    int VAR_23 = 0, VAR_24 = 0;
    int VAR_25 = 0, VAR_26 = 0;






    VAR_19 = 2000;



    VAR_20 = -1;
    for (VAR_15 = 0; VAR_15 < VAR_4 / 2; VAR_15++) {
 int VAR_27 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
     VAR_27 += VAR_7[VAR_15][VAR_13];
 }



 if (VAR_19 > VAR_27) {
     VAR_19 = VAR_27;
     VAR_21 = VAR_15;
 }
 if (VAR_20 < VAR_27) {
     VAR_20 = VAR_27;
     VAR_22 = VAR_15;
 }
 VAR_25 += VAR_27;
    }

    VAR_19 = 2000;



    VAR_20 = -1;
    for (; VAR_15 < VAR_4; VAR_15++) {
 int VAR_28 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
     VAR_28 += VAR_7[VAR_15][VAR_13];
 }



 if (VAR_19 > VAR_28) {
     VAR_19 = VAR_28;
     VAR_23 = VAR_15;
 }
 if (VAR_20 < VAR_28) {
     VAR_20 = VAR_28;
     VAR_24 = VAR_15;
 }
 VAR_26 += VAR_28;
    }


    {
 int VAR_29, VAR_30;
 int VAR_31 = 0, VAR_32 = 0;
 float VAR_33 = 1e9;
 float VAR_34[2 * 2][VAR_3];
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
     VAR_34[0][VAR_13] = VAR_7[VAR_21][VAR_13];
     VAR_34[1][VAR_13] = VAR_7[VAR_22][VAR_13];
     VAR_34[2][VAR_13] = VAR_7[VAR_23][VAR_13];
     VAR_34[3][VAR_13] = VAR_7[VAR_24][VAR_13];
 }
 for (VAR_29 = 0; VAR_29 < 2; VAR_29++) {
     for (VAR_30 = 2; VAR_30 < 4; VAR_30++) {
  float VAR_35 = 0.0F;
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
      VAR_35 += (VAR_34[VAR_29][VAR_13] - VAR_34[VAR_30][VAR_13]) * (VAR_34[VAR_29][VAR_13] - VAR_34[VAR_30][VAR_13]);
  }
  if (VAR_35 < VAR_33) {
      VAR_33 = VAR_35;
      VAR_31 = VAR_29;
      VAR_32 = VAR_30;
  }
     }
 }
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
     VAR_10[0][VAR_13] = VAR_34[1 - VAR_31][VAR_13];
     VAR_10[1][VAR_13] = (VAR_34[VAR_31][VAR_13] * VAR_25 + VAR_34[VAR_32][VAR_13] * VAR_26) / (VAR_25 + VAR_26);
     VAR_10[2][VAR_13] = VAR_34[5 - VAR_32][VAR_13];
 }
    }


    VAR_6[0] = 0;
    if (VAR_21 != VAR_22) {

 FUNC_1(VAR_8, VAR_9, VAR_12, VAR_11, VAR_10[0], VAR_10[1]);


 VAR_18 = 0;
 for (VAR_15 = VAR_4 / 2 - 1; VAR_15 >= 0; VAR_15--) {
     int VAR_36;

     FUNC_0(VAR_36, VAR_8, VAR_9, VAR_12, VAR_11, VAR_7[VAR_15]);

     VAR_18 <<= 2;
     VAR_18 |= VAR_36;
 }

 VAR_6[0] = VAR_18;
    }


    VAR_6[1] = 0;
    if (VAR_23 != VAR_24) {

 FUNC_1(VAR_8, VAR_9, VAR_12, VAR_11, VAR_10[2], VAR_10[1]);


 VAR_17 = 0;
 for (VAR_15 = VAR_4 - 1; VAR_15 >= VAR_4 / 2; VAR_15--) {
     int VAR_37;

     FUNC_0(VAR_37, VAR_8, VAR_9, VAR_12, VAR_11, VAR_7[VAR_15]);

     VAR_17 <<= 2;
     VAR_17 |= VAR_37;
 }

 VAR_6[1] = VAR_17;
    }

    FUNC_2(VAR_16, 7);
    for (VAR_14 = VAR_8 - 1; VAR_14 >= 0; VAR_14--) {

 FUNC_4(VAR_16, 5);
 FUNC_3(VAR_16, (dword)(VAR_10[VAR_14][VAR_0] / 8.0F));
    }
    for (VAR_14 = VAR_8 - 1; VAR_14 >= 0; VAR_14--) {
 for (VAR_13 = 0; VAR_13 < VAR_9 - 1; VAR_13++) {

     FUNC_4(VAR_16, 5);
     FUNC_3(VAR_16, (dword)(VAR_10[VAR_14][VAR_13] / 8.0F));
 }
    }
    ((qword *)VAR_6)[1] = VAR_16;
}
