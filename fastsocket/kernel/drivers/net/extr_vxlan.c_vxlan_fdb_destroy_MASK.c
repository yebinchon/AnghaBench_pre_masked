
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_fdb {int rcu; int hlist; int eth_addr; } ;
struct vxlan_dev {int addrcnt; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct vxlan_dev*,struct vxlan_fdb*,int ) ;

__attribute__((used)) static void FUNC_4(struct vxlan_dev *VAR_2, struct vxlan_fdb *VAR_3)
{
 FUNC_2(VAR_2->dev,
      "delete %pM\n", VAR_3->eth_addr);

 --VAR_2->addrcnt;
 FUNC_3(VAR_2, VAR_3, VAR_0);

 FUNC_1(&VAR_3->hlist);
 FUNC_0(&VAR_3->rcu, VAR_1);
}
