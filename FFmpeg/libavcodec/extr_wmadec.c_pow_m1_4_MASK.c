
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* lsp_pow_m_table1; float* lsp_pow_m_table2; float* lsp_pow_e_table; } ;
typedef TYPE_1__ WMACodecContext ;


 int VAR_0 ;

__attribute__((used)) static inline float FUNC_0(WMACodecContext *VAR_1, float VAR_2)
{
    union {
        float f;
        unsigned int v;
    } VAR_3, VAR_4;
    unsigned int VAR_5, VAR_6;
    float VAR_7, VAR_8;

    VAR_3.f = VAR_2;
    VAR_5 = VAR_3.v >> 23;
    VAR_6 = (VAR_3.v >> (23 - VAR_0)) & ((1 << VAR_0) - 1);

    VAR_4.v = ((VAR_3.v << VAR_0) & ((1 << 23) - 1)) | (127 << 23);
    VAR_7 = VAR_1->lsp_pow_m_table1[VAR_6];
    VAR_8 = VAR_1->lsp_pow_m_table2[VAR_6];
    return VAR_1->lsp_pow_e_table[VAR_5] * (VAR_7 + VAR_8 * VAR_4.f);
}
