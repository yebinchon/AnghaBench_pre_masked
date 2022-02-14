
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int result ;
typedef int msg ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {int size; void* flags; } ;
struct TYPE_4__ {TYPE_2__ header; void* pid_hi; void* pid_lo; TYPE_3__ info; int stream; } ;
typedef TYPE_1__ WFC_IPC_MSG_SS_CREATE_INFO_T ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (char*,int ,scalar_t__,void*,...) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int *,size_t*) ;

WFCNativeStreamType FUNC_3(WFCNativeStreamType VAR_4, uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
   WFC_IPC_MSG_SS_CREATE_INFO_T VAR_8;
   VCOS_STATUS_T VAR_9;
   WFCNativeStreamType VAR_10 = VAR_2;
   size_t VAR_11 = sizeof(VAR_10);

   FUNC_1("%s: stream 0x%x flags 0x%x pid 0x%x%08x", VAR_0, VAR_4, VAR_5, VAR_7, VAR_6);

   VAR_8.header.type = VAR_3;
   VAR_8.stream = VAR_4;
   FUNC_0(&VAR_8.info, 0, sizeof(VAR_8.info));
   VAR_8.info.size = sizeof(VAR_8.info);
   VAR_8.info.flags = VAR_5;
   VAR_8.pid_lo = VAR_6;
   VAR_8.pid_hi = VAR_7;

   VAR_9 = FUNC_2(&VAR_8.header, sizeof(VAR_8), &VAR_10, &VAR_11);

   FUNC_1("%s: status 0x%x, result 0x%x", VAR_0, VAR_9, VAR_10);

   if (VAR_9 != VAR_1)
      VAR_10 = VAR_2;

   return VAR_10;
}
