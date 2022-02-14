
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ extradata_size; int extradata; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_ES_FORMAT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;

MMAL_STATUS_T FUNC_3(MMAL_ES_FORMAT_T *VAR_1, MMAL_ES_FORMAT_T *VAR_2)
{
   FUNC_1(VAR_1, VAR_2);

   if (VAR_2->extradata_size)
   {
      MMAL_STATUS_T VAR_3 = FUNC_2(VAR_1, VAR_2->extradata_size);
      if (VAR_3 != VAR_0)
         return VAR_3;
      VAR_1->extradata_size = VAR_2->extradata_size;
      FUNC_0(VAR_1->extradata, VAR_2->extradata, VAR_2->extradata_size);
   }
   return VAR_0;
}
