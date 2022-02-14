
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct componentname {int dummy; } ;
struct TYPE_8__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*,struct componentname*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int ,int ) ;

int
FUNC_3(vnode_t VAR_4, vnode_t VAR_5, struct componentname *VAR_6, vfs_context_t VAR_7, void *VAR_8)
{



#pragma unused(cnp)

 if (VAR_8 != ((void*)0)) {
  FUNC_1("Non-NULL reserved argument to vn_authorize_rmdir()");
 }

 if (VAR_5->v_type != VAR_3) {



  return VAR_1;
 }

 if (VAR_4 == VAR_5) {



  return VAR_0;
 }
 return FUNC_2(VAR_5, VAR_4, VAR_2, VAR_7);
}
