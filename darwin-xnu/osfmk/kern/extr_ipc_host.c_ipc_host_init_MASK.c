
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ipc_port_t ;
typedef int ipc_kobject_t ;
struct TYPE_5__ {TYPE_1__* exc_actions; int lock; } ;
struct TYPE_4__ {int * label; scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (int *,int *,int *) ;
 int VAR_11 ;
 int FUNC_9 (char*) ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;

void FUNC_10(void)
{
 ipc_port_t VAR_14;
 int VAR_15;

 FUNC_8(&VAR_13.lock, &VAR_10, &VAR_9);




 VAR_14 = FUNC_1();
 if (VAR_14 == VAR_8)
  FUNC_9("ipc_host_init");

 FUNC_0(VAR_14, (ipc_kobject_t) &VAR_13, VAR_7);
 FUNC_7(&VAR_13, VAR_4,
    FUNC_2(VAR_14));

 VAR_14 = FUNC_1();
 if (VAR_14 == VAR_8)
  FUNC_9("ipc_host_init");

 FUNC_0(VAR_14, (ipc_kobject_t) &VAR_13, VAR_5);
 FUNC_7(&VAR_13, VAR_2,
    FUNC_2(VAR_14));

 VAR_14 = FUNC_1();
 if (VAR_14 == VAR_8)
  FUNC_9("ipc_host_init");

 FUNC_0(VAR_14, (ipc_kobject_t) &VAR_13, VAR_6);
 FUNC_7(&VAR_13, VAR_3,
    FUNC_2(VAR_14));



 for (VAR_15 = VAR_1; VAR_15 < VAR_0; VAR_15++) {
   VAR_13.exc_actions[VAR_15].port = VAR_8;



   VAR_13.exc_actions[VAR_15].label = ((void*)0);
  }




 FUNC_6(&VAR_12);
 FUNC_5(&VAR_12);




 FUNC_4(VAR_11);
 FUNC_3(VAR_11);
}
