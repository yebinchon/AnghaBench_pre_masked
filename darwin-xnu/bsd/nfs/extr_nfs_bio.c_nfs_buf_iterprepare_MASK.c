
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfsbuflists {TYPE_2__* lh_first; } ;
typedef TYPE_3__* nfsnode_t ;
struct TYPE_7__ {int n_bufiterflags; struct nfsbuflists n_cleanblkhd; struct nfsbuflists n_dirtyblkhd; } ;
struct TYPE_5__ {TYPE_2__** le_prev; } ;
struct TYPE_6__ {TYPE_1__ nb_vnbufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfsbuflists*) ;
 int FUNC_1 (struct nfsbuflists*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*,int ,int ,char*,int *) ;
 int VAR_6 ;

int
FUNC_3(nfsnode_t VAR_7, struct nfsbuflists *VAR_8, int VAR_9)
{
 struct nfsbuflists *VAR_10;

 if (VAR_9 & VAR_2)
  VAR_10 = &VAR_7->n_dirtyblkhd;
 else
  VAR_10 = &VAR_7->n_cleanblkhd;

 if ((VAR_9 & VAR_5) && (VAR_7->n_bufiterflags & VAR_3)) {
         FUNC_1(VAR_8);
  return(VAR_1);
 }

 while (VAR_7->n_bufiterflags & VAR_3) {
         VAR_7->n_bufiterflags |= VAR_4;
  FUNC_2(&VAR_7->n_bufiterflags, VAR_6, 0, "nfs_buf_iterprepare", ((void*)0));
 }
 if (FUNC_0(VAR_10)) {
         FUNC_1(VAR_8);
  return(VAR_0);
 }
 VAR_7->n_bufiterflags |= VAR_3;

 VAR_8->lh_first = VAR_10->lh_first;
 VAR_10->lh_first->nb_vnbufs.le_prev = &VAR_8->lh_first;
 FUNC_1(VAR_10);

 return(0);
}
