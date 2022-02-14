
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
typedef TYPE_2__ WFC_STREAM_T ;
typedef int WFCNativeStreamType ;
typedef scalar_t__ VCOS_STATUS_T ;
typedef int VCOS_SEMAPHORE_T ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 () ;
 TYPE_2__* FUNC_11 (int ) ;

void FUNC_12(WFCNativeStreamType VAR_4)

{
   FUNC_2("%s: stream 0x%x", VAR_0, VAR_4);

   WFC_STREAM_T *VAR_5 = FUNC_11(VAR_4);
   if (!VAR_5)
      return;

   if(FUNC_7(VAR_5->info.flags & VAR_2))
   {
      VCOS_SEMAPHORE_T VAR_6;
      VCOS_STATUS_T VAR_7;


      FUNC_10();

      VAR_7 = FUNC_3(&VAR_6, "WFC image available", 0);
      FUNC_1(VAR_7 == VAR_1);
      FUNC_6(VAR_7);

      FUNC_9(VAR_4, VAR_3, &VAR_6);

      FUNC_2("%s: pre async sem wait: stream: %X", VAR_0, VAR_4);
      FUNC_5(&VAR_6);
      FUNC_2("%s: post async sem wait: stream: %X", VAR_0, VAR_4);

      FUNC_4(&VAR_6);
      FUNC_8();
   }

   FUNC_0(VAR_5);

}
