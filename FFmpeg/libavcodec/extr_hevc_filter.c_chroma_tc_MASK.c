
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* sps; TYPE_1__* pps; } ;
struct TYPE_9__ {TYPE_3__ ps; } ;
struct TYPE_7__ {int chroma_format_idc; } ;
struct TYPE_6__ {int cb_qp_offset; int cr_qp_offset; } ;
typedef TYPE_4__ HEVCContext ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_1(HEVCContext *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    static const int VAR_6[] = {
        29, 30, 31, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37
    };
    int VAR_7, VAR_8, VAR_9, VAR_10;


    if (VAR_4 == 1)
        VAR_9 = VAR_2->ps.pps->cb_qp_offset;
    else
        VAR_9 = VAR_2->ps.pps->cr_qp_offset;

    VAR_8 = FUNC_0(VAR_3 + VAR_9, 0, 57);
    if (VAR_2->ps.sps->chroma_format_idc == 1) {
        if (VAR_8 < 30)
            VAR_7 = VAR_8;
        else if (VAR_8 > 43)
            VAR_7 = VAR_8 - 6;
        else
            VAR_7 = VAR_6[VAR_8 - 30];
    } else {
        VAR_7 = FUNC_0(VAR_8, 0, 51);
    }

    VAR_10 = FUNC_0(VAR_7 + VAR_0 + VAR_5, 0, 53);
    return VAR_1[VAR_10];
}
