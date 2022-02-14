
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_4__ {int preview_thread; } ;
typedef TYPE_1__ RASPITEX_STATE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *,char*,int *,int ,TYPE_1__*) ;

int FUNC_3(RASPITEX_STATE *VAR_3)
{
   VCOS_STATUS_T VAR_4;

   FUNC_1("%s", VAR_0);
   VAR_4 = FUNC_2(&VAR_3->preview_thread, "preview-worker",
                               ((void*)0), VAR_2, VAR_3);

   if (VAR_4 != VAR_1)
      FUNC_0("%s: Failed to start worker thread %d",
                     VAR_0, VAR_4);

   return (VAR_4 == VAR_1 ? 0 : -1);
}
