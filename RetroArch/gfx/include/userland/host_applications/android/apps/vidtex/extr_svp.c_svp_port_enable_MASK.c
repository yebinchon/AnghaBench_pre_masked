
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct MMAL_PORT_USERDATA_T {int dummy; } ;
struct TYPE_4__ {struct MMAL_PORT_USERDATA_T* userdata; } ;
typedef int SVP_T ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_PORT_BH_CB_T ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(SVP_T *VAR_0, MMAL_PORT_T *VAR_1, MMAL_PORT_BH_CB_T VAR_2)
{
   VAR_1->userdata = (struct MMAL_PORT_USERDATA_T *)VAR_0;
   return FUNC_0(VAR_1, VAR_2);
}
