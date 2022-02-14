
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int msg ;
struct TYPE_5__ {int type; } ;
struct TYPE_4__ {int flip; TYPE_2__ header; void* flags; void* format; void* offset; void* stride; void* height; void* width; void* ustorage; int stream; } ;
typedef TYPE_1__ WFC_IPC_MSG_SS_SIGNAL_EGLIMAGE_DATA_T ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ,void*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;

void FUNC_4(WFCNativeStreamType VAR_3,
      uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7,
      uint32_t VAR_8, uint32_t VAR_9, uint32_t VAR_10, bool VAR_11)
{
   WFC_IPC_MSG_SS_SIGNAL_EGLIMAGE_DATA_T VAR_12;
   VCOS_STATUS_T VAR_13;

   FUNC_0(&VAR_12, 0, sizeof VAR_12);
   VAR_12.header.type = VAR_2;
   VAR_12.stream = VAR_3;
   VAR_12.ustorage = VAR_4;
   VAR_12.width = VAR_5;
   VAR_12.height = VAR_6;
   VAR_12.stride = VAR_7;
   VAR_12.offset = VAR_8;
   VAR_12.format = VAR_9;
   VAR_12.flags = VAR_10;
   VAR_12.flip = VAR_11;

   FUNC_2("%s: stream 0x%x image storage 0x%x",
         VAR_0, VAR_3, VAR_4);

   VAR_13 = FUNC_3(&VAR_12.header, sizeof(VAR_12));

   FUNC_1(VAR_13 == VAR_1);
}
