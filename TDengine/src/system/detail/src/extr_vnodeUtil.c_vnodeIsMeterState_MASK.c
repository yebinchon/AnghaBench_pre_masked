
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int state; } ;
typedef TYPE_1__ SMeterObj ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(SMeterObj* VAR_2, int32_t VAR_3) {
  if (VAR_3 == VAR_1) {
    return VAR_2->state == VAR_1;
  } else if (VAR_3 == VAR_0) {
    return VAR_2->state >= VAR_3;
  } else {
    return (((VAR_2->state) & VAR_3) == VAR_3);
  }
}
