
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_3__ {scalar_t__ extradata; } ;
struct TYPE_4__ {scalar_t__ magic; unsigned int extradata_size; scalar_t__ buffer; TYPE_1__ format; scalar_t__ extradata; } ;
typedef TYPE_2__ VC_CONTAINER_ES_FORMAT_PRIVATE_T ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;

VC_CONTAINER_STATUS_T FUNC_3(
   VC_CONTAINER_ES_FORMAT_T *VAR_5, unsigned int VAR_6)
{
   VC_CONTAINER_ES_FORMAT_PRIVATE_T *VAR_7 = (VC_CONTAINER_ES_FORMAT_PRIVATE_T *)VAR_5;
   FUNC_2(VAR_7->magic == VAR_3);


   if(VAR_6 > VAR_0)
      return VAR_1;


   if(VAR_7->extradata_size < VAR_6)
   {
      if(VAR_7->extradata) FUNC_0(VAR_7->extradata);
      VAR_7->extradata = FUNC_1(VAR_6);
      if(!VAR_7->extradata)
         return VAR_2;
      VAR_7->extradata_size = VAR_6;
   }


   if(VAR_7->extradata) VAR_7->format.extradata = VAR_7->extradata;
   else VAR_7->format.extradata = VAR_7->buffer;

   return VAR_4;
}
