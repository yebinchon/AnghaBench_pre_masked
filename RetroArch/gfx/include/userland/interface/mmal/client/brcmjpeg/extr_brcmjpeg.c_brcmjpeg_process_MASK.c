
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ output_handle; scalar_t__ output; scalar_t__ input_handle; scalar_t__ input; } ;
struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_1__ BRCMJPEG_T ;
typedef int BRCMJPEG_STATUS_T ;
typedef TYPE_2__ BRCMJPEG_REQUEST_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

BRCMJPEG_STATUS_T FUNC_5(BRCMJPEG_T *VAR_2, BRCMJPEG_REQUEST_T *VAR_3)
{
   BRCMJPEG_STATUS_T VAR_4;


   if ((VAR_3->input && VAR_3->input_handle) ||
       (VAR_3->output && VAR_3->output_handle))
   {
      FUNC_1("buffer pointer and handle both set (%p/%u %p/%u)",
            VAR_3->input, VAR_3->input_handle, VAR_3->output, VAR_3->output_handle);
      return VAR_0;
   }

   FUNC_0(VAR_2);
   if (VAR_2->type == VAR_1)
      VAR_4 = FUNC_4(VAR_2, VAR_3);
   else
      VAR_4 = FUNC_3(VAR_2, VAR_3);
   FUNC_2(VAR_2);

   return VAR_4;
}
