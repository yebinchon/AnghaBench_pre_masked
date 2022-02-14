
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ QueueHandle_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,int,scalar_t__,int,int *,int ) ;

void FUNC_5(void)
{

    FUNC_1(&VAR_3);
    QueueHandle_t VAR_4 = FUNC_3(10, sizeof(void *));
    if(VAR_4 == 0) {
        FUNC_0(VAR_1, "Failed to create queue!");
        return;
    }

    if(FUNC_2() != VAR_0) {
        FUNC_0(VAR_1, "Failed to init heap trace!");
        return;
    }
    FUNC_4(VAR_2, "alloc", 2048, VAR_4, 5, ((void*)0), 0);
}
