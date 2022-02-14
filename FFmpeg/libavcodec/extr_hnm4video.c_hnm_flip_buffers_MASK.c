
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * previous; int * current; } ;
typedef TYPE_1__ Hnm4VideoContext ;



__attribute__((used)) static void FUNC_0(Hnm4VideoContext *VAR_0)
{
    uint8_t *VAR_1;

    VAR_1 = VAR_0->current;
    VAR_0->current = VAR_0->previous;
    VAR_0->previous = VAR_1;
}
