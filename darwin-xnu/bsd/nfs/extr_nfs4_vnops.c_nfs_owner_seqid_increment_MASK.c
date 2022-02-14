
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_owner {int noo_seqid; } ;
struct nfs_lock_owner {int nlo_seqid; } ;
void
FUNC_0(struct nfs_open_owner *VAR_0, struct nfs_lock_owner *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 129:
 case 128:
 case 131:
 case 133:
 case 134:
 case 135:
 case 130:
 case 132:

  return;
 }
 if (VAR_0)
  VAR_0->noo_seqid++;
 if (VAR_1)
  VAR_1->nlo_seqid++;
}
