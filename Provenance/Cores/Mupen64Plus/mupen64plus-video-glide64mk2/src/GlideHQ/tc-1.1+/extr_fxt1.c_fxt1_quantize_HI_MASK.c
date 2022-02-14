
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 int FUNC_0 (int,int const,int const,float*,float,int*) ;
 size_t VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int const,int const,float*,float,int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void
FUNC_3 (dword *VAR_5,
    byte VAR_6[VAR_3][VAR_2],
    byte VAR_7[VAR_3][VAR_2], int VAR_8)
{
    const int VAR_9 = 6;
    const int VAR_10 = 3;
    float VAR_11 = 0.0F;
    float VAR_12[VAR_2];
    int VAR_13, VAR_14;
    dword VAR_15;


    int VAR_16 = 2000;



    int VAR_17 = -1;
    int VAR_18 = 0;
    int VAR_19 = 0;





    for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
 int VAR_20 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
     VAR_20 += VAR_7[VAR_14][VAR_13];
 }



 if (VAR_16 > VAR_20) {
     VAR_16 = VAR_20;
     VAR_18 = VAR_14;
 }
 if (VAR_17 < VAR_20) {
     VAR_17 = VAR_20;
     VAR_19 = VAR_14;
 }
    }

    VAR_15 = 0;
    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {

 VAR_15 <<= 5;
 VAR_15 |= VAR_7[VAR_19][VAR_13] >> 3;
    }
    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {

 VAR_15 <<= 5;
 VAR_15 |= VAR_7[VAR_18][VAR_13] >> 3;
    }
    VAR_5[3] = VAR_15;
    VAR_5[0] = VAR_5[1] = VAR_5[2] = 0;


    if (VAR_18 != VAR_19) {
 FUNC_2(VAR_9, VAR_10, VAR_12, VAR_11, VAR_7[VAR_18], VAR_7[VAR_19]);
    }


    for (VAR_14 = VAR_3 - 1; VAR_14 >= 0; VAR_14--) {
 int VAR_21 = VAR_14 * 3;
 dword *VAR_22 = (dword *)((byte *)VAR_5 + VAR_21 / 8);
 int VAR_23 = VAR_9 + 1;

 if (!FUNC_1(VAR_6[VAR_14])) {
     if (VAR_18 != VAR_19) {

  FUNC_0(VAR_23, VAR_9, VAR_10, VAR_12, VAR_11, VAR_6[VAR_14]);

  VAR_22[0] |= VAR_23 << (VAR_21 & 7);
     }
 } else {

     VAR_22[0] |= VAR_23 << (VAR_21 & 7);
 }
    }
}
