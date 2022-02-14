
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int msg ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {TYPE_2__ header; int image_handle; int stream; } ;
typedef TYPE_1__ WFC_IPC_MSG_SS_SIGNAL_MM_IMAGE_DATA_T ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;

void FUNC_3(WFCNativeStreamType VAR_3, uint32_t VAR_4)
{
   WFC_IPC_MSG_SS_SIGNAL_MM_IMAGE_DATA_T VAR_5;
   VCOS_STATUS_T VAR_6;

   FUNC_1("%s: stream 0x%x image 0x%x", VAR_0, VAR_3, VAR_4);

   VAR_5.header.type = VAR_2;
   VAR_5.stream = VAR_3;
   VAR_5.image_handle = VAR_4;

   VAR_6 = FUNC_2(&VAR_5.header, sizeof(VAR_5));

   FUNC_0(VAR_6 == VAR_1);
}
