
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {short promisc; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_0(VAR_1);
 short VAR_3;





 VAR_3 = (VAR_1->flags & VAR_0) ? 1:0;

 if (VAR_3 != VAR_2->promisc)


 VAR_2->promisc = VAR_3;



}
