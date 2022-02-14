
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;







 size_t VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 char** VAR_4 ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 TYPE_1__* VAR_15 ;
 TYPE_1__* VAR_16 ;

void FUNC_3(void) {
    VAR_9 = ((void*)0);
    switch (VAR_6) {
    case 128:
        switch (VAR_5) {
        case 131:
            VAR_9 = VAR_16;
            break;
        case 132:
            VAR_9 = VAR_15;
            break;
        default:
            break;
        }
        break;
    case 130:
        switch (VAR_5) {
        case 131:
            VAR_9 = VAR_2;
            break;
        case 132:
            VAR_9 = VAR_3;
            break;
        default:
            break;
        }
        break;
    case 129:
        switch (VAR_5) {
        case 132:
            VAR_9 = VAR_3;
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
    if (!VAR_9) {
        FUNC_2("Unsupported os/arch combination: %s/%s\n", VAR_4[VAR_6], VAR_1[VAR_5]);
        FUNC_1(1);
    }
    if (VAR_9[VAR_0].size == 4) {
        VAR_12 = VAR_11;
        VAR_14 = VAR_11;
        VAR_10 = VAR_7;
    } else {
        FUNC_0(VAR_9[VAR_0].size == 8);
        VAR_12 = VAR_13;
        VAR_14 = VAR_13;
        VAR_10 = VAR_8;
    }
}
