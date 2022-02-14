
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int type; int offset; } ;
typedef TYPE_1__ AVOption ;
typedef int AVDictionary ;





 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (void*,TYPE_1__ const*) ;

void FUNC_3(void *VAR_0)
{
    const AVOption *VAR_1 = ((void*)0);
    while ((VAR_1 = FUNC_2(VAR_0, VAR_1))) {
        switch (VAR_1->type) {
        case 128:
        case 130:
            FUNC_1((uint8_t *)VAR_0 + VAR_1->offset);
            break;

        case 129:
            FUNC_0((AVDictionary **)(((uint8_t *)VAR_0) + VAR_1->offset));
            break;

        default:
            break;
        }
    }
}
