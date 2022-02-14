
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int bswitch_fsync; int bfsync_processing; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_1(VAR_0);


 VAR_1->bswitch_fsync = 0;
 VAR_1->bfsync_processing = 0;

 FUNC_0(VAR_0);

}
