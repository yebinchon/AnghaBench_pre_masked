
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uml_net_private {int dummy; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, struct sk_buff *VAR_2, struct uml_net_private *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, FUNC_1(VAR_2),
      VAR_2->dev->mtu + 2 + VAR_0);
 if (VAR_4 <= 0)
  return(VAR_4);

 FUNC_2(VAR_2, 2);
 VAR_4 -= 2;
 return VAR_4;
}
