
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ ns_base; scalar_t__ tsc_base; int shift; int scale; } ;
typedef TYPE_1__ pal_rtc_nanotime_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(uint64_t VAR_1, uint64_t VAR_2)
{
 pal_rtc_nanotime_t *VAR_3 = &VAR_0;
 uint64_t VAR_4;
 uint64_t VAR_5;
 uint64_t VAR_6;

 FUNC_2(!FUNC_3());
 VAR_6 = FUNC_4();
 VAR_4 = VAR_3->ns_base + FUNC_1(VAR_6 - VAR_3->tsc_base, VAR_3);
 VAR_5 = VAR_1 + FUNC_1(VAR_6 - VAR_2, VAR_3);





 if (VAR_4 < VAR_5) {
     FUNC_0(VAR_2, VAR_1, VAR_3->scale, VAR_3->shift, VAR_3);
     FUNC_5(VAR_3);
 }
}
