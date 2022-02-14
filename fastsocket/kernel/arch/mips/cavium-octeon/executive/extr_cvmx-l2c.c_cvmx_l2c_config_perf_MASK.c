
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cnt0sel; int cnt0ena; int cnt0rdclr; int cnt1sel; int cnt1ena; int cnt1rdclr; int cnt2sel; int cnt2ena; int cnt2rdclr; int cnt3sel; int cnt3ena; int cnt3rdclr; } ;
union cvmx_l2c_pfctl {int u64; TYPE_1__ s; } ;
typedef int uint32_t ;
typedef enum cvmx_l2c_event { ____Placeholder_cvmx_l2c_event } cvmx_l2c_event ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(uint32_t VAR_1, enum cvmx_l2c_event VAR_2,
     uint32_t VAR_3)
{
 union cvmx_l2c_pfctl VAR_4;

 VAR_4.u64 = FUNC_1(VAR_0);

 switch (VAR_1) {
 case 0:
  VAR_4.s.cnt0sel = VAR_2;
  VAR_4.s.cnt0ena = 1;
  if (!FUNC_0())
   VAR_4.s.cnt0rdclr = VAR_3;
  break;
 case 1:
  VAR_4.s.cnt1sel = VAR_2;
  VAR_4.s.cnt1ena = 1;
  if (!FUNC_0())
   VAR_4.s.cnt1rdclr = VAR_3;
  break;
 case 2:
  VAR_4.s.cnt2sel = VAR_2;
  VAR_4.s.cnt2ena = 1;
  if (!FUNC_0())
   VAR_4.s.cnt2rdclr = VAR_3;
  break;
 case 3:
 default:
  VAR_4.s.cnt3sel = VAR_2;
  VAR_4.s.cnt3ena = 1;
  if (!FUNC_0())
   VAR_4.s.cnt3rdclr = VAR_3;
  break;
 }

 FUNC_2(VAR_0, VAR_4.u64);
}
