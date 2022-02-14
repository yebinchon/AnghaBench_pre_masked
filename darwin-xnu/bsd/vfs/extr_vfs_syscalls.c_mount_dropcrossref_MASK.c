
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct mount {int dummy; } ;
typedef TYPE_2__* mount_t ;
typedef int caddr_t ;
struct TYPE_11__ {scalar_t__ mnt_crossref; } ;
struct TYPE_10__ {TYPE_2__* v_mountedhere; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(mount_t VAR_1, vnode_t VAR_2, int VAR_3)
{
 FUNC_4(VAR_2);
 VAR_1->mnt_crossref--;

 if (VAR_1->mnt_crossref < 0)
  FUNC_3("mount cross refs -ve");

 if ((VAR_1 != VAR_2->v_mountedhere) && (VAR_1->mnt_crossref == 0)) {

  if (VAR_3)
   FUNC_5(VAR_2);
  FUNC_6(VAR_2);

  FUNC_2(VAR_1);



  FUNC_0((caddr_t)VAR_1, sizeof (struct mount), VAR_0);
  return;
 }
 if (VAR_3)
  FUNC_5(VAR_2);
 FUNC_6(VAR_2);
}
