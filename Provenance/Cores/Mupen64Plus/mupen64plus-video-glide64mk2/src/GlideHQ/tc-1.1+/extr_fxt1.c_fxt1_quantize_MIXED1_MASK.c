
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qword ;
typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 int FUNC_0 (int,int const,int const,float*,float,int*) ;
 size_t VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int const,int const,float*,float,int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 size_t VAR_4 ;

__attribute__((used)) static void
FUNC_6 (dword *VAR_5,
        byte VAR_6[VAR_3][VAR_2])
{
    const int VAR_7 = 2;
    const int VAR_8 = 3;
    byte VAR_9[2 * 2][VAR_2];
    float VAR_10, VAR_11[VAR_2];
    int VAR_12, VAR_13, VAR_14;
    qword VAR_15;
    dword VAR_16, VAR_17;

    int VAR_18;
    int VAR_19;
    int VAR_20 = 0, VAR_21 = -1;
    int VAR_22 = 0, VAR_23 = -1;






    VAR_18 = 2000;



    VAR_19 = -1;
    for (VAR_14 = 0; VAR_14 < VAR_3 / 2; VAR_14++) {
 if (!FUNC_1(VAR_6[VAR_14])) {
     int VAR_24 = 0;

     for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_24 += VAR_6[VAR_14][VAR_12];
     }



     if (VAR_18 > VAR_24) {
  VAR_18 = VAR_24;
  VAR_20 = VAR_14;
     }
     if (VAR_19 < VAR_24) {
  VAR_19 = VAR_24;
  VAR_21 = VAR_14;
     }
 }
    }

    VAR_18 = 2000;



    VAR_19 = -1;
    for (; VAR_14 < VAR_3; VAR_14++) {
 if (!FUNC_1(VAR_6[VAR_14])) {
     int VAR_25 = 0;

     for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_25 += VAR_6[VAR_14][VAR_12];
     }



     if (VAR_18 > VAR_25) {
  VAR_18 = VAR_25;
  VAR_22 = VAR_14;
     }
     if (VAR_19 < VAR_25) {
  VAR_19 = VAR_25;
  VAR_23 = VAR_14;
     }
 }
    }


    if (VAR_21 == -1) {

 VAR_5[0] = 0xFFFFFFFF;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
     VAR_9[0][VAR_12] = 0;
     VAR_9[1][VAR_12] = 0;
 }
    } else {
 VAR_5[0] = 0;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
     VAR_9[0][VAR_12] = VAR_6[VAR_20][VAR_12];
     VAR_9[1][VAR_12] = VAR_6[VAR_21][VAR_12];
 }
 if (VAR_20 != VAR_21) {

     FUNC_2(VAR_7, VAR_8, VAR_11, VAR_10, VAR_9[0], VAR_9[1]);


     VAR_17 = 0;
     for (VAR_14 = VAR_3 / 2 - 1; VAR_14 >= 0; VAR_14--) {
  int VAR_26 = VAR_7 + 1;
  if (!FUNC_1(VAR_6[VAR_14])) {

      FUNC_0(VAR_26, VAR_7, VAR_8, VAR_11, VAR_10, VAR_6[VAR_14]);
  }

  VAR_17 <<= 2;
  VAR_17 |= VAR_26;
     }
     VAR_5[0] = VAR_17;
 }
    }


    if (VAR_23 == -1) {

 VAR_5[1] = 0xFFFFFFFF;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
     VAR_9[2][VAR_12] = 0;
     VAR_9[3][VAR_12] = 0;
 }
    } else {
 VAR_5[1] = 0;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
     VAR_9[2][VAR_12] = VAR_6[VAR_22][VAR_12];
     VAR_9[3][VAR_12] = VAR_6[VAR_23][VAR_12];
 }
 if (VAR_22 != VAR_23) {

     FUNC_2(VAR_7, VAR_8, VAR_11, VAR_10, VAR_9[2], VAR_9[3]);


     VAR_16 = 0;
     for (VAR_14 = VAR_3 - 1; VAR_14 >= VAR_3 / 2; VAR_14--) {
  int VAR_27 = VAR_7 + 1;
  if (!FUNC_1(VAR_6[VAR_14])) {

      FUNC_0(VAR_27, VAR_7, VAR_8, VAR_11, VAR_10, VAR_6[VAR_14]);
  }

  VAR_16 <<= 2;
  VAR_16 |= VAR_27;
     }
     VAR_5[1] = VAR_16;
 }
    }

    FUNC_3(VAR_15, 9 | (VAR_9[3][VAR_1] & 4) | ((VAR_9[1][VAR_1] >> 1) & 2));
    for (VAR_13 = 2 * 2 - 1; VAR_13 >= 0; VAR_13--) {
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {

     FUNC_5(VAR_15, 5);
     FUNC_4(VAR_15, VAR_9[VAR_13][VAR_12] >> 3);
 }
    }
    ((qword *)VAR_5)[1] = VAR_15;
}
