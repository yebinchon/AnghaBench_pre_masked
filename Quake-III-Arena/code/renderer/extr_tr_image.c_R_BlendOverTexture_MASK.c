
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;



__attribute__((used)) static void FUNC_0( byte *VAR_0, int VAR_1, byte VAR_2[4] ) {
 int VAR_3;
 int VAR_4;
 int VAR_5[3];

 VAR_4 = 255 - VAR_2[3];
 VAR_5[0] = VAR_2[0] * VAR_2[3];
 VAR_5[1] = VAR_2[1] * VAR_2[3];
 VAR_5[2] = VAR_2[2] * VAR_2[3];

 for ( VAR_3 = 0 ; VAR_3 < VAR_1 ; VAR_3++, VAR_0+=4 ) {
  VAR_0[0] = ( VAR_0[0] * VAR_4 + VAR_5[0] ) >> 9;
  VAR_0[1] = ( VAR_0[1] * VAR_4 + VAR_5[1] ) >> 9;
  VAR_0[2] = ( VAR_0[2] * VAR_4 + VAR_5[2] ) >> 9;
 }
}
