
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int txpower_count; int txpower_tracking_wq; int priv_wq; int btxpower_tracking; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct net_device*,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_2);
 static u8 VAR_4=0;


 if(!VAR_3->btxpower_tracking)
  return;
 else
 {
  if(VAR_3->txpower_count <= 2)
  {
   VAR_3->txpower_count++;
   return;
  }
 }

 if(!VAR_4)
 {



  FUNC_2(VAR_2, VAR_0, 0x02, VAR_1, 0x4d);
  FUNC_2(VAR_2, VAR_0, 0x02, VAR_1, 0x4f);
  FUNC_2(VAR_2, VAR_0, 0x02, VAR_1, 0x4d);
  FUNC_2(VAR_2, VAR_0, 0x02, VAR_1, 0x4f);
  VAR_4 = 1;
  return;
 }
 else
  {

   FUNC_1(VAR_3->priv_wq,&VAR_3->txpower_tracking_wq,0);
  VAR_4 = 0;
  }
}
