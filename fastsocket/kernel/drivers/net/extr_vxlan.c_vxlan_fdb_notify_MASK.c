
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int dev; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct vxlan_fdb*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_6 (struct net*,int ,int) ;
 int FUNC_7 (struct sk_buff*,struct vxlan_dev*,struct vxlan_fdb*,int ,int ,int,int ,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct vxlan_dev *VAR_4,
        struct vxlan_fdb *VAR_5, int VAR_6)
{
 struct net *VAR_7 = FUNC_1(VAR_4->dev);
 struct sk_buff *VAR_8;
 int VAR_9 = -VAR_1;

 VAR_8 = FUNC_4(FUNC_8(), VAR_2);
 if (VAR_8 == ((void*)0))
  goto errout;

 VAR_9 = FUNC_7(VAR_8, VAR_4, VAR_5, 0, 0, VAR_6, 0,
        FUNC_2(VAR_5));
 if (VAR_9 < 0) {

  FUNC_0(VAR_9 == -VAR_0);
  FUNC_3(VAR_8);
  goto errout;
 }

 FUNC_5(VAR_8, VAR_7, 0, VAR_3, ((void*)0), VAR_2);
 return;
errout:
 if (VAR_9 < 0)
  FUNC_6(VAR_7, VAR_3, VAR_9);
}
