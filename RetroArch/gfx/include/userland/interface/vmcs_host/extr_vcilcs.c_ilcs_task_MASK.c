
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* ilcs_common_deinit ) (int ) ;int (* ilcs_thread_init ) (int ) ;} ;
struct TYPE_8__ {scalar_t__ kill_service; int thread; int wait_mtx; int send_sem; int wait_event; TYPE_2__* wait; int timer; int queue; int bulk_rx; int service; int ilcs_common; TYPE_1__ config; } ;
struct TYPE_7__ {int event; } ;
typedef TYPE_3__ ILCS_SERVICE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,TYPE_3__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void *FUNC_11(void *VAR_3)
{
   ILCS_SERVICE_T *VAR_4 = (ILCS_SERVICE_T *) VAR_3;
   int VAR_5;

   VAR_4->config.ilcs_thread_init(VAR_4->ilcs_common);

   while(VAR_4->kill_service < VAR_0)
      FUNC_0(VAR_4, 1);


   VAR_4->config.ilcs_common_deinit(VAR_4->ilcs_common);



   FUNC_6(&VAR_4->bulk_rx);
   FUNC_4(&VAR_4->queue);
   FUNC_10(&VAR_4->timer);
   for(VAR_5=0; VAR_5<VAR_1; VAR_5++)
      FUNC_6(&VAR_4->wait[VAR_5].event);
   FUNC_6(&VAR_4->wait_event);
   FUNC_8(&VAR_4->send_sem);
   FUNC_7(&VAR_4->wait_mtx);

   if(VAR_4->kill_service == VAR_0)
   {






      FUNC_5();

   }

   return 0;
}
