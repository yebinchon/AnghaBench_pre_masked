
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int result ;
typedef int msg ;
struct TYPE_7__ {int size; int flags; } ;
typedef TYPE_1__ WFC_STREAM_INFO_T ;
struct TYPE_9__ {int type; } ;
struct TYPE_10__ {void* size; } ;
struct TYPE_8__ {TYPE_4__ header; void* pid_hi; void* pid_lo; TYPE_5__ info; int stream; } ;
typedef TYPE_2__ WFC_IPC_MSG_SS_CREATE_INFO_T ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,TYPE_1__ const*,void*) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*,int ,scalar_t__,int ,...) ;
 void* FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int,int *,size_t*) ;

WFCNativeStreamType FUNC_5(WFCNativeStreamType VAR_4, const WFC_STREAM_INFO_T *VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
   WFC_IPC_MSG_SS_CREATE_INFO_T VAR_8;
   uint32_t VAR_9;
   VCOS_STATUS_T VAR_10;
   WFCNativeStreamType VAR_11 = VAR_2;
   size_t VAR_12 = sizeof(VAR_11);

   if (!VAR_5)
   {
      FUNC_1("%s: NULL info pointer passed", VAR_0);
      return VAR_2;
   }

   if (VAR_5->size < sizeof(uint32_t))
   {
      FUNC_1("%s: invalid info pointer passed (size:%u)", VAR_0, VAR_5->size);
      return VAR_2;
   }

   FUNC_2("%s: stream 0x%x flags 0x%x pid 0x%x%08x", VAR_0, VAR_4, VAR_5->flags, VAR_7, VAR_6);

   VAR_8.header.type = VAR_3;
   VAR_8.stream = VAR_4;
   VAR_9 = FUNC_3(VAR_5->size, sizeof(VAR_8.info));
   FUNC_0(&VAR_8.info, VAR_5, VAR_9);
   VAR_8.info.size = VAR_9;
   VAR_8.pid_lo = VAR_6;
   VAR_8.pid_hi = VAR_7;

   VAR_10 = FUNC_4(&VAR_8.header, sizeof(VAR_8), &VAR_11, &VAR_12);

   FUNC_2("%s: status 0x%x, result 0x%x", VAR_0, VAR_10, VAR_11);

   if (VAR_10 != VAR_1)
      VAR_11 = VAR_2;

   return VAR_11;
}
