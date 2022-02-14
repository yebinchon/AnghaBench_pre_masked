
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int image_fx ;
struct TYPE_9__ {int control; } ;
struct TYPE_7__ {int member_1; int member_0; } ;
struct TYPE_8__ {int value; int hdr; int member_1; TYPE_1__ member_0; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PARAM_IMAGEFX_T ;
typedef TYPE_2__ MMAL_PARAMETER_IMAGEFX_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_5(MMAL_COMPONENT_T *VAR_4)
{
   static const MMAL_PARAM_IMAGEFX_T VAR_5[] = {
               129,
               130,
               128
            };
   static unsigned int VAR_6;
   MMAL_PARAMETER_IMAGEFX_T VAR_7 = {{ VAR_1, sizeof(VAR_7)},0};
   MMAL_PARAMETER_IMAGEFX_T VAR_8 = {{ VAR_1, sizeof(VAR_7)},0};
   MMAL_STATUS_T VAR_9;

   VAR_6++;
   if(VAR_6 >= FUNC_1(VAR_5))
      VAR_6 = 0;
   VAR_7.value = VAR_5[VAR_6];
   VAR_9 = FUNC_4(VAR_4->control, &VAR_7.hdr);
   if (VAR_9 != VAR_2)
   {
      FUNC_0("Failed to set image effect, %d", VAR_9);
      return VAR_0;
   }
   VAR_9 = FUNC_3(VAR_4->control, &VAR_8.hdr);
   if (VAR_9 != VAR_2)
   {
      FUNC_0("Failed to retrieve image effect, %d", VAR_9);
      return VAR_0;
   }
   if (FUNC_2(&VAR_7, &VAR_8, sizeof(VAR_7)) != 0)
   {
      FUNC_0("Image effect set (%d) was not retrieved (%d)", VAR_7.value, VAR_8.value);
      return VAR_0;
   }
   return VAR_3;
}
