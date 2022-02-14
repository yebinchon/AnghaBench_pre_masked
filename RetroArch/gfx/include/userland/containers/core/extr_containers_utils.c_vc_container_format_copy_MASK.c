
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_4__ {unsigned int extradata_size; int * extradata; int * type; } ;
typedef TYPE_1__ VC_CONTAINER_ES_FORMAT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;

VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_ES_FORMAT_T *VAR_2,
                                                VC_CONTAINER_ES_FORMAT_T *VAR_3,
                                                unsigned int VAR_4)
{
   void *VAR_5 = VAR_2->type;
   uint8_t *VAR_6 = VAR_2->extradata;


   if(VAR_3->extradata_size > VAR_4 ||
      (VAR_3->extradata_size && !VAR_2->extradata))
      return VAR_0;

   *VAR_2->type = *VAR_3->type;
   *VAR_2 = *VAR_3;
   VAR_2->type = VAR_5;
   VAR_2->extradata = VAR_6;
   if(VAR_3->extradata_size)
      FUNC_0(VAR_2->extradata, VAR_3->extradata, VAR_3->extradata_size);

   return VAR_1;
}
