
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int) ;

void FUNC_4(struct net_device* VAR_4)
{
 u16 VAR_5 = 1000;
 u32 VAR_6;

 do
 {







  FUNC_3(10);
  VAR_6 = FUNC_2(VAR_4, VAR_3);
  if(VAR_6 == 0)
  {
   FUNC_0(VAR_1, "[FW CMD] Set FW Cmd success!!\n");
   break;
  }
  else
  {
   FUNC_0(VAR_1, "[FW CMD] Polling FW Cmd PollingCnt(%d)!!\n", VAR_5);
  }
 }while( --VAR_5 );

 if(VAR_5 == 0)
 {
  FUNC_0(VAR_2, "[FW CMD] Set FW Cmd fail!!\n");
 }
}
