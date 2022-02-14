
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
typedef int dest_rect ;
typedef int WFCint ;
typedef int WFCfloat ;
struct TYPE_4__ {void* req_rect_cb_args; int (* req_rect_callback ) (void*,int *,int *) ;} ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef int (* WFC_STREAM_REQ_RECT_CALLBACK_T ) (void*,int *,int *) ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;
typedef int VCOS_SEMAPHORE_T ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ,int *) ;
 TYPE_1__* FUNC_11 (int ) ;

__attribute__((used)) static void *FUNC_12(void *VAR_7)


{
   WFCNativeStreamType VAR_8 = (WFCNativeStreamType) VAR_7;

   WFC_STREAM_REQ_RECT_CALLBACK_T VAR_9;
   void *VAR_10;
   VCOS_SEMAPHORE_T VAR_11;
   VCOS_STATUS_T VAR_12;

   int32_t VAR_13[8];
   WFCint VAR_14[VAR_2];
   WFCfloat VAR_15[VAR_2];

   FUNC_4("wfc_stream_rect_req_thread: START: stream: %X", VAR_8);

   WFC_STREAM_T *VAR_16 = FUNC_11(VAR_8);
   if (!VAR_16)
      return ((void*)0);


   VAR_9 = VAR_16->req_rect_callback;
   VAR_10 = VAR_16->req_rect_cb_args;

   FUNC_0(VAR_16);

   VAR_12 = FUNC_5(&VAR_11, "WFC rect req", 0);
   FUNC_3(VAR_12 == VAR_0);

   while (VAR_12 == VAR_0)
   {
      FUNC_10(VAR_8, VAR_6, &VAR_11);


      FUNC_7(&VAR_11);

      VAR_12 = FUNC_9(VAR_8, VAR_13);
      if (VAR_12 == VAR_0)
      {

         FUNC_8(sizeof(VAR_14) == (4 * sizeof(int32_t)));
         FUNC_2(VAR_14, VAR_13, sizeof(VAR_14));

         VAR_15[VAR_4] = FUNC_1(VAR_13[4]);
         VAR_15[VAR_5] = FUNC_1(VAR_13[5]);
         VAR_15[VAR_3] = FUNC_1(VAR_13[6]);
         VAR_15[VAR_1] = FUNC_1(VAR_13[7]);

         VAR_9(VAR_10, VAR_14, VAR_15);
      }
   }

   FUNC_6(&VAR_11);

   FUNC_4("wfc_stream_rect_req_thread: END: stream: %X", VAR_8);

   return ((void*)0);
}
