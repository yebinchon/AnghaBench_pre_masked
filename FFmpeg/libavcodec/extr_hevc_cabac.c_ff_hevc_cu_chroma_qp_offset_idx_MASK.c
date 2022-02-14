
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pps; } ;
struct TYPE_7__ {TYPE_2__ ps; } ;
struct TYPE_5__ {int chroma_qp_offset_list_len_minus1; } ;
typedef TYPE_3__ HEVCContext ;


 size_t VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;

int FUNC_2(HEVCContext *VAR_2)
{
    int VAR_3= FUNC_0(5, VAR_2->ps.pps->chroma_qp_offset_list_len_minus1);
    int VAR_4 = 0;

    while (VAR_4 < VAR_3 && FUNC_1(VAR_1[VAR_0]))
        VAR_4++;

    return VAR_4;
}
