
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_3__ {size_t** c; int** r; } ;
typedef TYPE_1__ sdaux_t ;
typedef scalar_t__ int8_t ;



__attribute__((used)) static inline int FUNC_0(const sdaux_t *VAR_0, int8_t VAR_1[729], uint8_t VAR_2[324], int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 10, VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) VAR_2[VAR_0->c[VAR_3][VAR_5]] += VAR_4<<7;
 for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
  int VAR_8, VAR_9, VAR_10, VAR_11 = VAR_0->c[VAR_3][VAR_5];
  if (VAR_4 > 0) {
   for (VAR_8 = 0; VAR_8 < 9; ++VAR_8) {
    if (VAR_1[VAR_9 = VAR_0->r[VAR_11][VAR_8]]++ != 0) continue;
    for (VAR_10 = 0; VAR_10 < 4; ++VAR_10) {
     int VAR_12 = VAR_0->c[VAR_9][VAR_10];
     if (--VAR_2[VAR_12] < VAR_6)
      VAR_6 = VAR_2[VAR_12], VAR_7 = VAR_12;
    }
   }
  } else {
   const uint16_t *VAR_13;
   for (VAR_8 = 0; VAR_8 < 9; ++VAR_8) {
    if (--VAR_1[VAR_9 = VAR_0->r[VAR_11][VAR_8]] != 0) continue;
    VAR_13 = VAR_0->c[VAR_9]; ++VAR_2[VAR_13[0]]; ++VAR_2[VAR_13[1]]; ++VAR_2[VAR_13[2]]; ++VAR_2[VAR_13[3]];
   }
  }
 }
 return VAR_6<<16 | VAR_7;
}
