
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int result ;
typedef int msg ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {TYPE_2__ header; void* pid_hi; void* pid_lo; void* screen_or_stream_num; void* context_type; int context; } ;
typedef TYPE_1__ WFC_IPC_MSG_CREATE_CONTEXT_T ;
typedef int WFCContext ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__,void*,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,void**,size_t*) ;

uint32_t FUNC_2(WFCContext VAR_3, uint32_t VAR_4,
   uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
   WFC_IPC_MSG_CREATE_CONTEXT_T VAR_8;
   VCOS_STATUS_T VAR_9;
   uint32_t VAR_10 = -1;
   size_t VAR_11 = sizeof(VAR_10);

   FUNC_0("%s: context 0x%x type 0x%x num 0x%x pid 0x%x%08x", VAR_0,
         VAR_3, VAR_4, VAR_5, VAR_7, VAR_6);

   VAR_8.header.type = VAR_2;
   VAR_8.context = VAR_3;
   VAR_8.context_type = VAR_4;
   VAR_8.screen_or_stream_num = VAR_5;
   VAR_8.pid_lo = VAR_6;
   VAR_8.pid_hi = VAR_7;

   VAR_9 = FUNC_1(&VAR_8.header, sizeof(VAR_8), &VAR_10, &VAR_11);

   FUNC_0("%s: status 0x%x, result 0x%x", VAR_0, VAR_9, VAR_10);

   if (VAR_9 != VAR_1)
      VAR_10 = -1;

   return VAR_10;
}
