
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlanhdr {int vx_flags; int vx_vni; } ;
struct vxlan_sock {int (* rcv ) (struct vxlan_sock*,struct sk_buff*,int) ;} ;
struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
typedef int __be16 ;
struct TYPE_2__ {int sport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct vxlan_sock*,struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 struct vxlan_sock* FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct vxlan_sock *VAR_5;
 struct vxlanhdr *VAR_6;
 __be16 VAR_7;


 if (!FUNC_7(VAR_4, VAR_2))
  goto error;


 VAR_6 = (struct vxlanhdr *)(FUNC_10(VAR_4) + 1);
 if (VAR_6->vx_flags != FUNC_0(VAR_1) ||
     (VAR_6->vx_vni & FUNC_0(0xff))) {
  FUNC_5(VAR_4->dev, "invalid vxlan flags=%#x vni=%#x\n",
      FUNC_6(VAR_6->vx_flags), FUNC_6(VAR_6->vx_vni));
  goto error;
 }

 if (FUNC_3(VAR_4, VAR_2, FUNC_1(VAR_0)))
  goto drop;

 VAR_7 = FUNC_2(VAR_3)->sport;

 VAR_5 = FUNC_11(FUNC_8(VAR_3), VAR_7);
 if (!VAR_5)
  goto drop;

 VAR_5->rcv(VAR_5, VAR_4, VAR_6->vx_vni);
 return 0;

drop:

 FUNC_4(VAR_4);
 return 0;

error:

 return 1;
}
