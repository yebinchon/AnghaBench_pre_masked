
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_t ;
struct image_params {int ip_new_thread; int ip_vfs_context; TYPE_2__* ip_px_spa; } ;
typedef int proc_t ;
typedef scalar_t__ kern_return_t ;
typedef int * ipc_port_t ;
typedef int ipc_object_t ;
typedef scalar_t__ errno_t ;
typedef int boolean_t ;
struct TYPE_3__ {int port_type; int new_port; int flavor; int behavior; int mask; int which; } ;
typedef TYPE_1__ _ps_port_action_t ;
typedef TYPE_2__* _posix_spawn_port_actions_t ;
struct TYPE_4__ {int pspa_count; TYPE_1__* pspa_actions; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;




 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static errno_t
FUNC_13(struct image_params *VAR_7, boolean_t * VAR_8,
                         ipc_port_t * VAR_9)
{
 _posix_spawn_port_actions_t VAR_10 = VAR_7->ip_px_spa;



 _ps_port_action_t *VAR_11 = ((void*)0);
 task_t VAR_12 = FUNC_7(VAR_7->ip_new_thread);
 ipc_port_t VAR_13 = ((void*)0);
 errno_t VAR_14 = 0;
 int VAR_15;
 kern_return_t VAR_16;

 *VAR_8 = VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_10->pspa_count; VAR_15++) {
  VAR_11 = &VAR_10->pspa_actions[VAR_15];

  if (FUNC_3(VAR_11->new_port)) {
   VAR_16 = FUNC_8(FUNC_6(FUNC_5()),
                          VAR_11->new_port, VAR_3,
                          (ipc_object_t *) &VAR_13);

   if (VAR_16 != VAR_2) {
    VAR_14 = VAR_0;
    goto done;
   }
  } else {

   VAR_13 = FUNC_0(VAR_11->new_port);
  }

  switch (VAR_11->port_type) {
  case 128:
   VAR_16 = FUNC_11(VAR_12, VAR_11->which, VAR_13);

   if (VAR_16 != VAR_2)
    VAR_14 = VAR_0;
   break;

  case 130:
   VAR_16 = FUNC_10(VAR_12, VAR_11->mask, VAR_13,
                                 VAR_11->behavior, VAR_11->flavor);
   if (VAR_16 != VAR_2)
    VAR_14 = VAR_0;
   break;
  case 129:
   if (VAR_9 != ((void*)0) && FUNC_2(VAR_13)) {
    *VAR_8 = VAR_4;

    VAR_9[VAR_15] = VAR_13;
   } else {
    FUNC_9(VAR_13);
   }

   break;
  default:
   VAR_14 = VAR_0;
   break;
  }

  if (VAR_14) {

   FUNC_9(VAR_13);
   break;
  }
 }

done:
 if (0 != VAR_14)
  FUNC_1(VAR_6, VAR_5, VAR_11->new_port);
 return (VAR_14);
}
