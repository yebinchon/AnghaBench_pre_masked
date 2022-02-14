
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* u64; } ;
typedef TYPE_1__ av_aes_block ;



__attribute__((used)) static inline void FUNC_0(av_aes_block *VAR_0, const av_aes_block *VAR_1,
                          const av_aes_block *VAR_2)
{
    VAR_0->u64[0] = VAR_1->u64[0] ^ VAR_2->u64[0];
    VAR_0->u64[1] = VAR_1->u64[1] ^ VAR_2->u64[1];
}
