
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int rect_req_thread_data; void* req_rect_cb_args; int * req_rect_callback; } ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef int * WFC_STREAM_REQ_RECT_CALLBACK_T ;
typedef scalar_t__ WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,char*,int *,int ,void*) ;
 int FUNC_5 (scalar_t__,int) ;
 TYPE_1__* FUNC_6 (scalar_t__) ;
 int VAR_2 ;

uint32_t FUNC_7
   (WFCNativeStreamType VAR_3, uint32_t VAR_4,
      WFC_STREAM_REQ_RECT_CALLBACK_T VAR_5, void *VAR_6)



{
   FUNC_3("wfc_stream_create_req_rect: stream %X", VAR_3);

   uint32_t VAR_7;

   VAR_7 = FUNC_5(VAR_3, VAR_4 | VAR_1);
   if (VAR_7)
      return VAR_7;

   WFC_STREAM_T *VAR_8 = FUNC_6(VAR_3);

   FUNC_1(VAR_8);



   FUNC_1(VAR_5 != ((void*)0));

   VAR_8->req_rect_callback = VAR_5;
   VAR_8->req_rect_cb_args = VAR_6;



   VCOS_STATUS_T VAR_9 = FUNC_4(&VAR_8->rect_req_thread_data, "wfc_stream_rect_req_thread",
      ((void*)0), VAR_2, (void *) VAR_3);
   FUNC_2(VAR_9 == VAR_0);

   FUNC_0(VAR_8);

   return 0;
}
