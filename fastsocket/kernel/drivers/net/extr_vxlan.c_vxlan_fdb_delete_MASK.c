
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vxlan_rdst {int rcu; int list; } ;
struct vxlan_fdb {int remotes; } ;
struct vxlan_dev {int hash_lock; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;
typedef scalar_t__ __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vxlan_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vxlan_dev*,struct vxlan_fdb*) ;
 struct vxlan_rdst* FUNC_8 (struct vxlan_fdb*,scalar_t__,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_9 (struct nlattr**,struct vxlan_dev*,scalar_t__*,int *,int *,int *) ;
 struct vxlan_fdb* FUNC_10 (struct vxlan_dev*,unsigned char const*) ;

__attribute__((used)) static int FUNC_11(struct ndmsg *VAR_3, struct nlattr *VAR_4[],
       struct net_device *VAR_5,
       const unsigned char *VAR_6)
{
 struct vxlan_dev *VAR_7 = FUNC_4(VAR_5);
 struct vxlan_fdb *VAR_8;
 struct vxlan_rdst *VAR_9 = ((void*)0);
 __be32 VAR_10;
 __be16 VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = FUNC_9(VAR_4, VAR_7, &VAR_10, &VAR_11, &VAR_12, &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = -VAR_0;

 FUNC_5(&VAR_7->hash_lock);
 VAR_8 = FUNC_10(VAR_7, VAR_6);
 if (!VAR_8)
  goto out;

 if (VAR_10 != FUNC_1(VAR_1)) {
  VAR_9 = FUNC_8(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13);
  if (!VAR_9)
   goto out;
 }

 VAR_14 = 0;




 if (VAR_9 && !FUNC_3(&VAR_8->remotes)) {
  FUNC_2(&VAR_9->list);
  FUNC_0(&VAR_9->rcu, VAR_2);
  goto out;
 }

 FUNC_7(VAR_7, VAR_8);

out:
 FUNC_6(&VAR_7->hash_lock);

 return VAR_14;
}
