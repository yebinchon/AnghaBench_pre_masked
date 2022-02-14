
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 int FUNC_0 (int,int,int const,float*,float,int*) ;
 int FUNC_1 (int*) ;
 size_t VAR_1 ;
 int FUNC_2 (int,int const,float*,float,int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int** VAR_5 ;

__attribute__((used)) static void
FUNC_3 (dword *VAR_6, const byte *VAR_7[], int VAR_8)
{
    float VAR_9, VAR_10[VAR_2];

    dword VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;
    const int VAR_15 = 3;
    int VAR_16 = 0;


    int VAR_17 = 2000;



    int VAR_18 = -1;
    int VAR_19 = 0;
    int VAR_20 = 0;

    byte VAR_21[VAR_3][VAR_2];
    int VAR_22, VAR_23, VAR_24;






    for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
 for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
     for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  VAR_21[VAR_23 + VAR_24 * 4][VAR_22] = *VAR_7[VAR_24]++;
     }
 }
    }
    for (VAR_23 = 0; VAR_23 < VAR_3; VAR_23++) {
 int VAR_25 = 0;

 for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
     VAR_25 += VAR_21[VAR_23][VAR_22];
 }
 if (VAR_17 > VAR_25) {
     VAR_17 = VAR_25;
     VAR_19 = VAR_23;
 }
 if (VAR_18 < VAR_25) {
     VAR_18 = VAR_25;
     VAR_20 = VAR_23;
 }
 if (VAR_25 == 0) {
     VAR_16 = 1;
 }
    }

    VAR_12 = FUNC_1(VAR_21[VAR_19]);
    VAR_13 = FUNC_1(VAR_21[VAR_20]);

    if (VAR_12 == VAR_13) {

 VAR_6[0] = VAR_12 | (VAR_13 << 16);
 VAR_11 = VAR_16 ? -1 : 0;
    } else {
 if (VAR_16 && ((VAR_12 == 0) || (VAR_13 == 0))) {

     VAR_16 = 0;
 }

 if (VAR_16 ^ (VAR_12 <= VAR_13)) {
     int VAR_26;
     VAR_26 = VAR_12;
     VAR_12 = VAR_13;
     VAR_13 = VAR_26;
     VAR_26 = VAR_19;
     VAR_19 = VAR_20;
     VAR_20 = VAR_26;
 }
 VAR_14 = (VAR_12 <= VAR_13) ? 2 : 3;

 FUNC_2(VAR_14, VAR_15, VAR_10, VAR_9, VAR_21[VAR_19], VAR_21[VAR_20]);


 VAR_6[0] = VAR_12 | (VAR_13 << 16);
 VAR_11 = 0;
 for (VAR_23 = VAR_3 - 1; VAR_23 >= 0; VAR_23--) {
     int VAR_27 = 3;
     int VAR_28 = 0;
     if (VAR_16) {
  for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
      VAR_28 += VAR_21[VAR_23][VAR_22];
  }
     }
     if (!VAR_16 || VAR_28) {

  FUNC_0(VAR_27, VAR_14, VAR_15, VAR_10, VAR_9, VAR_21[VAR_23]);
  VAR_27 = VAR_5[VAR_16][VAR_27];
     }

     VAR_11 <<= 2;
     VAR_11 |= VAR_27;
 }
    }
    VAR_6[1] = VAR_11;
}
