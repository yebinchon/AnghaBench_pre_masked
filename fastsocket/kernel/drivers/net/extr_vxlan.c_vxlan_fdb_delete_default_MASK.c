
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int hash_lock; } ;


 struct vxlan_fdb* FUNC_0 (struct vxlan_dev*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vxlan_dev*,struct vxlan_fdb*) ;

__attribute__((used)) static void FUNC_4(struct vxlan_dev *VAR_1)
{
 struct vxlan_fdb *VAR_2;

 FUNC_1(&VAR_1->hash_lock);
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_3(VAR_1, VAR_2);
 FUNC_2(&VAR_1->hash_lock);
}
