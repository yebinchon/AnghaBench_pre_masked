
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_2__ {int realTime; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(int *VAR_4, float *VAR_5, float VAR_6, int *VAR_7, int VAR_8, qboolean VAR_9, float VAR_10) {
  if (*VAR_4 & (VAR_2 | VAR_1)) {
    if (VAR_0->realTime > *VAR_7) {
      *VAR_7 = VAR_0->realTime + VAR_8;
      if (*VAR_4 & VAR_2) {
        *VAR_5 -= VAR_10;
        if (VAR_9 && *VAR_5 <= 0.0) {
          *VAR_4 &= ~(VAR_2 | VAR_3);
        }
      } else {
        *VAR_5 += VAR_10;
        if (*VAR_5 >= VAR_6) {
          *VAR_5 = VAR_6;
          if (VAR_9) {
            *VAR_4 &= ~VAR_1;
          }
        }
      }
    }
  }
}
