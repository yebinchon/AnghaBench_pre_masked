
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int COST_TYPE ;
char *FUNC_0(COST_TYPE VAR_0)
{
    switch(VAR_0){
        case 131:
            return "seg";
        case 129:
            return "sse";
        case 132:
            return "masked";
        case 130:
            return "smooth";
        case 133:
            return "L1";
        case 128:
            return "wgan";
    }
    return "sse";
}
