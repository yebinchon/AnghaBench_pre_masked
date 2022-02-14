
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int msg ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {TYPE_2__ header; void* vpitch; void* pitch; void* height; void* width; void* format; void* handle; int stream; } ;
typedef TYPE_1__ WFC_IPC_MSG_SS_SIGNAL_RAW_PIXELS_T ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,void*,void*,void*,void*,void*,void*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;

void FUNC_3(WFCNativeStreamType VAR_3,
      uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7,
      uint32_t VAR_8, uint32_t VAR_9)
{
   WFC_IPC_MSG_SS_SIGNAL_RAW_PIXELS_T VAR_10;
   VCOS_STATUS_T VAR_11;

   FUNC_1("%s: stream 0x%x image 0x%x format 0x%x width %u height %u"
         " pitch %u vpitch %u",
         VAR_0, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

   VAR_10.header.type = VAR_2;
   VAR_10.stream = VAR_3;
   VAR_10.handle = VAR_4;
   VAR_10.format = VAR_5;
   VAR_10.width = VAR_6;
   VAR_10.height = VAR_7;
   VAR_10.pitch = VAR_8;
   VAR_10.vpitch = VAR_9;

   VAR_11 = FUNC_2(&VAR_10.header, sizeof(VAR_10));
   FUNC_0(VAR_11 == VAR_1);
}
