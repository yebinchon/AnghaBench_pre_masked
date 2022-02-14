
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int colfx ;
struct TYPE_10__ {int control; } ;
struct TYPE_7__ {int member_1; int member_0; } ;
struct TYPE_9__ {int hdr; int v; int u; int enable; int member_3; int member_2; int member_1; TYPE_1__ member_0; } ;
struct TYPE_8__ {int v; int u; int enable; } ;
typedef TYPE_2__ MMAL_PARAM_COLOURFX_T ;
typedef TYPE_3__ MMAL_PARAMETER_COLOURFX_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(MMAL_COMPONENT_T *VAR_1, const MMAL_PARAM_COLOURFX_T *VAR_2)
{
   MMAL_PARAMETER_COLOURFX_T VAR_3 = {{VAR_0,sizeof(VAR_3)}, 0, 0, 0};

   if (!VAR_1)
      return 1;

   VAR_3.enable = VAR_2->enable;
   VAR_3.u = VAR_2->u;
   VAR_3.v = VAR_2->v;

   return FUNC_1(FUNC_0(VAR_1->control, &VAR_3.hdr));

}
