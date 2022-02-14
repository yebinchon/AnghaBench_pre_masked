
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; } ;
struct TYPE_10__ {int to_be_deleted; struct TYPE_10__* prev; struct TYPE_10__* next; TYPE_1__ info; int handle; int mutex; } ;
typedef TYPE_2__ WFC_STREAM_T ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_9 (int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static WFC_STREAM_T *FUNC_10(WFCNativeStreamType VAR_4, bool VAR_5)
{
   WFC_STREAM_T *VAR_6 = FUNC_9(VAR_4);

   FUNC_5("%s: stream handle 0x%x", VAR_0, VAR_4);

   if (VAR_6 && !VAR_6->to_be_deleted)
   {
      if (!VAR_5)
      {
         FUNC_4("%s: attempt to create duplicate of stream handle 0x%x", VAR_0, VAR_4);

         VAR_6 = ((void*)0);
      }
      else
      {
         FUNC_5("%s: duplicate of stream handle 0x%x created", VAR_0, VAR_4);

         FUNC_1(VAR_6);
      }
   }
   else
   {
      if (VAR_6)
      {
         FUNC_5("%s: recycling data block for stream handle 0x%x", VAR_0, VAR_4);


         VAR_6->to_be_deleted = 0;

         FUNC_1(VAR_6);
      }
      else
      {
         FUNC_5("%s: allocating block for stream handle 0x%x", VAR_0, VAR_4);


         VAR_6 = FUNC_2(&VAR_2);

         if (VAR_6)
         {
            VCOS_STATUS_T VAR_7;

            VAR_7 = FUNC_6(&VAR_6->mutex, "WFC_STREAM_T mutex");
            if (FUNC_7(VAR_7 == VAR_1))
            {
               FUNC_1(VAR_6);


               if (!VAR_3)
                  FUNC_8();

               VAR_6->handle = VAR_4;
               VAR_6->info.size = sizeof(VAR_6->info);


               VAR_6->next = VAR_3;
               if (VAR_3)
                  VAR_3->prev = VAR_6;
               VAR_3 = VAR_6;
            }
            else
            {
               FUNC_4("%s: unable to create mutex for stream handle 0x%x", VAR_0, VAR_4);
               FUNC_3(VAR_6);
               VAR_6 = ((void*)0);
            }
         }
         else
         {
            FUNC_4("%s: unable to allocate data for stream handle 0x%x", VAR_0, VAR_4);
         }
      }
   }

   FUNC_0();

   return VAR_6;
}
