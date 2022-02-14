
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvscsi_adapter {struct PVSCSIRingMsgDesc* msg_ring; struct PVSCSIRingsState* rings_state; } ;
struct PVSCSIRingsState {int msgConsIdx; int msgNumEntriesLog2; } ;
struct PVSCSIRingMsgDesc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pvscsi_adapter const*) ;
 int FUNC_3 (struct pvscsi_adapter const*,struct PVSCSIRingMsgDesc*) ;

__attribute__((used)) static void FUNC_4(const struct pvscsi_adapter *VAR_0)
{
 struct PVSCSIRingsState *VAR_1 = VAR_0->rings_state;
 struct PVSCSIRingMsgDesc *VAR_2 = VAR_0->msg_ring;
 u32 VAR_3 = VAR_1->msgNumEntriesLog2;

 while (FUNC_2(VAR_0)) {
  struct PVSCSIRingMsgDesc *VAR_4 = VAR_2 + (VAR_1->msgConsIdx &
            FUNC_0(VAR_3));

  FUNC_1();
  FUNC_3(VAR_0, VAR_4);
  FUNC_1();
  VAR_1->msgConsIdx++;
 }
}
