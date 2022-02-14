
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int Compare; size_t Value; int ErrorOrNot; } ;
typedef size_t RF90_RADIO_PATH_E ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int ,char*,size_t,size_t,size_t) ;
 int VAR_2 ;
 size_t FUNC_1 (struct net_device*,size_t,size_t,int ) ;

extern void FUNC_2(
 struct net_device * VAR_3,
 RF90_RADIO_PATH_E VAR_4,
 u32 VAR_5)
{
 u32 VAR_6;


 if (VAR_1[VAR_4][VAR_5].Compare == 1)
 {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2);

  if (VAR_1[VAR_4][VAR_5].Value != VAR_6)
  {

   VAR_1[VAR_4][VAR_5].ErrorOrNot = 1;
   FUNC_0(VAR_0, "PHY_RFShadowCompare RF-%d Addr%02xErr = %05x", VAR_4, VAR_5, VAR_6);
  }
 }

}
