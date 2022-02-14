
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (float const,float) ;
 float FUNC_1 (float const) ;

__attribute__((used)) static inline void FUNC_2(const float VAR_1, const float VAR_2, const float VAR_3, float* VAR_4, float* VAR_5, float* VAR_6)
{
 const float VAR_7 = 0.412453f * VAR_1 + 0.35758f * VAR_2 + 0.180423f * VAR_3;
 const float VAR_8 = 0.212671f * VAR_1 + 0.71516f * VAR_2 + 0.072169f * VAR_3;
 const float VAR_9 = 0.019334f * VAR_1 + 0.119193f * VAR_2 + 0.950227f * VAR_3;

 const float VAR_10 = 0.312713f, VAR_11 = 0.329016f;
 const float VAR_12 = -2.f * VAR_10 + 12.f * VAR_11 + 3.f;
 const float VAR_13 = 4.f * VAR_10 / VAR_12;
 const float VAR_14 = 9.f * VAR_11 / VAR_12;

    const float VAR_15 = FUNC_0((VAR_7 + 15.f * VAR_8 + 3.f * VAR_9), VAR_0);
 const float VAR_16 = 4.f * VAR_7 / VAR_15;
 const float VAR_17 = 9.f * VAR_8 / VAR_15;

 const float VAR_18 = FUNC_1(VAR_8);

 const float VAR_19 = FUNC_0(0.f, ((116.f * VAR_18) - 16.f));
 const float VAR_20 = 13.f * VAR_19 * (VAR_16 - VAR_13);
 const float VAR_21 = 13.f * VAR_19 * (VAR_17 - VAR_14);


 *VAR_4 = VAR_19 * (255.f / 100.f);
 *VAR_5 = (VAR_20 + 134.f) * (255.f / (220.f + 134.f));
 *VAR_6 = (VAR_21 + 140.f) * (255.f / (122.f + 140.f));
}
