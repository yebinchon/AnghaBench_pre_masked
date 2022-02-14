
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input ;
typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int**,int**,int) ;
 int FUNC_3 (int*,int**) ;
 int FUNC_4 (int*,int**) ;
 int FUNC_5 (int*,int**,int**,int) ;
 int FUNC_6 (int*,int**) ;
 int FUNC_7 (int*,int**) ;
 int FUNC_8 (int**,int,int) ;

__attribute__((used)) static void
FUNC_9 (dword *VAR_4, const byte *VAR_5[], int VAR_6)
{
    int VAR_7;
    byte VAR_8[VAR_3][VAR_2];

    byte VAR_9[VAR_3][VAR_2];

    int VAR_10;

    int VAR_11, VAR_12;

    if (VAR_6 == 3) {

 FUNC_8(VAR_9, -1, sizeof(VAR_9));
    }



    for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
     for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9[VAR_11 + VAR_12 * 4][VAR_10] = *VAR_5[VAR_12]++;
     }
 }
 for (; VAR_11 < 8; VAR_11++) {
     for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9[VAR_11 + VAR_12 * 4 + 12][VAR_10] = *VAR_5[VAR_12]++;
     }
 }
    }
    VAR_12 = VAR_3;
    VAR_7 = 0;
    if (VAR_6 == 4) {

 VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {

     if (!FUNC_1(VAR_9[VAR_11])) {

  FUNC_0(VAR_8[VAR_12], VAR_9[VAR_11]);
  if (VAR_8[VAR_12][VAR_0] < (255 - VAR_1)) {

      VAR_7 = !0;
  }
  VAR_12++;
     }
 }
    }
    if (VAR_7) {
 FUNC_3(VAR_4, VAR_9);
    } else if (VAR_12 == 0) {
 VAR_4[0] = VAR_4[1] = VAR_4[2] = 0xFFFFFFFF;
 VAR_4[3] = 0;
    } else if (VAR_12 < VAR_3) {
 FUNC_7(VAR_4, VAR_9);
    } else {
 FUNC_6(VAR_4, VAR_9);
    }
    (void)FUNC_2;
    (void)FUNC_5;
    (void)FUNC_4;

}
