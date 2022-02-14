
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(const char* VAR_0, char* VAR_1, uint8_t VAR_2)
{
    FUNC_0("Waiting for signal: [%s]!\n", VAR_0);
    if (VAR_1 == ((void*)0)) {
        FUNC_0("Please press \"Enter\" key once any board send this signal.\n");
    } else {
        FUNC_0("Please input parameter value from any board send this signal and press \"Enter\" key.\n");
    }
    FUNC_1(VAR_1, VAR_2);
}
