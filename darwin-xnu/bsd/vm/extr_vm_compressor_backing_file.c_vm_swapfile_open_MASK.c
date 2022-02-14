
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int vfs_context_t ;
typedef int uint64_t ;
struct TYPE_8__ {TYPE_1__* v_mount; } ;
struct TYPE_7__ {int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (char const*,int,int,int ,TYPE_2__**,int ) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(const char *VAR_7, vnode_t *VAR_8)
{
 int VAR_9 = 0;
 vfs_context_t VAR_10 = FUNC_1();

 if ((VAR_9 = FUNC_3(VAR_7, (VAR_3 | VAR_4 | VAR_0 | VAR_1), VAR_5 | VAR_6, 0, VAR_8, VAR_10))) {
  FUNC_0("Failed to open swap file %d\n", VAR_9);
  *VAR_8 = ((void*)0);
  return;
 }






 if ((*VAR_8)->v_mount->mnt_kern_flag & VAR_2) {
  FUNC_4(*VAR_8);
  FUNC_2((uint64_t)VAR_7, *VAR_8);
  *VAR_8 = ((void*)0);
  return;
 }

 FUNC_4(*VAR_8);
}
