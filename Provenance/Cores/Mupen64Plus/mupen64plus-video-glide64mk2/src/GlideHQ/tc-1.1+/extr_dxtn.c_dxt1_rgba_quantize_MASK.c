
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input ;
typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int,int const,float*,float,int*) ;
 int FUNC_1 (int*) ;
 size_t VAR_2 ;
 int FUNC_2 (int,int const,float*,float,int*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int** VAR_6 ;
 int FUNC_3 (int**,int,int) ;

__attribute__((used)) static void
FUNC_4 (dword *VAR_7, const byte *VAR_8[], int VAR_9)
{
    float VAR_10, VAR_11[VAR_3];

    dword VAR_12;
    int VAR_13, VAR_14;
    int VAR_15;
    const int VAR_16 = 3;
    int VAR_17 = 0;


    int VAR_18 = 2000;



    int VAR_19 = -1;
    int VAR_20 = 0;
    int VAR_21 = 0;

    byte VAR_22[VAR_4][VAR_3];
    int VAR_23, VAR_24, VAR_25;

    if (VAR_9 == 3) {

 FUNC_3(VAR_22, -1, sizeof(VAR_22));
    }



    for (VAR_25 = 0; VAR_25 < 4; VAR_25++) {
 for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
     for (VAR_23 = 0; VAR_23 < VAR_9; VAR_23++) {
  VAR_22[VAR_24 + VAR_25 * 4][VAR_23] = *VAR_8[VAR_25]++;
     }
 }
    }
    for (VAR_24 = 0; VAR_24 < VAR_4; VAR_24++) {
 int VAR_26 = 0;

 for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
     VAR_26 += VAR_22[VAR_24][VAR_23];
 }



 if (VAR_18 > VAR_26) {
     VAR_18 = VAR_26;
     VAR_20 = VAR_24;
 }
 if (VAR_19 < VAR_26) {
     VAR_19 = VAR_26;
     VAR_21 = VAR_24;
 }
 if (VAR_22[VAR_24][VAR_0] < 128) {
     VAR_17 = 1;
 }
    }

    VAR_13 = FUNC_1(VAR_22[VAR_20]);
    VAR_14 = FUNC_1(VAR_22[VAR_21]);

    if (VAR_13 == VAR_14) {

 VAR_7[0] = VAR_13 | (VAR_14 << 16);
 VAR_12 = VAR_17 ? -1 : 0;
    } else {
 if (VAR_17 ^ (VAR_13 <= VAR_14)) {
     int VAR_27;
     VAR_27 = VAR_13;
     VAR_13 = VAR_14;
     VAR_14 = VAR_27;
     VAR_27 = VAR_20;
     VAR_20 = VAR_21;
     VAR_21 = VAR_27;
 }
 VAR_15 = (VAR_13 <= VAR_14) ? 2 : 3;

 FUNC_2(VAR_15, VAR_16, VAR_11, VAR_10, VAR_22[VAR_20], VAR_22[VAR_21]);


 VAR_7[0] = VAR_13 | (VAR_14 << 16);
 VAR_12 = 0;
 for (VAR_24 = VAR_4 - 1; VAR_24 >= 0; VAR_24--) {
     int VAR_28 = 3;
     if (VAR_22[VAR_24][VAR_0] >= 128) {

  FUNC_0(VAR_28, VAR_15, VAR_16, VAR_11, VAR_10, VAR_22[VAR_24]);
  VAR_28 = VAR_6[VAR_17][VAR_28];
     }

     VAR_12 <<= 2;
     VAR_12 |= VAR_28;
 }
    }
    VAR_7[1] = VAR_12;
}
