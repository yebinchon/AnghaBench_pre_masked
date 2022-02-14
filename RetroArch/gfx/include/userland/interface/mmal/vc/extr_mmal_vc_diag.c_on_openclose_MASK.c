
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event_type; } ;
typedef TYPE_1__ MMAL_DBG_ENTRY_T ;




 int FUNC_0 (char*,size_t,char*) ;

__attribute__((used)) static void FUNC_1(MMAL_DBG_ENTRY_T *VAR_0,
                         char *VAR_1,
                         size_t VAR_2)
{
   switch (VAR_0->event_type) {
      case 128: FUNC_0(VAR_1,VAR_2,"opened"); break;
      case 129: FUNC_0(VAR_1,VAR_2,"closed"); break;
      default: break;
   }
}
