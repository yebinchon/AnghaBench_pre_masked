
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int kauth_action_t ;
struct TYPE_7__ {int v_type; int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;

 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(vnode_t VAR_5, int *VAR_6, kauth_action_t VAR_7, vfs_context_t VAR_8)
{
 int VAR_9;





 switch(VAR_5->v_type) {
 case 131:
 case 130:
 case 128:
 case 129:
  return(0);
 default:
  break;
 }





 if ((VAR_7 & VAR_2) && !FUNC_4(VAR_5->v_mount))
  return(0);





 if ((VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_8)) != VAR_0) {
  *VAR_6 = VAR_9;
  FUNC_0("%p    DENIED - opaque filesystem VNOP_ACCESS denied access", VAR_5);
  return(1);
 }





 if ((VAR_7 & VAR_3) && (VAR_5->v_type == VAR_4)) {

  if ((VAR_9 = FUNC_3(VAR_5, VAR_1, VAR_8)) != 0) {
   *VAR_6 = VAR_9;
   FUNC_0("%p    DENIED - EXECUTE denied because file could not be opened readonly", VAR_5);
   return(1);
  }
  FUNC_2(VAR_5, VAR_1, VAR_8);
 }





 *VAR_6 = 0;
 FUNC_0("%p    ALLOWED - bypassing access check for non-local filesystem", VAR_5);
 return(1);
}
