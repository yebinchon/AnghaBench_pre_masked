
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;
typedef int byte ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int const*,int) ;
 size_t VAR_2 ;
 int FUNC_1 (int,int,int,int) ;
 size_t VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void
FUNC_5 (const byte *VAR_4, int VAR_5, byte *VAR_6)
{
    const dword *VAR_7;
    int VAR_8[2][3];
    int VAR_9, VAR_10;

    VAR_7 = (const dword *)VAR_4;
    if (VAR_5 & 16) {
 VAR_5 &= 15;
 VAR_5 = (VAR_7[1] >> (VAR_5 * 2)) & 3;

 VAR_8[0][VAR_1] = (*(const dword *)(VAR_4 + 11)) >> 6;
 VAR_8[0][VAR_2] = FUNC_0(VAR_7, 99);
 VAR_8[0][VAR_3] = FUNC_0(VAR_7, 104);

 VAR_8[1][VAR_1] = FUNC_0(VAR_7, 109);
 VAR_8[1][VAR_2] = FUNC_0(VAR_7, 114);
 VAR_8[1][VAR_3] = FUNC_0(VAR_7, 119);
 VAR_9 = FUNC_0(VAR_7, 126);
 VAR_10 = FUNC_0(VAR_7, 33);
    } else {
 VAR_5 = (VAR_7[0] >> (VAR_5 * 2)) & 3;

 VAR_8[0][VAR_1] = FUNC_0(VAR_7, 64);
 VAR_8[0][VAR_2] = FUNC_0(VAR_7, 69);
 VAR_8[0][VAR_3] = FUNC_0(VAR_7, 74);

 VAR_8[1][VAR_1] = FUNC_0(VAR_7, 79);
 VAR_8[1][VAR_2] = FUNC_0(VAR_7, 84);
 VAR_8[1][VAR_3] = FUNC_0(VAR_7, 89);
 VAR_9 = FUNC_0(VAR_7, 125);
 VAR_10 = FUNC_0(VAR_7, 1);
    }

    if (FUNC_0(VAR_7, 124) & 1) {


 if (VAR_5 == 3) {
     FUNC_4(VAR_6);
 } else {
     if (VAR_5 == 0) {
  VAR_6[VAR_1] = FUNC_2(VAR_8[0][VAR_1]);
  VAR_6[VAR_2] = FUNC_2(VAR_8[0][VAR_2]);
  VAR_6[VAR_3] = FUNC_2(VAR_8[0][VAR_3]);
     } else if (VAR_5 == 2) {
  VAR_6[VAR_1] = FUNC_2(VAR_8[1][VAR_1]);
  VAR_6[VAR_2] = FUNC_3(VAR_8[1][VAR_2], VAR_9);
  VAR_6[VAR_3] = FUNC_2(VAR_8[1][VAR_3]);
     } else {
  VAR_6[VAR_1] = (FUNC_2(VAR_8[0][VAR_1]) + FUNC_2(VAR_8[1][VAR_1])) / 2;
  VAR_6[VAR_2] = (FUNC_2(VAR_8[0][VAR_2]) + FUNC_3(VAR_8[1][VAR_2], VAR_9)) / 2;
  VAR_6[VAR_3] = (FUNC_2(VAR_8[0][VAR_3]) + FUNC_2(VAR_8[1][VAR_3])) / 2;
     }
     VAR_6[VAR_0] = 255;
 }
    } else {


 if (VAR_5 == 0) {
     VAR_6[VAR_1] = FUNC_2(VAR_8[0][VAR_1]);
     VAR_6[VAR_2] = FUNC_3(VAR_8[0][VAR_2], VAR_9 ^ VAR_10);
     VAR_6[VAR_3] = FUNC_2(VAR_8[0][VAR_3]);
 } else if (VAR_5 == 3) {
     VAR_6[VAR_1] = FUNC_2(VAR_8[1][VAR_1]);
     VAR_6[VAR_2] = FUNC_3(VAR_8[1][VAR_2], VAR_9);
     VAR_6[VAR_3] = FUNC_2(VAR_8[1][VAR_3]);
 } else {
     VAR_6[VAR_1] = FUNC_1(3, VAR_5, FUNC_2(VAR_8[0][VAR_1]), FUNC_2(VAR_8[1][VAR_1]));
     VAR_6[VAR_2] = FUNC_1(3, VAR_5, FUNC_3(VAR_8[0][VAR_2], VAR_9 ^ VAR_10),
         FUNC_3(VAR_8[1][VAR_2], VAR_9));
     VAR_6[VAR_3] = FUNC_1(3, VAR_5, FUNC_2(VAR_8[0][VAR_3]), FUNC_2(VAR_8[1][VAR_3]));
 }
 VAR_6[VAR_0] = 255;
    }
}
