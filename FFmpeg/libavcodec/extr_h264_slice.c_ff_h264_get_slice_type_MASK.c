
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int slice_type; } ;
typedef TYPE_1__ H264SliceContext ;


 int VAR_0 ;






int FUNC_0(const H264SliceContext *VAR_1)
{
    switch (VAR_1->slice_type) {
    case 130:
        return 0;
    case 132:
        return 1;
    case 131:
        return 2;
    case 128:
        return 3;
    case 129:
        return 4;
    default:
        return VAR_0;
    }
}
