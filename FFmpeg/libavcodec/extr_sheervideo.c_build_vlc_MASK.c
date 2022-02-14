
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int VLC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int,int*,int,int,int*,int,int,int*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(VLC *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    uint32_t VAR_3[1024];
    uint8_t VAR_4[1024];
    uint16_t VAR_5[1024];
    uint64_t VAR_6;
    int VAR_7;

    VAR_6 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        VAR_3[VAR_7] = VAR_6 >> (32 - VAR_1[VAR_7]);
        VAR_4[VAR_7] = VAR_1[VAR_7];
        VAR_5[VAR_7] = VAR_7;
        VAR_6 += 1ULL << (32 - VAR_1[VAR_7]);
    }

    FUNC_0(VAR_0);
    return FUNC_1(VAR_0, 16, VAR_2,
                              VAR_4, sizeof(*VAR_4), sizeof(*VAR_4),
                              VAR_3, sizeof(*VAR_3), sizeof(*VAR_3),
                              VAR_5, sizeof(*VAR_5), sizeof(*VAR_5), 0);
}
