
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int CMSampleBufferRef ;
typedef int CMBlockBufferRef ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t,size_t,size_t*) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(size_t VAR_1,
                       CMSampleBufferRef VAR_2,
                       int *VAR_3)
{
    size_t VAR_4 = 0;
    int VAR_5;
    int VAR_6 = 0;
    uint8_t VAR_7[4];
    size_t VAR_8 = FUNC_2(VAR_2);
    CMBlockBufferRef VAR_9 = FUNC_1(VAR_2);

    if (VAR_1 > 4)
        return VAR_0;

    while (VAR_4 < VAR_8) {
        size_t VAR_10;
        size_t VAR_11 = 0;
        size_t VAR_12;

        VAR_5 = FUNC_0(VAR_9,
                                            VAR_4,
                                            VAR_1,
                                            VAR_7);

        for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
            VAR_11 <<= 8;
            VAR_11 |= VAR_7[VAR_12];
        }

        VAR_10 = VAR_11 + VAR_1;
        VAR_4 += VAR_10;

        VAR_6++;
    }

    *VAR_3 = VAR_6;
    return 0;
}
