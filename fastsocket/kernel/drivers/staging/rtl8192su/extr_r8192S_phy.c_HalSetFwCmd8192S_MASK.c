
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct r8192_priv {scalar_t__ CurrentFwCmdIO; scalar_t__ SetFwCmdInProgress; scalar_t__ bInHctTest; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ FW_CMD_IO_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;

bool FUNC_4(struct net_device* VAR_5, FW_CMD_IO_TYPE VAR_6)
{
 struct r8192_priv *VAR_7 = FUNC_1(VAR_5);
 u16 VAR_8 = 0;

 u16 VAR_9 = 1000;


 if(VAR_7->bInHctTest)
  return 1;

 FUNC_0(VAR_0, "-->HalSetFwCmd8192S(): Set FW Cmd(%x), SetFwCmdInProgress(%d)\n", (u32)VAR_6, VAR_7->SetFwCmdInProgress);


 if(VAR_6==VAR_2 || VAR_6==VAR_3)
 {
  FUNC_0(VAR_0, "<--HalSetFwCmd8192S(): Set FW Cmd(%x)\n", (u32)VAR_6);
  return 0;
 }


 while(VAR_7->SetFwCmdInProgress && VAR_8<VAR_9)
 {






  FUNC_0(VAR_0, "HalSetFwCmd8192S(): previous workitem not finish!!\n");
  return 0;
  VAR_8 ++;
  FUNC_0(VAR_0, "HalSetFwCmd8192S(): Wait 10 ms (%d times)...\n", VAR_8);
  FUNC_3(100);
 }

 if(VAR_8 == VAR_9)
 {

  FUNC_0(VAR_0, "HalSetFwCmd8192S(): Wait too logn to set FW CMD\n");

 }

 if (VAR_7->SetFwCmdInProgress)
 {
  FUNC_0(VAR_1, "<--HalSetFwCmd8192S(): Set FW Cmd(%#x)\n", VAR_6);
  return 0;
 }
 VAR_7->SetFwCmdInProgress = VAR_4;
 VAR_7->CurrentFwCmdIO = VAR_6;

 FUNC_2(VAR_5);
 return 1;
}
