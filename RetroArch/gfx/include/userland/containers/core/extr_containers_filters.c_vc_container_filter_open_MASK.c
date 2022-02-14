
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_7__ {int * container; int * priv; } ;
typedef TYPE_1__ VC_CONTAINER_FILTER_T ;
typedef int VC_CONTAINER_FILTER_PRIVATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ) ;

VC_CONTAINER_FILTER_T *FUNC_4(VC_CONTAINER_FOURCC_T VAR_3,
                                                VC_CONTAINER_FOURCC_T VAR_4,
                                                VC_CONTAINER_T *VAR_5,
   VC_CONTAINER_STATUS_T *VAR_6 )
{
   VC_CONTAINER_STATUS_T VAR_7 = VAR_0;
   VC_CONTAINER_FILTER_T *VAR_8 = 0;
   VC_CONTAINER_FILTER_PRIVATE_T *VAR_9 = 0;


   VAR_8 = FUNC_1(sizeof(*VAR_8) + sizeof(*VAR_9));
   if(!VAR_8) { VAR_7 = VAR_1; goto error; }
   FUNC_2(VAR_8, 0, sizeof(*VAR_8) + sizeof(*VAR_9));
   VAR_8->priv = VAR_9 = (VC_CONTAINER_FILTER_PRIVATE_T *)&VAR_8[1];
   VAR_8->container = VAR_5;

   VAR_7 = FUNC_3(VAR_8, VAR_3, VAR_4);
   if(VAR_7 != VAR_2) goto error;

 end:
   if(VAR_6) *VAR_6 = VAR_7;
   return VAR_8;

 error:
   if(VAR_8) FUNC_0(VAR_8);
   VAR_8 = 0;
   goto end;
}
