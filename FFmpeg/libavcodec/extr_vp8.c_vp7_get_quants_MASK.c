
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* qmat; int c; } ;
typedef TYPE_2__ VP8Context ;
typedef int VP56RangeCoder ;
struct TYPE_4__ {void** chroma_qmul; int * luma_dc_qmul; void** luma_qmul; } ;


 void* FUNC_0 (void*,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 void** VAR_2 ;
 void** VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(VP8Context *VAR_4)
{
    VP56RangeCoder *VAR_5 = &VAR_4->c;

    int VAR_6 = FUNC_2(VAR_5, 7);
    int VAR_7 = FUNC_1(VAR_5) ? FUNC_2(VAR_5, 7) : VAR_6;
    int VAR_8 = FUNC_1(VAR_5) ? FUNC_2(VAR_5, 7) : VAR_6;
    int VAR_9 = FUNC_1(VAR_5) ? FUNC_2(VAR_5, 7) : VAR_6;
    int VAR_10 = FUNC_1(VAR_5) ? FUNC_2(VAR_5, 7) : VAR_6;
    int VAR_11 = FUNC_1(VAR_5) ? FUNC_2(VAR_5, 7) : VAR_6;

    VAR_4->qmat[0].luma_qmul[0] = VAR_3[VAR_7];
    VAR_4->qmat[0].luma_qmul[1] = VAR_2[VAR_6];
    VAR_4->qmat[0].luma_dc_qmul[0] = VAR_1[VAR_8];
    VAR_4->qmat[0].luma_dc_qmul[1] = VAR_0[VAR_9];
    VAR_4->qmat[0].chroma_qmul[0] = FUNC_0(VAR_3[VAR_10], 132);
    VAR_4->qmat[0].chroma_qmul[1] = VAR_2[VAR_11];
}
