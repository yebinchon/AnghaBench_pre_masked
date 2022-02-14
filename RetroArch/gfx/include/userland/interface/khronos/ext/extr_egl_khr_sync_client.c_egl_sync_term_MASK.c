
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int master; int serversync; } ;
typedef TYPE_1__ EGL_SYNC_T ;
typedef int CLIENT_THREAD_STATE_T ;


 int * FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(EGL_SYNC_T *VAR_3)
{
   CLIENT_THREAD_STATE_T *VAR_4 = FUNC_0();



   {
      FUNC_1(VAR_2,
                VAR_4,
                VAR_0,
                FUNC_2(VAR_3->serversync));
   }
   FUNC_3(&VAR_3->master);
}
