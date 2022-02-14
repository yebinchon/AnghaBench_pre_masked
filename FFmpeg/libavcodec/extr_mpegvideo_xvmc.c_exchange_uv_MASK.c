
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int *** pblocks; } ;
typedef TYPE_1__ MpegEncContext ;



__attribute__((used)) static void FUNC_0(MpegEncContext *VAR_0)
{
    int16_t (*VAR_1)[64];

    VAR_1 = VAR_0->pblocks[4];
    VAR_0->pblocks[4] = VAR_0->pblocks[5];
    VAR_0->pblocks[5] = VAR_1;
}
