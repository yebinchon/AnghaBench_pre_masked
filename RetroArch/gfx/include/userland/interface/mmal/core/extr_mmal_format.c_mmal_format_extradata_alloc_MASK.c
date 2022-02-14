
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ extradata; } ;
struct TYPE_4__ {unsigned int extradata_size; scalar_t__ buffer; TYPE_1__ format; scalar_t__ extradata; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_ES_FORMAT_T ;
typedef TYPE_2__ MMAL_ES_FORMAT_PRIVATE_T ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,unsigned int,char*) ;
 int FUNC_1 (scalar_t__) ;

MMAL_STATUS_T FUNC_2(MMAL_ES_FORMAT_T *VAR_4, unsigned int VAR_5)
{
   MMAL_ES_FORMAT_PRIVATE_T *VAR_6 = (MMAL_ES_FORMAT_PRIVATE_T *)VAR_4;


   if(VAR_5 > VAR_0)
      return VAR_1;


   if(VAR_6->extradata_size < VAR_5)
   {
      if(VAR_6->extradata) FUNC_1(VAR_6->extradata);
      VAR_6->extradata = FUNC_0(1, VAR_5, "mmal format extradata");
      if(!VAR_6->extradata)
         return VAR_2;
      VAR_6->extradata_size = VAR_5;
   }


   if(VAR_6->extradata) VAR_6->format.extradata = VAR_6->extradata;
   else VAR_6->format.extradata = VAR_6->buffer;

   return VAR_3;
}
