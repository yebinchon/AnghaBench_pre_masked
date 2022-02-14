
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TaskHandle_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int ) ;

void FUNC_5(void *VAR_3)
{
    TaskHandle_t VAR_4 = (TaskHandle_t)VAR_3;

    while(1) {
        if (FUNC_4(0, 0, ((void*)0), VAR_2) != VAR_1) {
            FUNC_2("Failed to wait for main task!\n");
            return;
        }
        void *VAR_5 = FUNC_1(65);
        FUNC_2("Alloced 65 bytes @ %p\n", VAR_5);
        void *VAR_6 = FUNC_1(97);
        FUNC_2("Alloced 97 bytes @ %p\n", VAR_6);
        FUNC_0(VAR_5);
        FUNC_2("Freed @ %p\n", VAR_5);
        VAR_6 = FUNC_1(11);
        FUNC_2("Alloced 11 bytes @ %p\n", VAR_6);
        VAR_6 = FUNC_1(24);
        FUNC_2("Alloced 24 bytes @ %p\n", VAR_6);
        FUNC_0(VAR_6);
        FUNC_2("Freed @ %p\n", VAR_6);
        if (FUNC_3(VAR_4, 0, VAR_0) != VAR_1) {
            FUNC_2("Failed to notify main task!\n");
            return;
        }
    }
}
