
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nfs_lockowner {int dummy; } ;
struct nfs4_state {int inode; } ;
struct TYPE_7__ {scalar_t__ seqid; } ;
struct TYPE_8__ {TYPE_1__ stateid; } ;
typedef TYPE_2__ nfs4_stateid ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct nfs4_state*,struct nfs_lockowner const*) ;
 int FUNC_2 (TYPE_2__*,struct nfs4_state*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int FUNC_4(nfs4_stateid *VAR_2, struct nfs4_state *VAR_3,
  fmode_t VAR_4, const struct nfs_lockowner *VAR_5)
{
 int VAR_6 = 0;
 if (FUNC_0(VAR_2, VAR_3->inode, VAR_4))
  goto out;
 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5);
 if (VAR_6 != -VAR_0)
  goto out;
 VAR_6 = FUNC_2(VAR_2, VAR_3);
out:
 if (FUNC_3(VAR_3->inode, VAR_1))
  VAR_2->stateid.seqid = 0;
 return VAR_6;
}
