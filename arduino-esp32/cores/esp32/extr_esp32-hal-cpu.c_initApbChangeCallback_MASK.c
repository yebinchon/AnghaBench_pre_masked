
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(){
    static volatile bool VAR_1 = 0;
    if(!VAR_1){
        VAR_1 = 1;
        VAR_0 = FUNC_0();
        if(!VAR_0){
            VAR_1 = 0;
        }
    }
}
