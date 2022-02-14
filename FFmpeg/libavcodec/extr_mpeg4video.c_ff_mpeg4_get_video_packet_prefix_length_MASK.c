
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pict_type; int b_code; int f_code; } ;
typedef TYPE_1__ MpegEncContext ;






 int FUNC_0 (int ,int ,int) ;

int FUNC_1(MpegEncContext *VAR_0)
{
    switch (VAR_0->pict_type) {
    case 130:
        return 16;
    case 129:
    case 128:
        return VAR_0->f_code + 15;
    case 131:
        return FUNC_0(VAR_0->f_code, VAR_0->b_code, 2) + 15;
    default:
        return -1;
    }
}
