
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vxlan_dev {int hash_lock; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int ndm_state; int ndm_flags; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vxlan_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vxlan_dev*,unsigned char const*,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct nlattr**,struct vxlan_dev*,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct ndmsg *VAR_4, struct nlattr *VAR_5[],
    struct net_device *VAR_6,
    const unsigned char *VAR_7, u16 VAR_8)
{
 struct vxlan_dev *VAR_9 = FUNC_0(VAR_6);

 __be32 VAR_10;
 __be16 VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14;

 if (!(VAR_4->ndm_state & (VAR_2|VAR_3))) {
  FUNC_1("RTM_NEWNEIGH with invalid state %#x\n",
   VAR_4->ndm_state);
  return -VAR_0;
 }

 if (VAR_5[VAR_1] == ((void*)0))
  return -VAR_0;

 VAR_14 = FUNC_5(VAR_5, VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_2(&VAR_9->hash_lock);
 VAR_14 = FUNC_4(VAR_9, VAR_7, VAR_10, VAR_4->ndm_state, VAR_8,
          VAR_11, VAR_12, VAR_13, VAR_4->ndm_flags);
 FUNC_3(&VAR_9->hash_lock);

 return VAR_14;
}
