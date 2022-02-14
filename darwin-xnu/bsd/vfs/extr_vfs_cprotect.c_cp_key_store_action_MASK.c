
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_2__ {int valid_uuid; int volume_uuid; int state; } ;
typedef TYPE_1__ cp_lock_vfs_callback_arg ;
typedef int cp_key_store_action_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,void*) ;

int
FUNC_2(cp_key_store_action_t VAR_3)
{
 cp_lock_vfs_callback_arg VAR_4;

 switch (VAR_3) {
  case 129:
  case 128:
   VAR_4.state = (VAR_3 == 129 ? VAR_0 : VAR_1);
   FUNC_0(VAR_4.volume_uuid, 0, sizeof(uuid_t));
   VAR_4.valid_uuid = 0;
   return FUNC_1(0, VAR_2, (void *)&VAR_4);
  default:
   return -1;
 }
}
