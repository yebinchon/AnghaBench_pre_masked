
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* u64; } ;
typedef TYPE_1__ av_aes_block ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(uint8_t *VAR_0, const av_aes_block *VAR_1,
                            const av_aes_block *VAR_2)
{
    FUNC_0(VAR_0, VAR_1->u64[0] ^ VAR_2->u64[0]);
    FUNC_0(VAR_0 + 8, VAR_1->u64[1] ^ VAR_2->u64[1]);
}
