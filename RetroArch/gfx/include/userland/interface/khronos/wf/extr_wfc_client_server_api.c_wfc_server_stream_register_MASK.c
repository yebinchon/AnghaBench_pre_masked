
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int msg ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {TYPE_2__ header; void* pid_hi; void* pid_lo; int stream; } ;
typedef TYPE_1__ WFC_IPC_MSG_SS_REGISTER_T ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,void*,void*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;

void FUNC_3(WFCNativeStreamType VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
   WFC_IPC_MSG_SS_REGISTER_T VAR_6;
   VCOS_STATUS_T VAR_7;

   FUNC_1("%s: stream 0x%x pid 0x%x%08x", VAR_0, VAR_3, VAR_5, VAR_4);

   VAR_6.header.type = VAR_2;
   VAR_6.stream = VAR_3;
   VAR_6.pid_lo = VAR_4;
   VAR_6.pid_hi = VAR_5;

   VAR_7 = FUNC_2(&VAR_6.header, sizeof(VAR_6));

   FUNC_0(VAR_7 == VAR_1);
}
