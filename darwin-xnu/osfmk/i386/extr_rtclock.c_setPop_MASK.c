
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ (* rtc_set ) (scalar_t__,scalar_t__) ;} ;
struct TYPE_3__ {scalar_t__ rtcPop; scalar_t__ rtcDeadline; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_3 () ;

uint64_t
FUNC_4(uint64_t VAR_2)
{
 uint64_t VAR_3;
 uint64_t VAR_4;


 if (VAR_2 == 0 || VAR_2 == VAR_0 ) {
  VAR_2 = VAR_0;
  VAR_3 = 0;
  VAR_4 = VAR_1->rtc_set(0, 0);
 } else {
  VAR_3 = FUNC_0();
  VAR_4 = VAR_1->rtc_set(VAR_2, VAR_3);
 }


 FUNC_3()->rtcDeadline = VAR_2;
 FUNC_3()->rtcPop = VAR_4;

 return VAR_4 - VAR_3;
}
