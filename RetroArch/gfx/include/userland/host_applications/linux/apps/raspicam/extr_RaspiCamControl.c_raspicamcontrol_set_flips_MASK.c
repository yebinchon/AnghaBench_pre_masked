
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * output; } ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_6__ {int hdr; int value; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_2__ MMAL_PARAMETER_MIRROR_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(MMAL_COMPONENT_T *VAR_5, int VAR_6, int VAR_7)
{
   MMAL_PARAMETER_MIRROR_T VAR_8 = {{VAR_0, sizeof(MMAL_PARAMETER_MIRROR_T)}, VAR_3};

   if (VAR_6 && VAR_7)
      VAR_8.value = VAR_1;
   else if (VAR_6)
      VAR_8.value = VAR_2;
   else if (VAR_7)
      VAR_8.value = VAR_4;

   FUNC_0(VAR_5->output[0], &VAR_8.hdr);
   FUNC_0(VAR_5->output[1], &VAR_8.hdr);
   return FUNC_1(FUNC_0(VAR_5->output[2], &VAR_8.hdr));
}
