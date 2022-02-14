
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int hi; } ;
struct TYPE_12__ {int hi; int lo; } ;
struct TYPE_11__ {int hi; int lo; } ;
struct TYPE_10__ {int hi; int lo; } ;
struct TYPE_9__ {int lo; } ;
struct TYPE_14__ {TYPE_5__ CompParm6; TYPE_4__ CompParm5; TYPE_3__ CompParm4; TYPE_2__ CompParm3; TYPE_1__ CompParm2; } ;
typedef TYPE_6__ dmacHw_MISC_t ;
typedef int dmacHw_HANDLE_t ;
struct TYPE_15__ {int channel; int module; } ;
typedef TYPE_7__ dmacHw_CBLK_t ;


 int FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static uint32_t FUNC_3(dmacHw_HANDLE_t VAR_0
    ) {
 uint32_t VAR_1 = 0;
 dmacHw_CBLK_t *VAR_2 = FUNC_1(VAR_0);
 dmacHw_MISC_t *VAR_3 =
     (dmacHw_MISC_t *) FUNC_2(VAR_2->module);

 switch (VAR_2->channel) {
 case 0:
  VAR_1 = (VAR_3->CompParm2.lo & 0x70000000) >> 28;
  break;
 case 1:
  VAR_1 = (VAR_3->CompParm3.hi & 0x70000000) >> 28;
  break;
 case 2:
  VAR_1 = (VAR_3->CompParm3.lo & 0x70000000) >> 28;
  break;
 case 3:
  VAR_1 = (VAR_3->CompParm4.hi & 0x70000000) >> 28;
  break;
 case 4:
  VAR_1 = (VAR_3->CompParm4.lo & 0x70000000) >> 28;
  break;
 case 5:
  VAR_1 = (VAR_3->CompParm5.hi & 0x70000000) >> 28;
  break;
 case 6:
  VAR_1 = (VAR_3->CompParm5.lo & 0x70000000) >> 28;
  break;
 case 7:
  VAR_1 = (VAR_3->CompParm6.hi & 0x70000000) >> 28;
  break;
 }

 if (VAR_1 <= 0x4) {
  return 8 << VAR_1;
 } else {
  FUNC_0(0);
 }
 return 0;
}
