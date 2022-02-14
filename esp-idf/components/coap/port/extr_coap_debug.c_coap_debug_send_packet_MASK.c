
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_3 ;

int FUNC_1(void) {
  ++VAR_3;
  if (VAR_0 > 0) {
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
      if (VAR_3 >= VAR_1[VAR_4].start
        && VAR_3 <= VAR_1[VAR_4].end)
        return 0;
    }
  }
  if ( VAR_2 > 0 ) {
    uint16_t VAR_5 = 0;
    FUNC_0( (uint8_t*)&VAR_5, 2 );
    if ( VAR_5 < VAR_2 )
      return 0;
  }
  return 1;
}
