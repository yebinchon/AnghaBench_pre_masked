
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TaskHandle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 void* FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,char*,int,int ,int,int *,int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int *,int ) ;

void FUNC_10(void *VAR_6)
{
    TaskHandle_t VAR_7 = 0;

    if(FUNC_1() != VAR_0) {
        FUNC_5("Failed to init heap trace!\n");
        return;
    }
    FUNC_6(&VAR_2, "blink_task2", 2048, FUNC_7(), 5, &VAR_7, 1);

    while(1) {
        FUNC_2(VAR_1);
        if (FUNC_8(VAR_7, 0, VAR_3) != VAR_4) {
            FUNC_5("Failed to notify slave task!\n");
            return;
        }
        void *VAR_8 = FUNC_4(64);
        FUNC_5("Alloced 64 bytes @ %p\n", VAR_8);
        void *VAR_9 = FUNC_4(96);
        FUNC_5("Alloced 96 bytes @ %p\n", VAR_9);
        FUNC_0(VAR_8);
        FUNC_5("Freed @ %p\n", VAR_8);
        VAR_9 = FUNC_4(10);
        FUNC_5("Alloced 10 bytes @ %p\n", VAR_9);
        VAR_9 = FUNC_4(23);
        FUNC_5("Alloced 23 bytes @ %p\n", VAR_9);
        FUNC_0(VAR_9);
        FUNC_5("Freed @ %p\n", VAR_9);
        if (FUNC_9(0, 0, ((void*)0), VAR_5) != VAR_4) {
            FUNC_5("Failed to wait for slave task!\n");
            return;
        }
        FUNC_3();
    }
}
