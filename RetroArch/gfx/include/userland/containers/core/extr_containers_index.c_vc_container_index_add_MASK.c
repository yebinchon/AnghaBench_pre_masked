
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_6__ {int next; scalar_t__ max_time; int count; int max_count; int len; int gap; int mgap; TYPE_1__* entry; } ;
typedef TYPE_2__ VC_CONTAINER_INDEX_T ;
struct TYPE_5__ {scalar_t__ time; scalar_t__ file_offset; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;

VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_INDEX_T *VAR_2, int64_t VAR_3, int64_t VAR_4 )
{
   if(VAR_2 == ((void*)0))
      return VAR_0;


   if(VAR_2->next != 0 && VAR_3 <= VAR_2->max_time)
      return VAR_1;

   VAR_2->count++;
   if(VAR_2->count == (1<<VAR_2->max_count))
   {
      int VAR_5;
      if(VAR_2->next == (1<<VAR_2->len))
      {


         VAR_2->next >>= 1;
         VAR_2->gap++;
         VAR_2->mgap--;
         VAR_2->max_count++;

         if(VAR_2->gap == VAR_2->len)
         {
            VAR_2->gap = 0;
            VAR_2->mgap = VAR_2->len;
         }
      }

      VAR_5 = FUNC_0(VAR_2, VAR_2->next);

      VAR_2->entry[VAR_5].file_offset = VAR_4;
      VAR_2->entry[VAR_5].time = VAR_3;
      VAR_2->count = 0;
      VAR_2->next++;
      VAR_2->max_time = VAR_3;
   }

   return VAR_1;
}
