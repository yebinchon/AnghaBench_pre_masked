
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline int FUNC_2(AVCodecContext *VAR_4, uint8_t *VAR_5,
        uint8_t *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10;
    int VAR_11 = VAR_8;
    int VAR_12 = VAR_7 % VAR_3;
    int VAR_13 = VAR_7 / VAR_3;
    int VAR_14 = VAR_12 + VAR_11 - VAR_3;

    if (!VAR_6) {

        return 0;
    }

    if (VAR_13 + VAR_8 > VAR_2) {
        FUNC_0(VAR_4, VAR_1, "invalid offset %d during C93 decoding\n",
               VAR_7);
        return VAR_0;
    }

    if (VAR_14 > 0) {
        VAR_11 -= VAR_14;
        for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
            FUNC_1(&VAR_5[VAR_10*VAR_9+VAR_11], &VAR_6[(VAR_13+VAR_10)*VAR_9], VAR_14);
        }
    }

    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
        FUNC_1(&VAR_5[VAR_10*VAR_9], &VAR_6[(VAR_13+VAR_10)*VAR_9+VAR_12], VAR_11);
    }

    return 0;
}
