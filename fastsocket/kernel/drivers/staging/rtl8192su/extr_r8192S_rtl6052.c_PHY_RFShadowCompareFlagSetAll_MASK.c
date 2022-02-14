
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
typedef int RF90_RADIO_PATH_E ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

extern void FUNC_1(struct net_device * VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  for (VAR_6 = 0; VAR_6 <= VAR_2; VAR_6++)
  {

   if (VAR_6 != 0x26 && VAR_6 != 0x27)
    FUNC_0(VAR_4, (RF90_RADIO_PATH_E)VAR_5, VAR_6, VAR_0);
   else
    FUNC_0(VAR_4, (RF90_RADIO_PATH_E)VAR_5, VAR_6, VAR_3);
  }
 }

}
