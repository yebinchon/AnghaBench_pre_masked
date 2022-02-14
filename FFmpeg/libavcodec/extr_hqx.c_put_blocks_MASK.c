
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_6__ {int (* idct_put ) (int *,int,int *,int const*) ;} ;
struct TYPE_7__ {TYPE_2__ hqxdsp; TYPE_1__* pic; } ;
struct TYPE_5__ {int* linesize; int ** data; } ;
typedef TYPE_3__ HQXContext ;


 int FUNC_0 (int *,int,int *,int const*) ;
 int FUNC_1 (int *,int,int *,int const*) ;

__attribute__((used)) static inline void FUNC_2(HQXContext *VAR_0, int VAR_1,
                              int VAR_2, int VAR_3, int VAR_4,
                              int16_t *VAR_5, int16_t *VAR_6,
                              const uint8_t *VAR_7)
{
    int VAR_8 = VAR_4 ? 2 : 1;
    int VAR_9 = VAR_0->pic->linesize[VAR_1];
    uint8_t *VAR_10 = VAR_0->pic->data[VAR_1] + VAR_2 * 2;

    VAR_0->hqxdsp.idct_put((uint16_t *)(VAR_10 + VAR_3 * VAR_9),
                         VAR_9 * VAR_8, VAR_5, VAR_7);
    VAR_0->hqxdsp.idct_put((uint16_t *)(VAR_10 + (VAR_3 + (VAR_4 ? 1 : 8)) * VAR_9),
                         VAR_9 * VAR_8, VAR_6, VAR_7);
}
