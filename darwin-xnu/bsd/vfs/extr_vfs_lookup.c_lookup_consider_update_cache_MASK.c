
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct componentname {int cn_namelen; char* cn_nameptr; int cn_flags; int cn_hash; } ;
struct TYPE_8__ {scalar_t__ v_parent; int v_flag; int v_nc_generation; int v_nclinks; int * v_name; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,struct componentname*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,char*,int,int ,int) ;

__attribute__((used)) static void
FUNC_3(vnode_t VAR_6, vnode_t VAR_7, struct componentname *VAR_8, int VAR_9)
{
 int VAR_10;
 VAR_10 = (VAR_8->cn_namelen == 1 && VAR_8->cn_nameptr[0] == '.') || (VAR_8->cn_flags & VAR_0);

 if (VAR_7->v_name == ((void*)0) || VAR_7->v_parent == VAR_2) {
  int VAR_11 = 0;

  if (VAR_10 == 0) {
   if (VAR_7->v_name == ((void*)0))
    VAR_11 |= VAR_4;
   if (VAR_6 != VAR_2 && VAR_7->v_parent == VAR_2)
    VAR_11 |= VAR_5;

   if (VAR_11)
    FUNC_2(VAR_7, VAR_6, VAR_8->cn_nameptr, VAR_8->cn_namelen, VAR_8->cn_hash, VAR_11);
  }
 }
 if ( (VAR_8->cn_flags & VAR_1) && (VAR_7->v_flag & VAR_3) && FUNC_0(&VAR_7->v_nclinks) == ((void*)0)) {
  if (VAR_6 != VAR_2 && (VAR_9 == VAR_6->v_nc_generation) && (!VAR_10))
   FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
 }

}
