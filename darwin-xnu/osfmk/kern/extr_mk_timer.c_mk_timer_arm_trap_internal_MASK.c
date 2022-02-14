
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* mk_timer_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_7__ {scalar_t__ ip_kobject; } ;
struct TYPE_6__ {int lock; int active; int call_entry; int is_armed; int is_dead; TYPE_2__* port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_2__**) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int,int,int ) ;

__attribute__((used)) static kern_return_t
FUNC_10(mach_port_name_t VAR_8, uint64_t VAR_9, uint64_t VAR_10, uint64_t VAR_11) {
 mk_timer_t VAR_12;
 ipc_space_t VAR_13 = FUNC_1();
 ipc_port_t VAR_14;
 kern_return_t VAR_15;

 VAR_15 = FUNC_4(VAR_13, VAR_8, &VAR_14);
 if (VAR_15 != VAR_2)
  return (VAR_15);

 if (FUNC_2(VAR_14) == VAR_0) {
  VAR_12 = (mk_timer_t)VAR_14->ip_kobject;
  FUNC_0(VAR_12 != ((void*)0));

  FUNC_6(&VAR_12->lock);
  FUNC_0(VAR_12->port == VAR_14);
  FUNC_3(VAR_14);

  if (!VAR_12->is_dead) {
   VAR_12->is_armed = VAR_7;

   if (VAR_9 > FUNC_5()) {
    uint32_t VAR_16 = VAR_6;

    if (VAR_11 & VAR_3) {
     VAR_16 = VAR_5;
    }

    if (VAR_10 != 0) {
     VAR_16 |= VAR_4;
    }

    if (!FUNC_9(
     &VAR_12->call_entry, ((void*)0),
     VAR_9, VAR_10, VAR_16)) {

     VAR_12->active++;
    }
   } else {
    if (!FUNC_8(&VAR_12->call_entry, ((void*)0)))
     VAR_12->active++;
   }
  }

  FUNC_7(&VAR_12->lock);
 } else {
  FUNC_3(VAR_14);
  VAR_15 = VAR_1;
 }
 return (VAR_15);
}
