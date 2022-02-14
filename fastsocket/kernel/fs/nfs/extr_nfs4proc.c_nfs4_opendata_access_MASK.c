
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rpc_cred {int dummy; } ;
struct nfs_access_entry {int mask; int jiffies; struct rpc_cred* cred; } ;
struct nfs4_state {int inode; } ;
struct TYPE_2__ {scalar_t__ access_supported; int access_result; } ;
struct nfs4_opendata {TYPE_1__ o_res; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nfs4_state*,int) ;
 int FUNC_1 (int ,struct nfs_access_entry*) ;
 int FUNC_2 (struct nfs_access_entry*,int ) ;

__attribute__((used)) static int FUNC_3(struct rpc_cred *VAR_7,
    struct nfs4_opendata *VAR_8,
    struct nfs4_state *VAR_9, fmode_t VAR_10,
    int VAR_11)
{
 struct nfs_access_entry VAR_12;
 u32 VAR_13;



 if (VAR_8->o_res.access_supported == 0)
  return 0;

 VAR_13 = 0;




 if (VAR_11 & VAR_5) {

  VAR_13 = VAR_1;
 } else if (VAR_10 & VAR_0)
  VAR_13 = VAR_2;

 VAR_12.cred = VAR_7;
 VAR_12.jiffies = VAR_6;
 FUNC_2(&VAR_12, VAR_8->o_res.access_result);
 FUNC_1(VAR_9->inode, &VAR_12);

 if ((VAR_13 & ~VAR_12.mask & (VAR_2 | VAR_3 | VAR_1)) == 0)
  return 0;


 FUNC_0(VAR_9, VAR_10);
 return -VAR_4;
}
