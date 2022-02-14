
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int riceX; int riceY; int ** decoded; } ;
typedef TYPE_1__ APEContext ;


 void* FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(APEContext *VAR_0, int VAR_1)
{
    int32_t *VAR_2 = VAR_0->decoded[0];
    int32_t *VAR_3 = VAR_0->decoded[1];

    while (VAR_1--) {
        *VAR_2++ = FUNC_0(VAR_0, &VAR_0->riceY);
        *VAR_3++ = FUNC_0(VAR_0, &VAR_0->riceX);
    }
}
