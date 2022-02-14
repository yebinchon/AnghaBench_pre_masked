
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct nameidata {TYPE_1__* ni_vp; } ;
struct TYPE_5__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (struct nameidata*) ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct nameidata *VAR_3, vfs_context_t VAR_4)
{
 vnode_t VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_1(VAR_3)))
  return (VAR_6);
 FUNC_2(VAR_3);
 VAR_5 = VAR_3->ni_vp;

 if (VAR_5->v_type != VAR_2) {
  FUNC_4(VAR_5);
  return (VAR_0);
 }
 VAR_6 = FUNC_3(VAR_5, ((void*)0), VAR_1, VAR_4);
 if (VAR_6) {
  FUNC_4(VAR_5);
  return (VAR_6);
 }

 return (VAR_6);
}
