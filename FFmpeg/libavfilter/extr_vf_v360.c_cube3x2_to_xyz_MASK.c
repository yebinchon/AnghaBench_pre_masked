
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float fout_pad; float out_width; float out_pad; float out_height; } ;
typedef TYPE_1__ V360Context ;


 int const FUNC_0 (float const) ;
 int FUNC_1 (TYPE_1__ const*,float const,float const,int const,float*,float const,float const) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(const V360Context *VAR_0,
                           int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                           float *VAR_5)
{
    const float VAR_6 = VAR_0->fout_pad > 0 ? 1.f - VAR_0->fout_pad / (VAR_0->out_width / 3.f) : 1.f - VAR_0->out_pad;
    const float VAR_7 = VAR_0->fout_pad > 0 ? 1.f - VAR_0->fout_pad / (VAR_0->out_height / 2.f) : 1.f - VAR_0->out_pad;

    const float VAR_8 = VAR_3 / 3.f;
    const float VAR_9 = VAR_4 / 2.f;

    const int VAR_10 = FUNC_2(VAR_1 / VAR_8);
    const int VAR_11 = FUNC_2(VAR_2 / VAR_9);
    const int VAR_12 = VAR_10 + 3 * VAR_11;

    const int VAR_13 = FUNC_0(VAR_8 * VAR_10);
    const int VAR_14 = FUNC_0(VAR_9 * VAR_11);
    const int VAR_15 = FUNC_0(VAR_8 * (VAR_10 + 1)) - VAR_13;
    const int VAR_16 = FUNC_0(VAR_9 * (VAR_11 + 1)) - VAR_14;

    const float VAR_17 = 2.f * (VAR_1 - VAR_13 + 0.5f) / VAR_15 - 1.f;
    const float VAR_18 = 2.f * (VAR_2 - VAR_14 + 0.5f) / VAR_16 - 1.f;

    FUNC_1(VAR_0, VAR_17, VAR_18, VAR_12, VAR_5, VAR_6, VAR_7);
}
