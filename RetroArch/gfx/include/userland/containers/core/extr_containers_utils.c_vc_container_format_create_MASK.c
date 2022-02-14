
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {void* type; } ;
typedef TYPE_1__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_9__ {TYPE_1__ format; int extradata_size; int type; int magic; } ;
typedef TYPE_2__ VC_CONTAINER_ES_FORMAT_PRIVATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,unsigned int) ;

VC_CONTAINER_ES_FORMAT_T *FUNC_4(unsigned int VAR_3)
{
   VC_CONTAINER_ES_FORMAT_PRIVATE_T *VAR_4;
   VC_CONTAINER_STATUS_T VAR_5;

   VAR_4 = FUNC_1(sizeof(*VAR_4));
   if(!VAR_4) return 0;
   FUNC_2(VAR_4, 0, sizeof(*VAR_4));

   VAR_4->magic = VAR_1;
   VAR_4->format.type = (void *)&VAR_4->type;
   VAR_4->extradata_size = VAR_0;

   VAR_5 = FUNC_3(&VAR_4->format, VAR_3);
   if(VAR_5 != VAR_2)
   {
      FUNC_0(VAR_4);
      return ((void*)0);
   }

   return &VAR_4->format;
}
