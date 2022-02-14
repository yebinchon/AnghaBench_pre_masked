
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {int register_size; } ;


 struct fe_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 struct fe_priv *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->register_size;
}
