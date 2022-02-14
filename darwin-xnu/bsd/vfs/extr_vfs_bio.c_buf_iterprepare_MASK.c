
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* vnode_t ;
struct buflists {TYPE_2__* lh_first; } ;
struct TYPE_7__ {int v_iterblkflags; struct buflists v_cleanblkhd; struct buflists v_dirtyblkhd; } ;
struct TYPE_5__ {TYPE_2__** le_prev; } ;
struct TYPE_6__ {TYPE_1__ b_vnbufs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buflists*) ;
 int FUNC_1 (struct buflists*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*,int ,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_3(vnode_t VAR_5, struct buflists *VAR_6, int VAR_7)
{
 struct buflists * VAR_8;

 if (VAR_7 & VAR_1)
  VAR_8 = &VAR_5->v_dirtyblkhd;
 else
  VAR_8 = &VAR_5->v_cleanblkhd;

 while (VAR_5->v_iterblkflags & VAR_2) {
         VAR_5->v_iterblkflags |= VAR_3;
  FUNC_2(&VAR_5->v_iterblkflags, VAR_4, 0, "buf_iterprepare", ((void*)0));
 }
 if (FUNC_0(VAR_8)) {
         FUNC_1(VAR_6);
  return(VAR_0);
 }
 VAR_5->v_iterblkflags |= VAR_2;

 VAR_6->lh_first = VAR_8->lh_first;
 VAR_8->lh_first->b_vnbufs.le_prev = &VAR_6->lh_first;
 FUNC_1(VAR_8);

 return(0);
}
