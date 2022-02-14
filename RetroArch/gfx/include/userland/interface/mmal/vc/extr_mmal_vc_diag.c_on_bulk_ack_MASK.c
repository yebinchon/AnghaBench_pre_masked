
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uint; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ MMAL_DBG_ENTRY_T ;






 int FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static void FUNC_1(MMAL_DBG_ENTRY_T *VAR_0,
                        char *VAR_1,
                        size_t VAR_2)
{
   switch (VAR_0->u.uint)
   {
   case 131: FUNC_0(VAR_1,VAR_2,"vchiq bulk rx abort"); break;
   case 129: FUNC_0(VAR_1,VAR_2,"vchiq bulk tx abort"); break;
   case 128: FUNC_0(VAR_1,VAR_2,"vchiq bulk tx done"); break;
   case 130: FUNC_0(VAR_1,VAR_2,"vchiq bulk rx done"); break;
   default: FUNC_0(VAR_1,VAR_2,"vchiq unknown reason %d", VAR_0->u.uint); break;
   }
}
