
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int MP4_BOX_TYPE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_1, int64_t VAR_2,
   MP4_BOX_TYPE_T VAR_3 )
{
   VC_CONTAINER_STATUS_T VAR_4;
   MP4_BOX_TYPE_T VAR_5;
   int64_t VAR_6;

   VAR_4 = FUNC_1( VAR_1, VAR_2, &VAR_5, &VAR_6 );
   if(VAR_4 != VAR_0) return VAR_4;
   return FUNC_0( VAR_1, VAR_5, VAR_6, VAR_3 );
}
