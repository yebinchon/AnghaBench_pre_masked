
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_6__ {int next; scalar_t__ max_time; TYPE_1__* entry; } ;
typedef TYPE_2__ VC_CONTAINER_INDEX_T ;
struct TYPE_5__ {scalar_t__ time; scalar_t__ file_offset; } ;


 size_t FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;

VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_INDEX_T *VAR_2, int VAR_3, int64_t *VAR_4, int64_t *VAR_5, int *VAR_6 )
{
   int VAR_7, VAR_8, VAR_9, VAR_10;

   if(VAR_2 == ((void*)0) || VAR_2->next == 0)
      return VAR_0;

   VAR_7 = VAR_8 = 0;
   VAR_9 = VAR_2->next-1;

   *VAR_6 = *VAR_4 > VAR_2->max_time;

   while(VAR_9-VAR_8 > 1)
   {
      int64_t VAR_11;
      VAR_7 = (VAR_8+VAR_9)>>1;
      VAR_11 = VAR_2->entry[FUNC_0(VAR_2, VAR_7)].time;

      if(*VAR_4 < VAR_11)
         VAR_9 = VAR_7;
      else if(*VAR_4 > VAR_11)
         VAR_8 = VAR_7;
      else
         break;
   }

   if (*VAR_4 != VAR_2->entry[FUNC_0(VAR_2, VAR_7)].time)
   {
      if(VAR_3)
      {
         if(*VAR_4 <= VAR_2->entry[FUNC_0(VAR_2, VAR_8)].time)
            VAR_7 = VAR_8;
         else
            VAR_7 = VAR_9;
      }
      else
      {
         if(*VAR_4 >= VAR_2->entry[FUNC_0(VAR_2, VAR_9)].time)
            VAR_7 = VAR_9;
         else
            VAR_7 = VAR_8;
      }
   }

   VAR_10 = FUNC_0(VAR_2, VAR_7);
   *VAR_4 = VAR_2->entry[VAR_10].time;
   *VAR_5 = VAR_2->entry[VAR_10].file_offset;

   return VAR_1;
}
