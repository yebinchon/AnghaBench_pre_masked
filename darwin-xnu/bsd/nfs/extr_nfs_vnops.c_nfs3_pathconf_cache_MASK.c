
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nfsa_flags; int nfsa_bitmap; int nfsa_maxname; int nfsa_maxlink; } ;
struct nfsmount {int nm_state; TYPE_1__ nm_fsattr; } ;
struct nfs_fsattr {int nfsa_flags; int nfsa_maxname; int nfsa_maxlink; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_1(struct nfsmount *VAR_11, struct nfs_fsattr *VAR_12)
{
 VAR_11->nm_fsattr.nfsa_maxlink = VAR_12->nfsa_maxlink;
 VAR_11->nm_fsattr.nfsa_maxname = VAR_12->nfsa_maxname;
 VAR_11->nm_fsattr.nfsa_flags &= ~(VAR_10|VAR_9|VAR_7|VAR_8);
 VAR_11->nm_fsattr.nfsa_flags |= VAR_12->nfsa_flags & VAR_10;
 VAR_11->nm_fsattr.nfsa_flags |= VAR_12->nfsa_flags & VAR_9;
 VAR_11->nm_fsattr.nfsa_flags |= VAR_12->nfsa_flags & VAR_7;
 VAR_11->nm_fsattr.nfsa_flags |= VAR_12->nfsa_flags & VAR_8;
 FUNC_0(VAR_11->nm_fsattr.nfsa_bitmap, VAR_4);
 FUNC_0(VAR_11->nm_fsattr.nfsa_bitmap, VAR_5);
 FUNC_0(VAR_11->nm_fsattr.nfsa_bitmap, VAR_6);
 FUNC_0(VAR_11->nm_fsattr.nfsa_bitmap, VAR_3);
 FUNC_0(VAR_11->nm_fsattr.nfsa_bitmap, VAR_1);
 FUNC_0(VAR_11->nm_fsattr.nfsa_bitmap, VAR_2);
 VAR_11->nm_state |= VAR_0;
}
