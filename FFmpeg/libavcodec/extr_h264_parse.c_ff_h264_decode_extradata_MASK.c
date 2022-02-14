
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int H264ParamSets ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (void*,int ,char*,int) ;
 int FUNC_2 (int const*,int,int *,int ,void*) ;
 int FUNC_3 (int const*,int,int *,int,void*) ;

int FUNC_4(const uint8_t *VAR_2, int VAR_3, H264ParamSets *VAR_4,
                             int *VAR_5, int *VAR_6,
                             int VAR_7, void *VAR_8)
{
    int VAR_9;

    if (!VAR_2 || VAR_3 <= 0)
        return -1;

    if (VAR_2[0] == 1) {
        int VAR_10, VAR_11, VAR_12;
        const uint8_t *VAR_13 = VAR_2;

        *VAR_5 = 1;

        if (VAR_3 < 7) {
            FUNC_1(VAR_8, VAR_1, "avcC %d too short\n", VAR_3);
            return VAR_0;
        }


        VAR_11 = *(VAR_13 + 5) & 0x1f;
        VAR_13 += 6;
        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
            VAR_12 = FUNC_0(VAR_13) + 2;
            if (VAR_12 > VAR_3 - (VAR_13 - VAR_2))
                return VAR_0;
            VAR_9 = FUNC_3(VAR_13, VAR_12, VAR_4, VAR_7, VAR_8);
            if (VAR_9 < 0) {
                FUNC_1(VAR_8, VAR_1,
                       "Decoding sps %d from avcC failed\n", VAR_10);
                return VAR_9;
            }
            VAR_13 += VAR_12;
        }

        VAR_11 = *(VAR_13++);
        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
            VAR_12 = FUNC_0(VAR_13) + 2;
            if (VAR_12 > VAR_3 - (VAR_13 - VAR_2))
                return VAR_0;
            VAR_9 = FUNC_3(VAR_13, VAR_12, VAR_4, VAR_7, VAR_8);
            if (VAR_9 < 0) {
                FUNC_1(VAR_8, VAR_1,
                       "Decoding pps %d from avcC failed\n", VAR_10);
                return VAR_9;
            }
            VAR_13 += VAR_12;
        }

        *VAR_6 = (VAR_2[4] & 0x03) + 1;
    } else {
        *VAR_5 = 0;
        VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, 0, VAR_8);
        if (VAR_9 < 0)
            return VAR_9;
    }
    return VAR_3;
}
