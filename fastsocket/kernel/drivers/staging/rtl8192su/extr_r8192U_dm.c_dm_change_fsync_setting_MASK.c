
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct r8192_priv {scalar_t__ framesyncMonitor; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ s32 ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

extern void
FUNC_1(
 struct net_device *VAR_0,
 s32 VAR_1,
 s32 VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_0);

 if (VAR_1 == 0)
 {
  if(VAR_2 > 1)
   VAR_2 = 1;
  VAR_3->framesyncMonitor = (u8)VAR_2;

 }
}
