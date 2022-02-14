
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qword ;
typedef int input ;
typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int const,int const,float*,float,int*) ;
 int FUNC_1 (int*) ;
 size_t VAR_2 ;
 int FUNC_2 (int const,int const,float*,float,int*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 size_t VAR_5 ;
 int** VAR_6 ;
 int** VAR_7 ;
 int FUNC_6 (int**,int,int) ;

__attribute__((used)) static void
FUNC_7 (dword *VAR_8, const byte *VAR_9[], int VAR_10)
{
    float VAR_11, VAR_12[VAR_3];

    qword VAR_13;
    dword VAR_14;
    int VAR_15, VAR_16;
    const int VAR_17 = 3;
    const int VAR_18 = 3;


    int VAR_19 = 2000;



    int VAR_20 = -1;
    int VAR_21 = 0;
    int VAR_22 = 0;
    int VAR_23 = 2000;
    int VAR_24 = -1;
    int VAR_25 = 0, VAR_26 = 0;
    int VAR_27;

    byte VAR_28[VAR_4][VAR_3];
    int VAR_29, VAR_30, VAR_31;

    if (VAR_10 == 3) {

 FUNC_6(VAR_28, -1, sizeof(VAR_28));
    }



    for (VAR_31 = 0; VAR_31 < 4; VAR_31++) {
 for (VAR_30 = 0; VAR_30 < 4; VAR_30++) {
     for (VAR_29 = 0; VAR_29 < VAR_10; VAR_29++) {
  VAR_28[VAR_30 + VAR_31 * 4][VAR_29] = *VAR_9[VAR_31]++;
     }
 }
    }
    for (VAR_30 = 0; VAR_30 < VAR_4; VAR_30++) {
 int VAR_32 = 0;

 for (VAR_29 = 0; VAR_29 < VAR_18; VAR_29++) {
     VAR_32 += VAR_28[VAR_30][VAR_29];
 }



 if (VAR_19 > VAR_32) {
     VAR_19 = VAR_32;
     VAR_21 = VAR_30;
 }
 if (VAR_20 < VAR_32) {
     VAR_20 = VAR_32;
     VAR_22 = VAR_30;
 }
 if (VAR_23 > VAR_28[VAR_30][VAR_0]) {
     VAR_23 = VAR_28[VAR_30][VAR_0];
 }
 if (VAR_24 < VAR_28[VAR_30][VAR_0]) {
     VAR_24 = VAR_28[VAR_30][VAR_0];
 }
 if (VAR_28[VAR_30][VAR_0] == 0) {
     VAR_25 = 1;
 }
 if (VAR_28[VAR_30][VAR_0] == 255) {
     VAR_26 = 1;
 }
    }


    if (VAR_23 == VAR_24) {

 VAR_8[0] = VAR_23 | (VAR_24 << 8);
 VAR_8[1] = 0;
    } else {
 if (VAR_25 && ((VAR_23 == 0) || (VAR_24 == 0))) {

     VAR_25 = 0;
 }
 if (VAR_26 && ((VAR_23 == 255) || (VAR_24 == 255))) {

     VAR_26 = 0;
 }
 if ((VAR_25 | VAR_26) ^ (VAR_23 <= VAR_24)) {
     int VAR_33;
     VAR_33 = VAR_23;
     VAR_23 = VAR_24;
     VAR_24 = VAR_33;
 }
 VAR_27 = (VAR_23 <= VAR_24) ? 5 : 7;


 VAR_12[VAR_0] = (float)VAR_27 / (VAR_24 - VAR_23);
 VAR_11 = -VAR_12[VAR_0] * VAR_23 + 0.5F;


 FUNC_3(VAR_13, 0);
 for (VAR_30 = VAR_4 - 1; VAR_30 >= 0; VAR_30--) {
     int VAR_34 = -1;
     if (VAR_25 | VAR_26) {
  if (VAR_28[VAR_30][VAR_0] == 0) {
      VAR_34 = 6;
  } else if (VAR_28[VAR_30][VAR_0] == 255) {
      VAR_34 = 7;
  }
     }

     if (VAR_34 == -1) {
  float VAR_35 = VAR_28[VAR_30][VAR_0] * VAR_12[VAR_0];
  VAR_34 = (int)(VAR_35 + VAR_11);







  VAR_34 = VAR_6[VAR_25 | VAR_26][VAR_34];
     }

     FUNC_5(VAR_13, 3);
     FUNC_4(VAR_13, VAR_34);
 }
 FUNC_5(VAR_13, 16);
 FUNC_4(VAR_13, VAR_23 | (VAR_24 << 8));
 ((qword *)VAR_8)[0] = VAR_13;
    }

    VAR_15 = FUNC_1(VAR_28[VAR_21]);
    VAR_16 = FUNC_1(VAR_28[VAR_22]);
    VAR_8[2] = VAR_15 | (VAR_16 << 16);

    VAR_14 = 0;
    if (VAR_15 != VAR_16) {
 FUNC_2(VAR_17, VAR_18, VAR_12, VAR_11, VAR_28[VAR_21], VAR_28[VAR_22]);


 for (VAR_30 = VAR_4 - 1; VAR_30 >= 0; VAR_30--) {
     int VAR_36;

     FUNC_0(VAR_36, VAR_17, VAR_18, VAR_12, VAR_11, VAR_28[VAR_30]);
     VAR_36 = VAR_7[0][VAR_36];

     VAR_14 <<= 2;
     VAR_14 |= VAR_36;
 }
    }
    VAR_8[3] = VAR_14;
}
