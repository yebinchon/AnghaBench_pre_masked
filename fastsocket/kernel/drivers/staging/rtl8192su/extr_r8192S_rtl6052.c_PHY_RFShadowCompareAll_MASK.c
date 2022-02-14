
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
typedef int RF90_RADIO_PATH_E ;


 int FUNC_0 (struct net_device*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

extern void FUNC_1(struct net_device * VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++)
  {
   FUNC_0(VAR_2, (RF90_RADIO_PATH_E)VAR_3, VAR_4);
  }
 }

}
