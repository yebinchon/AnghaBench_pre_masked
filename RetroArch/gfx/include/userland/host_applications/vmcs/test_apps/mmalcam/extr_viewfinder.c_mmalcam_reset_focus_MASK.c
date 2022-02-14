
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int focus ;
struct TYPE_7__ {int control; } ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_6__ {int hdr; int value; int member_1; TYPE_1__ member_0; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PARAM_FOCUS_T ;
typedef TYPE_2__ MMAL_PARAMETER_FOCUS_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_2(MMAL_COMPONENT_T *VAR_5, MMAL_PARAM_FOCUS_T VAR_6)
{
   MMAL_PARAMETER_FOCUS_T VAR_7 = {{VAR_1, sizeof(VAR_7)},VAR_2};
   MMAL_STATUS_T VAR_8;

   VAR_8 = FUNC_1(VAR_5->control, &VAR_7.hdr);
   if (VAR_8 != VAR_3)
   {
      FUNC_0("Failed to set focus to HYPERFOCAL, result %d", VAR_8);
      return VAR_0;
   }
   VAR_7.value = VAR_6;
   VAR_8 = FUNC_1(VAR_5->control, &VAR_7.hdr);
   if (VAR_8 != VAR_3)
   {
      FUNC_0("Failed to set focus to %d, result %d", VAR_6, VAR_8);
      return VAR_0;
   }
   return VAR_4;
}
