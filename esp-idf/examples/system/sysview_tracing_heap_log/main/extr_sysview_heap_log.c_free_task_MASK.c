
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int QueueHandle_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,void*) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,void*,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
    QueueHandle_t VAR_4 = (QueueHandle_t)VAR_3;
    while (1) {
        void *VAR_5 = ((void*)0);
        if (FUNC_3(VAR_4, ( void * )&VAR_5, VAR_2) != VAR_1) {
            FUNC_0(VAR_0, "Failed to send to queue!");
        } else {
            FUNC_1(VAR_0, "Task[%p]: free memory @ %p", FUNC_4(), VAR_5);
            FUNC_2(VAR_5);
        }
    }
}
