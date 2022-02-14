
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {size_t level; TYPE_1__* levels; scalar_t__ frame_duration; scalar_t__ seen_ref_block; } ;
struct TYPE_7__ {scalar_t__ id; } ;
typedef TYPE_2__ MKV_READER_STATE_T ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6(VC_CONTAINER_T *VAR_8, MKV_READER_STATE_T *VAR_9)
{
   VC_CONTAINER_STATUS_T VAR_10 = VAR_6;

   do
   {
      if(VAR_9->level < 0)
      {



         VAR_10 = FUNC_4(VAR_8, VAR_9);
         if(VAR_10 == VAR_7)
         {
            FUNC_1(VAR_8, "multi-segment files not supported");
            VAR_10 = VAR_5;
            break;
         }
      }
      if(VAR_9->levels[VAR_9->level].id == VAR_0 ||
         VAR_9->levels[VAR_9->level].id == VAR_4)
      {
         VAR_10 = FUNC_5(VAR_8, VAR_9);
      }
      if(VAR_9->levels[VAR_9->level].id == VAR_1)
      {



         VAR_9->seen_ref_block = 0;
         VAR_9->frame_duration = 0;
         VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_0);
         if(VAR_10 == VAR_7) break;

         if(VAR_10 == VAR_6)
            VAR_10 = FUNC_5(VAR_8, VAR_9);
      }
      if(VAR_9->levels[VAR_9->level].id == VAR_2)
      {



         VAR_9->frame_duration = 0;
         VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_1);
         if(VAR_10 == VAR_7 &&
            VAR_9->levels[VAR_9->level].id == VAR_4) break;
         if(VAR_10 == VAR_6)
            VAR_10 = FUNC_5(VAR_8, VAR_9);
      }
      if(VAR_9->levels[VAR_9->level].id == VAR_3)
      {



         VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_2);
         if(VAR_10 == VAR_6)
            VAR_10 = FUNC_5(VAR_8, VAR_9);
      }

   } while(VAR_10 == VAR_7 && FUNC_2(VAR_8) == VAR_7);

   return VAR_10 == VAR_7 ? FUNC_2(VAR_8) : VAR_10;
}
