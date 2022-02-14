
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uml_net_private {int user; } ;
struct slirp_data {int dummy; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int,int ,int ,struct slirp_data*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct sk_buff *VAR_1, struct uml_net_private *VAR_2)
{
 return FUNC_1(VAR_0, FUNC_0(VAR_1), VAR_1->dev->mtu,
          (struct slirp_data *) &VAR_2->user);
}
