
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int msg ;
struct TYPE_8__ {int type; } ;
struct TYPE_6__ {void* ptr; } ;
struct TYPE_5__ {int (* ptr ) (void*) ;} ;
struct TYPE_7__ {TYPE_4__ header; TYPE_2__ image_available_data; TYPE_1__ image_available_cb; int stream; } ;
typedef TYPE_3__ WFC_IPC_MSG_SS_ON_IMAGE_AVAILABLE_T ;
typedef int (* WFC_CALLBACK_T ) (void*) ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*,int ,int ,int (*) (void*),void*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;

void FUNC_4(WFCNativeStreamType VAR_3, WFC_CALLBACK_T VAR_4, void *VAR_5)
{
   WFC_IPC_MSG_SS_ON_IMAGE_AVAILABLE_T VAR_6;
   VCOS_STATUS_T VAR_7;

   FUNC_1("%s: stream 0x%x cb %p data %p", VAR_0, VAR_3, VAR_4, VAR_5);

   VAR_6.header.type = VAR_2;
   VAR_6.stream = VAR_3;
   VAR_6.image_available_cb.ptr = VAR_4;
   VAR_6.image_available_data.ptr = VAR_5;

   VAR_7 = FUNC_3(&VAR_6.header, sizeof(VAR_6));

   if (!FUNC_2(VAR_7 == VAR_1))
   {
      (*VAR_4)(VAR_5);
   }
}
