
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct vfs_attr {int f_uuid; } ;
typedef int mount_t ;
struct TYPE_2__ {scalar_t__ state; int volume_uuid; scalar_t__ valid_uuid; } ;
typedef TYPE_1__ cp_lock_vfs_callback_arg ;


 int VAR_0 ;
 int FUNC_0 (struct vfs_attr*) ;
 int FUNC_1 (struct vfs_attr*,int ) ;
 int FUNC_2 (struct vfs_attr*,int ) ;
 int FUNC_3 (int ,int ,void*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,struct vfs_attr*,int ) ;

__attribute__((used)) static int
FUNC_8(mount_t VAR_2, void *VAR_3)
{
 cp_lock_vfs_callback_arg *VAR_4 = (cp_lock_vfs_callback_arg *)VAR_3;

 if (VAR_4->valid_uuid) {
  struct vfs_attr VAR_5;
  FUNC_0(&VAR_5);
  FUNC_2(&VAR_5, VAR_1);

  if (FUNC_7(VAR_2, &VAR_5, FUNC_5()))
   return 0;

  if (!FUNC_1(&VAR_5, VAR_1))
   return 0;

  if(FUNC_4(VAR_5.f_uuid, VAR_4->volume_uuid, sizeof(uuid_t)))
   return 0;
 }

 FUNC_3(VAR_2, VAR_0, (void *)(uintptr_t)VAR_4->state, 0, FUNC_6());
 return 0;
}
