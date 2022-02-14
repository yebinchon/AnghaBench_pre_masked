
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int intra_dc_threshold; } ;
typedef TYPE_1__ Mpeg4DecContext ;



__attribute__((used)) static int FUNC_0(Mpeg4DecContext *VAR_0)
{
    switch (VAR_0->intra_dc_threshold) {
    case 99: return 0;
    case 13: return 1;
    case 15: return 2;
    case 17: return 3;
    case 19: return 4;
    case 21: return 5;
    case 23: return 6;
    case 0: return 7;
    }
    return 0;
}
