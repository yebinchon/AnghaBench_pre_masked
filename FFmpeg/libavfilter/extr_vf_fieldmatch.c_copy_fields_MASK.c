
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int* linesize; scalar_t__* data; } ;
struct TYPE_10__ {int bpc; } ;
typedef TYPE_1__ FieldMatchContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (scalar_t__,int,scalar_t__,int,int,int const) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_2__ const*,int) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__ const*,int) ;

__attribute__((used)) static void FUNC_3(const FieldMatchContext *VAR_0, AVFrame *VAR_1,
                        const AVFrame *VAR_2, int VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < 4 && VAR_2->data[VAR_4] && VAR_2->linesize[VAR_4]; VAR_4++) {
        const int VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_4);
        const int VAR_6 = (VAR_5 >> 1) + (VAR_3 ? 0 : (VAR_5 & 1));
        FUNC_0(VAR_1->data[VAR_4] + VAR_3*VAR_1->linesize[VAR_4], VAR_1->linesize[VAR_4] << 1,
                            VAR_2->data[VAR_4] + VAR_3*VAR_2->linesize[VAR_4], VAR_2->linesize[VAR_4] << 1,
                            FUNC_2(VAR_0, VAR_2, VAR_4) * VAR_0->bpc, VAR_6);
    }
}
