
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {struct PVSCSIRingsState* rings_state; } ;
struct PVSCSIRingsState {scalar_t__ msgProdIdx; scalar_t__ msgConsIdx; } ;



__attribute__((used)) static int FUNC_0(const struct pvscsi_adapter *VAR_0)
{
 struct PVSCSIRingsState *VAR_1 = VAR_0->rings_state;

 return VAR_1->msgProdIdx != VAR_1->msgConsIdx;
}
