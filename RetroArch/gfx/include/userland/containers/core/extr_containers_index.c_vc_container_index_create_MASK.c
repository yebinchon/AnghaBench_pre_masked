
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {int len; int mgap; } ;
typedef TYPE_1__ VC_CONTAINER_INDEX_T ;
typedef int VC_CONTAINER_INDEX_POS_T ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_INDEX_T **VAR_2, int VAR_3 )
{
   VC_CONTAINER_STATUS_T VAR_4 = VAR_0;
   VC_CONTAINER_INDEX_T *VAR_5 = ((void*)0);
   int VAR_6 = 0;

   if(VAR_3 < 16) VAR_3 = 16;
   if(VAR_3 > 4096) VAR_3 = 4096;
   while((VAR_3 >>= 1) != 0)
      VAR_6++;

   VAR_5 = FUNC_0(sizeof(VC_CONTAINER_INDEX_T) + (sizeof(VC_CONTAINER_INDEX_POS_T)<<VAR_6));
   if(VAR_5 == ((void*)0)) { goto error; }

   FUNC_1(VAR_5, 0, sizeof(VC_CONTAINER_INDEX_T));

   VAR_5->len = VAR_5->mgap = VAR_6;

   *VAR_2 = VAR_5;
   return VAR_1;

 error:
   return VAR_4;
}
