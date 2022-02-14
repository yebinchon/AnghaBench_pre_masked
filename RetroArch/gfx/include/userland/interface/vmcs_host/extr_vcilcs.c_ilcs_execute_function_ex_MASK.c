
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int VCHI_MEM_HANDLE_T ;
struct TYPE_7__ {scalar_t__ kill_service; scalar_t__ timer_needed; int wait_event; int thread; int send_sem; int fourcc; int vchiq; int service; int wait_mtx; int next_xid; TYPE_1__* wait; scalar_t__ timer_expired; int timer; } ;
struct TYPE_6__ {int* rlen; int * resp; int event; scalar_t__ xid; } ;
typedef int IL_FUNCTION_T ;
typedef TYPE_1__ ILCS_WAIT_T ;
typedef TYPE_2__ ILCS_SERVICE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,void*,int,void*,int) ;
 int FUNC_2 (int ,int ,int ,void*,int,int *) ;
 int FUNC_3 (int ,int ,void*,int,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int * FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;

__attribute__((used)) static int FUNC_15(ILCS_SERVICE_T *VAR_4, IL_FUNCTION_T VAR_5,
                                    void *VAR_6, int VAR_7,
                                    void *VAR_8, int VAR_9,
                                    VCHI_MEM_HANDLE_T VAR_10, void *VAR_11, int VAR_12,
                                    void *VAR_13, int *VAR_14)
{
   ILCS_WAIT_T *VAR_15 = ((void*)0);
   int VAR_16 = 0;
   uint32_t VAR_17;

   if(VAR_4->kill_service)
      return -1;


   FUNC_7(&VAR_4->wait_mtx);


   if(VAR_13 == ((void*)0)) {
      VAR_17 = VAR_4->next_xid++;
   }
   else
   {
      int VAR_18;

      if(VAR_4->timer_needed++ == 0)
      {
         FUNC_14(&VAR_4->timer, 10);
      }
      for (VAR_18=0; VAR_18<VAR_2; VAR_18++) {
         VAR_16 = 0;

         while(VAR_16 < VAR_1 && VAR_4->wait[VAR_16].resp != ((void*)0))
            VAR_16++;

         if(VAR_16 < VAR_1 || VAR_18 == VAR_2-1)
            break;



         if (VAR_4->timer_expired)
         {
            VAR_4->timer_expired = 0;
            FUNC_14(&VAR_4->timer, 10);
         }




         FUNC_8(&VAR_4->wait_mtx);



         if(FUNC_12() == &VAR_4->thread)
         {
            while (FUNC_5(&VAR_4->wait_event) != VAR_3)
            {
               while(FUNC_0(VAR_4, 0))
                  if(VAR_4->kill_service >= VAR_0)
                     return -1;
               if (FUNC_5(&VAR_4->wait_event) == VAR_3)
                  break;
               FUNC_11(1);
            }
         }
         else
         {
            FUNC_6(&VAR_4->wait_event);
         }

         FUNC_7(&VAR_4->wait_mtx);
      }

      if(--VAR_4->timer_needed == 0)
      {
         FUNC_13(&VAR_4->timer);
         VAR_4->timer_expired = 0;
      }

      if(VAR_16 == VAR_1)
      {

         FUNC_8(&VAR_4->wait_mtx);
         return -1;
      }

      VAR_15 = &VAR_4->wait[VAR_16];

      VAR_15->resp = VAR_13;
      VAR_15->rlen = VAR_14;
      VAR_17 = VAR_15->xid = VAR_4->next_xid++;
   }

   FUNC_8(&VAR_4->wait_mtx);

   if(VAR_12 != 0)
      FUNC_10(&VAR_4->send_sem);

   FUNC_1(VAR_4, VAR_5, VAR_17, VAR_6, VAR_7, VAR_8, VAR_9);

   if(VAR_12 != 0)
   {



      FUNC_2(VAR_4->vchiq, VAR_4->fourcc, VAR_10, VAR_11, VAR_12, ((void*)0));

      FUNC_9(&VAR_4->send_sem);
   }

   if(!VAR_15)
   {

      return 0;
   }

   if(FUNC_12() != &VAR_4->thread)
   {

      FUNC_6(&VAR_15->event);
   }
   else
   {





      for (;;)
      {


         FUNC_0(VAR_4, 1);


         if(VAR_4->kill_service >= VAR_0 || FUNC_5(&VAR_15->event) == VAR_3)
            break;
      }
   }


   VAR_15->resp = ((void*)0);
   FUNC_4(&VAR_4->wait_event);

   return VAR_4->kill_service >= VAR_0 ? -1 : 0;
}
