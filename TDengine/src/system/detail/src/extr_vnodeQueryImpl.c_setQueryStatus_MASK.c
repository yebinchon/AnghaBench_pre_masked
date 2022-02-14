
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_3__ {int over; } ;
typedef TYPE_1__ SQuery ;


 int VAR_0 ;

void FUNC_0(SQuery *VAR_1, int8_t VAR_2) {
  if (VAR_2 == VAR_0) {
    VAR_1->over = VAR_2;
  } else {

    VAR_1->over &= (~VAR_0);
    VAR_1->over |= VAR_2;
  }
}
