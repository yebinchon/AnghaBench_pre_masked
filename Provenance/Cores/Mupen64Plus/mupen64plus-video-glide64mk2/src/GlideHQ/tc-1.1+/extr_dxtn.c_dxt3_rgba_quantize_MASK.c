
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 size_t VAR_5 ;
 int** VAR_6 ;
 int FUNC_3 (int**,int,int) ;

__attribute__((used)) static void
FUNC_4 (dword *VAR_7, const byte *VAR_8[], int VAR_9)
{
    float VAR_10, VAR_11[VAR_3];

    dword VAR_12, VAR_13;
    dword VAR_14;
    int VAR_15, VAR_16;
    const int VAR_17 = 3;
    const int VAR_18 = 3;


    int VAR_19 = 2000;



    int VAR_20 = -1;
    int VAR_21 = 0;
    int VAR_22 = 0;

    byte VAR_23[VAR_4][VAR_3];
    int VAR_24, VAR_25, VAR_26;

    if (VAR_9 == 3) {

 FUNC_3(VAR_23, -1, sizeof(VAR_23));
    }



    for (VAR_26 = 0; VAR_26 < 4; VAR_26++) {
 for (VAR_25 = 0; VAR_25 < 4; VAR_25++) {
     for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++) {
  VAR_23[VAR_25 + VAR_26 * 4][VAR_24] = *VAR_8[VAR_26]++;
     }
 }
    }
    for (VAR_25 = 0; VAR_25 < VAR_4; VAR_25++) {
 int VAR_27 = 0;

 for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++) {
     VAR_27 += VAR_23[VAR_25][VAR_24];
 }



 if (VAR_19 > VAR_27) {
     VAR_19 = VAR_27;
     VAR_21 = VAR_25;
 }
 if (VAR_20 < VAR_27) {
     VAR_20 = VAR_27;
     VAR_22 = VAR_25;
 }
    }


    VAR_12 = VAR_13 = 0;
    for (VAR_25 = VAR_4 - 1; VAR_25 >= VAR_4 / 2; VAR_25--) {

 VAR_13 <<= 4;
 VAR_13 |= VAR_23[VAR_25][VAR_0] >> 4;
    }
    VAR_7[1] = VAR_13;
    for (; VAR_25 >= 0; VAR_25--) {

 VAR_12 <<= 4;
 VAR_12 |= VAR_23[VAR_25][VAR_0] >> 4;
    }
    VAR_7[0] = VAR_12;

    VAR_15 = FUNC_1(VAR_23[VAR_21]);
    VAR_16 = FUNC_1(VAR_23[VAR_22]);
    VAR_7[2] = VAR_15 | (VAR_16 << 16);

    VAR_14 = 0;
    if (VAR_15 != VAR_16) {
 FUNC_2(VAR_17, VAR_18, VAR_11, VAR_10, VAR_23[VAR_21], VAR_23[VAR_22]);


 for (VAR_25 = VAR_4 - 1; VAR_25 >= 0; VAR_25--) {
     int VAR_28;

     FUNC_0(VAR_28, VAR_17, VAR_18, VAR_11, VAR_10, VAR_23[VAR_25]);
     VAR_28 = VAR_6[0][VAR_28];

     VAR_14 <<= 2;
     VAR_14 |= VAR_28;
 }
    }
    VAR_7[3] = VAR_14;
}
