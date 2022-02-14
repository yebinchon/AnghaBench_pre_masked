
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_8__ {int* linesize; int ** data; } ;
struct TYPE_6__ {int (* idct_put ) (int *,int,int *) ;} ;
struct TYPE_7__ {TYPE_1__ hqhqadsp; } ;
typedef TYPE_2__ HQContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int,int *) ;

__attribute__((used)) static inline void FUNC_2(HQContext *VAR_0, AVFrame *VAR_1,
                              int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                              int16_t *VAR_6, int16_t *VAR_7)
{
    uint8_t *VAR_8 = VAR_1->data[VAR_2] + VAR_3;

    VAR_0->hqhqadsp.idct_put(VAR_8 + VAR_4 * VAR_1->linesize[VAR_2],
                         VAR_1->linesize[VAR_2] << VAR_5, VAR_6);
    VAR_0->hqhqadsp.idct_put(VAR_8 + (VAR_4 + (VAR_5 ? 1 : 8)) * VAR_1->linesize[VAR_2],
                         VAR_1->linesize[VAR_2] << VAR_5, VAR_7);
}
