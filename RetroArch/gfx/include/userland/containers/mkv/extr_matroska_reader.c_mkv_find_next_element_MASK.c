
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {size_t level; int seen_ref_block; TYPE_1__* levels; } ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ size; scalar_t__ id; } ;
typedef TYPE_2__ MKV_READER_STATE_T ;
typedef int MKV_ELEMENT_T ;
typedef scalar_t__ MKV_ELEMENT_ID_T ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_5 (int *,int *,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int *,int,scalar_t__*,scalar_t__*,scalar_t__,int **) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7(VC_CONTAINER_T *VAR_8,
      MKV_READER_STATE_T *VAR_9, MKV_ELEMENT_ID_T VAR_10)
{
   VC_CONTAINER_STATUS_T VAR_11 = VAR_6;
   int64_t VAR_12, VAR_13;
   MKV_ELEMENT_ID_T VAR_14;


   do
   {
      MKV_ELEMENT_T *VAR_15 = VAR_7;


      if(FUNC_3(VAR_8) >= VAR_9->levels[VAR_9->level].offset +
         VAR_9->levels[VAR_9->level].size)
         return VAR_5;

      VAR_11 = FUNC_6(VAR_8, FUNC_0(1) << 30, &VAR_14,
            &VAR_12, VAR_9->levels[VAR_9->level].id, &VAR_15);
      VAR_13 = FUNC_3(VAR_8);
      if(VAR_11 != VAR_6) return VAR_11;
      if(VAR_14 == VAR_10) break;
      if(VAR_10 == VAR_1 && VAR_14 == VAR_3) break;

      if(VAR_10 == VAR_0 && VAR_14 == VAR_2)
         VAR_9->seen_ref_block = 1;


      if(FUNC_3(VAR_8) + VAR_12 >= VAR_9->levels[VAR_9->level].offset +
         VAR_9->levels[VAR_9->level].size)
         return VAR_5;

      VAR_11 = FUNC_5(VAR_8, VAR_15, VAR_12, FUNC_0(1) << 30);




   } while (VAR_11 == VAR_6 && FUNC_4(VAR_8) == VAR_6);

   if(FUNC_4(VAR_8) != VAR_6)
      return FUNC_4(VAR_8);

   VAR_9->level++;
   VAR_9->levels[VAR_9->level].offset = VAR_13;
   VAR_9->levels[VAR_9->level].size = VAR_12;
   VAR_9->levels[VAR_9->level].id = VAR_14;
   return VAR_6;
}
