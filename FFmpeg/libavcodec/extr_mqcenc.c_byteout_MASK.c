
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* bp; int c; int ct; } ;
typedef TYPE_1__ MqcState ;



__attribute__((used)) static void FUNC_0(MqcState *VAR_0)
{
retry:
    if (*VAR_0->bp == 0xff){
        VAR_0->bp++;
        *VAR_0->bp = VAR_0->c >> 20;
        VAR_0->c &= 0xfffff;
        VAR_0->ct = 7;
    } else if ((VAR_0->c & 0x8000000)){
        (*VAR_0->bp)++;
        VAR_0->c &= 0x7ffffff;
        goto retry;
    } else{
        VAR_0->bp++;
        *VAR_0->bp = VAR_0->c >> 19;
        VAR_0->c &= 0x7ffff;
        VAR_0->ct = 8;
    }
}
