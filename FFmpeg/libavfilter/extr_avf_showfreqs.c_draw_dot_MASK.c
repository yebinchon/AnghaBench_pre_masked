
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* linesize; int ** data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline void FUNC_2(AVFrame *VAR_0, int VAR_1, int VAR_2, uint8_t VAR_3[4])
{

    uint32_t VAR_4 = FUNC_0(VAR_0->data[0] + VAR_2 * VAR_0->linesize[0] + VAR_1 * 4);

    if ((VAR_4 & 0xffffff) != 0)
        FUNC_1(VAR_0->data[0] + VAR_2 * VAR_0->linesize[0] + VAR_1 * 4, FUNC_0(VAR_3) | VAR_4);
    else
        FUNC_1(VAR_0->data[0] + VAR_2 * VAR_0->linesize[0] + VAR_1 * 4, FUNC_0(VAR_3));
}
