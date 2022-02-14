
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ErrorOrNot; int Recorver; int Value; } ;
typedef size_t RF90_RADIO_PATH_E ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int ,char*,size_t,size_t,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,size_t,size_t,int ,int ) ;

extern void FUNC_2(
 struct net_device * VAR_3,
 RF90_RADIO_PATH_E VAR_4,
 u32 VAR_5)
{

 if (VAR_1[VAR_4][VAR_5].ErrorOrNot == 1)
 {

  if (VAR_1[VAR_4][VAR_5].Recorver == 1)
  {
   FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2, VAR_1[VAR_4][VAR_5].Value);
   FUNC_0(VAR_0, "PHY_RFShadowRecorver RF-%d Addr%02x=%05x",
   VAR_4, VAR_5, VAR_1[VAR_4][VAR_5].Value);
  }
 }

}
