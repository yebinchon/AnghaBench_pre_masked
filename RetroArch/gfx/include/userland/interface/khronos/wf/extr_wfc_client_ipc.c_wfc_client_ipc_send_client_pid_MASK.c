
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
typedef int msg ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {TYPE_2__ header; void* pid_hi; void* pid_lo; } ;
typedef TYPE_1__ WFC_IPC_MSG_SET_CLIENT_PID_T ;
typedef int VCOS_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,void*,void*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static VCOS_STATUS_T FUNC_3(void)
{
   WFC_IPC_MSG_SET_CLIENT_PID_T VAR_2;
   uint64_t VAR_3 = FUNC_1();
   uint32_t VAR_4 = (uint32_t) VAR_3;
   uint32_t VAR_5 = (uint32_t) (VAR_3 >> 32);

   VAR_2.header.type = VAR_1;
   VAR_2.pid_lo = VAR_4;
   VAR_2.pid_hi = VAR_5;

   FUNC_0("%s: setting client pid to 0x%x%08x", VAR_0, VAR_5, VAR_4);

   return FUNC_2(&VAR_2.header, sizeof(VAR_2));
}
