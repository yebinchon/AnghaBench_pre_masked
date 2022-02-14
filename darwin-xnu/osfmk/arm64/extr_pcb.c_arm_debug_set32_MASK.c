
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct cpu_data {TYPE_4__* cpu_user_debug; } ;
typedef int off_state ;
typedef int boolean_t ;
struct TYPE_10__ {scalar_t__* bcr; scalar_t__* wcr; int mdscr_el1; int * wvr; int * bvr; } ;
struct TYPE_11__ {TYPE_1__ ds32; } ;
struct TYPE_13__ {TYPE_2__ uds; } ;
typedef TYPE_4__ arm_debug_state_t ;
struct TYPE_14__ {int num_breakpoint_pairs; int num_watchpoint_pairs; } ;
typedef TYPE_5__ arm_debug_info_t ;
struct TYPE_12__ {int upcb; } ;
struct TYPE_15__ {TYPE_3__ machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 () ;
 int FUNC_6 (TYPE_4__*,int) ;
 TYPE_6__* FUNC_7 () ;
 struct cpu_data* FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int,int) ;

void FUNC_14(arm_debug_state_t *VAR_5)
{
 struct cpu_data *VAR_6;
 arm_debug_info_t *VAR_7 = FUNC_5();
 boolean_t VAR_8, VAR_9 = 0;
 arm_debug_state_t VAR_10;
 uint32_t VAR_11;
 uint64_t VAR_12 = 0;

 VAR_8 = FUNC_10(VAR_2);
 VAR_6 = FUNC_8();


 VAR_6->cpu_user_debug = VAR_5;

 if (((void*)0) == VAR_5) {
  FUNC_6(&VAR_10, sizeof(VAR_10));
  VAR_5 = &VAR_10;
 }

 switch (VAR_7->num_breakpoint_pairs) {
 case 16:
  FUNC_1(15, (uint64_t)VAR_5->uds.ds32.bvr[15]);
  FUNC_0(15, (uint64_t)VAR_5->uds.ds32.bcr[15], VAR_12);
 case 15:
  FUNC_1(14, (uint64_t)VAR_5->uds.ds32.bvr[14]);
  FUNC_0(14, (uint64_t)VAR_5->uds.ds32.bcr[14], VAR_12);
 case 14:
  FUNC_1(13, (uint64_t)VAR_5->uds.ds32.bvr[13]);
  FUNC_0(13, (uint64_t)VAR_5->uds.ds32.bcr[13], VAR_12);
 case 13:
  FUNC_1(12, (uint64_t)VAR_5->uds.ds32.bvr[12]);
  FUNC_0(12, (uint64_t)VAR_5->uds.ds32.bcr[12], VAR_12);
 case 12:
  FUNC_1(11, (uint64_t)VAR_5->uds.ds32.bvr[11]);
  FUNC_0(11, (uint64_t)VAR_5->uds.ds32.bcr[11], VAR_12);
 case 11:
  FUNC_1(10, (uint64_t)VAR_5->uds.ds32.bvr[10]);
  FUNC_0(10, (uint64_t)VAR_5->uds.ds32.bcr[10], VAR_12);
 case 10:
  FUNC_1(9, (uint64_t)VAR_5->uds.ds32.bvr[9]);
  FUNC_0(9, (uint64_t)VAR_5->uds.ds32.bcr[9], VAR_12);
 case 9:
  FUNC_1(8, (uint64_t)VAR_5->uds.ds32.bvr[8]);
  FUNC_0(8, (uint64_t)VAR_5->uds.ds32.bcr[8], VAR_12);
 case 8:
  FUNC_1(7, (uint64_t)VAR_5->uds.ds32.bvr[7]);
  FUNC_0(7, (uint64_t)VAR_5->uds.ds32.bcr[7], VAR_12);
 case 7:
  FUNC_1(6, (uint64_t)VAR_5->uds.ds32.bvr[6]);
  FUNC_0(6, (uint64_t)VAR_5->uds.ds32.bcr[6], VAR_12);
 case 6:
  FUNC_1(5, (uint64_t)VAR_5->uds.ds32.bvr[5]);
  FUNC_0(5, (uint64_t)VAR_5->uds.ds32.bcr[5], VAR_12);
 case 5:
  FUNC_1(4, (uint64_t)VAR_5->uds.ds32.bvr[4]);
  FUNC_0(4, (uint64_t)VAR_5->uds.ds32.bcr[4], VAR_12);
 case 4:
  FUNC_1(3, (uint64_t)VAR_5->uds.ds32.bvr[3]);
  FUNC_0(3, (uint64_t)VAR_5->uds.ds32.bcr[3], VAR_12);
 case 3:
  FUNC_1(2, (uint64_t)VAR_5->uds.ds32.bvr[2]);
  FUNC_0(2, (uint64_t)VAR_5->uds.ds32.bcr[2], VAR_12);
 case 2:
  FUNC_1(1, (uint64_t)VAR_5->uds.ds32.bvr[1]);
  FUNC_0(1, (uint64_t)VAR_5->uds.ds32.bcr[1], VAR_12);
 case 1:
  FUNC_1(0, (uint64_t)VAR_5->uds.ds32.bvr[0]);
  FUNC_0(0, (uint64_t)VAR_5->uds.ds32.bcr[0], VAR_12);
 default:
  break;
 }

 switch (VAR_7->num_watchpoint_pairs) {
 case 16:
  FUNC_3(15, (uint64_t)VAR_5->uds.ds32.wvr[15]);
  FUNC_2(15, (uint64_t)VAR_5->uds.ds32.wcr[15], VAR_12);
 case 15:
  FUNC_3(14, (uint64_t)VAR_5->uds.ds32.wvr[14]);
  FUNC_2(14, (uint64_t)VAR_5->uds.ds32.wcr[14], VAR_12);
 case 14:
  FUNC_3(13, (uint64_t)VAR_5->uds.ds32.wvr[13]);
  FUNC_2(13, (uint64_t)VAR_5->uds.ds32.wcr[13], VAR_12);
 case 13:
  FUNC_3(12, (uint64_t)VAR_5->uds.ds32.wvr[12]);
  FUNC_2(12, (uint64_t)VAR_5->uds.ds32.wcr[12], VAR_12);
 case 12:
  FUNC_3(11, (uint64_t)VAR_5->uds.ds32.wvr[11]);
  FUNC_2(11, (uint64_t)VAR_5->uds.ds32.wcr[11], VAR_12);
 case 11:
  FUNC_3(10, (uint64_t)VAR_5->uds.ds32.wvr[10]);
  FUNC_2(10, (uint64_t)VAR_5->uds.ds32.wcr[10], VAR_12);
 case 10:
  FUNC_3(9, (uint64_t)VAR_5->uds.ds32.wvr[9]);
  FUNC_2(9, (uint64_t)VAR_5->uds.ds32.wcr[9], VAR_12);
 case 9:
  FUNC_3(8, (uint64_t)VAR_5->uds.ds32.wvr[8]);
  FUNC_2(8, (uint64_t)VAR_5->uds.ds32.wcr[8], VAR_12);
 case 8:
  FUNC_3(7, (uint64_t)VAR_5->uds.ds32.wvr[7]);
  FUNC_2(7, (uint64_t)VAR_5->uds.ds32.wcr[7], VAR_12);
 case 7:
  FUNC_3(6, (uint64_t)VAR_5->uds.ds32.wvr[6]);
  FUNC_2(6, (uint64_t)VAR_5->uds.ds32.wcr[6], VAR_12);
 case 6:
  FUNC_3(5, (uint64_t)VAR_5->uds.ds32.wvr[5]);
  FUNC_2(5, (uint64_t)VAR_5->uds.ds32.wcr[5], VAR_12);
 case 5:
  FUNC_3(4, (uint64_t)VAR_5->uds.ds32.wvr[4]);
  FUNC_2(4, (uint64_t)VAR_5->uds.ds32.wcr[4], VAR_12);
 case 4:
  FUNC_3(3, (uint64_t)VAR_5->uds.ds32.wvr[3]);
  FUNC_2(3, (uint64_t)VAR_5->uds.ds32.wcr[3], VAR_12);
 case 3:
  FUNC_3(2, (uint64_t)VAR_5->uds.ds32.wvr[2]);
  FUNC_2(2, (uint64_t)VAR_5->uds.ds32.wcr[2], VAR_12);
 case 2:
  FUNC_3(1, (uint64_t)VAR_5->uds.ds32.wvr[1]);
  FUNC_2(1, (uint64_t)VAR_5->uds.ds32.wcr[1], VAR_12);
 case 1:
  FUNC_3(0, (uint64_t)VAR_5->uds.ds32.wvr[0]);
  FUNC_2(0, (uint64_t)VAR_5->uds.ds32.wcr[0], VAR_12);
 default:
  break;
 }







 for (VAR_11 = 0; VAR_11 < VAR_7->num_breakpoint_pairs; VAR_11++) {
  if (0 != VAR_5->uds.ds32.bcr[VAR_11]) {
   VAR_9 = 1;
   break;
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->num_watchpoint_pairs; VAR_11++) {
  if (0 != VAR_5->uds.ds32.wcr[VAR_11]) {
   VAR_9 = 1;
   break;
  }
 }




 if (VAR_9) {
  FUNC_13(0, 0x8000);
 } else {
  FUNC_13(0x8000, 0);
 }




 if (VAR_5->uds.ds32.mdscr_el1 & 0x1) {
  FUNC_13(0x8000, 1);

  FUNC_12((FUNC_7()->machine.upcb),
   FUNC_9((FUNC_7()->machine.upcb)) | VAR_4);

 } else {

  FUNC_13(0x1, 0);





 }

 (void) FUNC_10(VAR_8);

 return;
}
