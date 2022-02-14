
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * TaskHandle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;

void FUNC_3(){
    TaskHandle_t VAR_1 = FUNC_2(0);
    if(VAR_1 == ((void*)0) || FUNC_0(VAR_1) != VAR_0){
        FUNC_1("Failed to remove Core 0 IDLE task from WDT");
    }
}
