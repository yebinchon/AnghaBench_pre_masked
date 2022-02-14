
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* vm_named_entry_t ;
typedef int vm_map_t ;
typedef int uint32_t ;
typedef TYPE_3__* ipc_port_t ;
struct TYPE_14__ {scalar_t__ ip_kobject; } ;
struct TYPE_12__ {int map; } ;
struct TYPE_13__ {int protection; TYPE_1__ backing; scalar_t__ is_sub_map; int Lock; int ref_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

vm_map_t
FUNC_11(
 ipc_port_t VAR_4)
{
 vm_map_t VAR_5;
 vm_named_entry_t VAR_6;
 uint32_t VAR_7 = 0;

 if(FUNC_0(VAR_4) && (FUNC_3(VAR_4) == VAR_0)) {
  while(VAR_1) {
   FUNC_4(VAR_4);
   if(FUNC_2(VAR_4) && (FUNC_3(VAR_4)
            == VAR_0)) {
    VAR_6 =
     (vm_named_entry_t)VAR_4->ip_kobject;
    if (!(FUNC_6(&(VAR_6)->Lock))) {
                          FUNC_5(VAR_4);

     VAR_7++;
                          FUNC_9(VAR_7);
                          continue;
                  }
    VAR_6->ref_count++;
    FUNC_7(&(VAR_6)->Lock);
    FUNC_5(VAR_4);
    if ((VAR_6->is_sub_map) &&
        (VAR_6->protection
         & VAR_3)) {
     VAR_5 = VAR_6->backing.map;
    } else {
     FUNC_8(VAR_4);
     return VAR_2;
    }
    FUNC_10(VAR_5);
    FUNC_8(VAR_4);
    break;
   }
   else
    return VAR_2;
  }
 }
 else
  VAR_5 = FUNC_1(VAR_4);

 return VAR_5;
}
