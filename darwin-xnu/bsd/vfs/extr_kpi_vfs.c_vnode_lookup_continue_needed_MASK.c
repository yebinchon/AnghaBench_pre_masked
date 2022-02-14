
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct nameidata {int ni_flag; } ;
struct componentname {int cn_flags; struct nameidata* cn_ndp; } ;
struct TYPE_5__ {scalar_t__ v_resolve; int * v_mountedhere; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int
FUNC_3(vnode_t VAR_4, struct componentname *VAR_5)
{
 struct nameidata *VAR_6 = VAR_5->cn_ndp;

 if (VAR_6 == ((void*)0)) {
  FUNC_0("vnode_lookup_continue_needed(): cnp->cn_ndp is NULL\n");
 }

 if (FUNC_1(VAR_4)) {
  if (VAR_4->v_mountedhere != ((void*)0)) {
   goto yes;
  }







 }


 if (FUNC_2(VAR_4)) {

  if (VAR_5->cn_flags & VAR_1) {
   goto yes;
  }
  if (VAR_6->ni_flag & VAR_3) {
   goto yes;
  }
 }

 return 0;

yes:
 VAR_6->ni_flag |= VAR_2;
 return VAR_0;
}
