
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
struct TYPE_11__ {int mutex; int rect_req_thread_data; TYPE_2__ info; TYPE_4__* next; TYPE_1__* prev; scalar_t__ to_be_deleted; } ;
typedef TYPE_3__ WFC_STREAM_T ;
typedef int WFCNativeStreamType ;
struct TYPE_12__ {TYPE_1__* prev; } ;
struct TYPE_9__ {TYPE_4__* next; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 TYPE_3__* FUNC_9 (int ) ;
 TYPE_4__* VAR_2 ;

__attribute__((used)) static void FUNC_10(WFCNativeStreamType VAR_3)
{
   WFC_STREAM_T *VAR_4 = FUNC_9(VAR_3);

   FUNC_5("%s: stream handle 0x%x", VAR_0, VAR_3);

   if (VAR_4)
   {
      if (VAR_4->to_be_deleted)
      {
         FUNC_1(VAR_4);

         FUNC_5("%s: unlinking from list", VAR_0);

         if (VAR_4->next)
            VAR_4->next->prev = VAR_4->prev;
         if (VAR_4->prev)
            VAR_4->prev->next = VAR_4->next;
         else
            VAR_2 = VAR_4->next;


         if (VAR_2 == ((void*)0))
            FUNC_8();
      }
      else
      {
         FUNC_5("%s: stream 0x%x recycled before destruction", VAR_0, VAR_3);
         VAR_4 = ((void*)0);
      }
   }
   else
   {
      FUNC_4("%s: stream 0x%x not found", VAR_0, VAR_3);
   }

   FUNC_0();

   if (VAR_4)
   {

      FUNC_2(VAR_4);


      if(VAR_4->info.flags & VAR_1)
         FUNC_7(&VAR_4->rect_req_thread_data, ((void*)0));


      FUNC_6(&VAR_4->mutex);


      FUNC_3(VAR_4);
   }
}
