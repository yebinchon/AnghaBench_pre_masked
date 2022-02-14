
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvscsi_adapter {int dummy; } ;
struct PVSCSICmdDescResetDevice {int target; int member_0; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct pvscsi_adapter const*) ;
 int FUNC_2 (struct pvscsi_adapter const*,int ,struct PVSCSICmdDescResetDevice*,int) ;

__attribute__((used)) static void FUNC_3(const struct pvscsi_adapter *VAR_1, u32 VAR_2)
{
 struct PVSCSICmdDescResetDevice VAR_3 = { 0 };

 FUNC_0(FUNC_1(VAR_1), "Reseting device: target=%u\n", VAR_2);

 VAR_3.target = VAR_2;

 FUNC_2(VAR_1, VAR_0,
         &VAR_3, sizeof(VAR_3));
}
