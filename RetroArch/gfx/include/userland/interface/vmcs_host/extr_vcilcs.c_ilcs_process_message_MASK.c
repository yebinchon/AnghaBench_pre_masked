
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ data; } ;
typedef TYPE_1__ VCHIQ_HEADER_T ;
struct TYPE_9__ {int msg_inuse; int * msg; int vchiq; int service; int queue; } ;
typedef TYPE_2__ ILCS_SERVICE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned char*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,unsigned char*,scalar_t__) ;
 int FUNC_3 (int ,unsigned char*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(ILCS_SERVICE_T *VAR_3, int VAR_4)
{
   unsigned char *VAR_5;
   VCHIQ_HEADER_T *VAR_6;
   uint32_t VAR_7, VAR_8, VAR_9, VAR_10;

   if(!VAR_4 && FUNC_5(&VAR_3->queue))
      return 0;

   VAR_6 = FUNC_6(&VAR_3->queue);

   VAR_5 = (unsigned char *) VAR_6->data;

   VAR_9 = FUNC_0(VAR_5);
   VAR_10 = FUNC_0(VAR_5+4);

   VAR_5 += 8;
   VAR_8 = VAR_6->size - 8;

   if(VAR_9 == VAR_1)
   {
      FUNC_2(VAR_3, VAR_10, VAR_5, VAR_8);



      FUNC_4(VAR_3->vchiq, VAR_6);

   }
   else if(VAR_9 == VAR_2)
   {
      return 1;
   }
   else
   {

      if(VAR_3->msg_inuse == VAR_0)
      {




         FUNC_7(0);
         return 1;
      }

      VAR_7 = 0;
      while(VAR_3->msg_inuse & (1<<VAR_7))
         VAR_7++;

      VAR_3->msg_inuse |= (1<<VAR_7);

      FUNC_3(VAR_3->msg[VAR_7], VAR_5, VAR_8);



      FUNC_4(VAR_3->vchiq, VAR_6);

      FUNC_1(VAR_3, VAR_9, VAR_10, VAR_3->msg[VAR_7], VAR_8);


      VAR_3->msg_inuse &= ~(1<<VAR_7);
   }

   return 1;
}
