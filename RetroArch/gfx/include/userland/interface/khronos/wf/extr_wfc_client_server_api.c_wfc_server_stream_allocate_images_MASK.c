
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int result ;
typedef int msg ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int width; int height; int nbufs; TYPE_2__ header; int stream; } ;
typedef TYPE_1__ WFC_IPC_MSG_SS_ALLOCATE_IMAGES_T ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__,int,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int*,size_t*) ;

bool FUNC_2(WFCNativeStreamType VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
   WFC_IPC_MSG_SS_ALLOCATE_IMAGES_T VAR_7;
   VCOS_STATUS_T VAR_8;
   uint32_t VAR_9 = 0;
   size_t VAR_10 = sizeof(VAR_9);

   FUNC_0("%s: stream 0x%x width %u height %u nbufs %u", VAR_0, VAR_3, VAR_4, VAR_5, VAR_6);

   VAR_7.header.type = VAR_2;
   VAR_7.stream = VAR_3;
   VAR_7.width = VAR_4;
   VAR_7.height = VAR_5;
   VAR_7.nbufs = VAR_6;

   VAR_8 = FUNC_1(&VAR_7.header, sizeof(VAR_7), &VAR_9, &VAR_10);

   FUNC_0("%s: status 0x%x result %u", VAR_0, VAR_8, VAR_9);

   if (VAR_8 != VAR_1)
      VAR_9 = 0;

   return VAR_9;
}
