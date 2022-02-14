
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* int64_t ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {size_t level; TYPE_1__* levels; } ;
struct TYPE_4__ {scalar_t__ id; void* size; void* offset; } ;
typedef TYPE_2__ MKV_READER_STATE_T ;
typedef int MKV_ELEMENT_T ;
typedef scalar_t__ MKV_ELEMENT_ID_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (int *,int *,void*,int ) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__*,void**,int ,int **) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_T *VAR_4,
      MKV_READER_STATE_T *VAR_5)
{
   VC_CONTAINER_STATUS_T VAR_6 = VAR_2;
   int64_t VAR_7, VAR_8;
   MKV_ELEMENT_ID_T VAR_9;


   do
   {
      MKV_ELEMENT_T *VAR_10 = VAR_3;

      VAR_6 = FUNC_4(VAR_4, FUNC_0(-1), &VAR_9,
            &VAR_7, VAR_0, &VAR_10);

      VAR_8 = FUNC_1(VAR_4);
      if(VAR_6 != VAR_2) return VAR_6;
      if(VAR_9 == VAR_1) break;

      VAR_6 = FUNC_3(VAR_4, VAR_10, VAR_7, FUNC_0(-1));
   } while (VAR_6 == VAR_2 && FUNC_2(VAR_4) == VAR_2);

   if(FUNC_2(VAR_4) != VAR_2)
      return FUNC_2(VAR_4);

   VAR_5->level++;
   VAR_5->levels[VAR_5->level].offset = VAR_8;
   VAR_5->levels[VAR_5->level].size = VAR_7;
   VAR_5->levels[VAR_5->level].id = VAR_9;
   return VAR_2;
}
