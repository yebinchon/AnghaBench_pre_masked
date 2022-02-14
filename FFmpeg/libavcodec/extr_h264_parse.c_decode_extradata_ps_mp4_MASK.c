
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int PutByteContext ;
typedef int H264ParamSets ;
typedef int GetByteContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int const**) ;
 int FUNC_3 (void*,int ,char*) ;
 int const* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int const*,int,int *,int,void*) ;

__attribute__((used)) static int FUNC_15(const uint8_t *VAR_6, int VAR_7, H264ParamSets *VAR_8,
                                   int VAR_9, void *VAR_10)
{
    int VAR_11;

    VAR_11 = FUNC_14(VAR_6, VAR_7, VAR_8, 1, VAR_10);
    if (VAR_11 < 0 && !(VAR_9 & VAR_0)) {
        GetByteContext VAR_12;
        PutByteContext VAR_13;
        uint8_t *VAR_14;
        int VAR_15;

        FUNC_3(VAR_10, VAR_2,
               "SPS decoding failure, trying again after escaping the NAL\n");

        if (VAR_7 / 2 >= (VAR_5 - VAR_1) / 3)
            return FUNC_0(VAR_4);
        VAR_15 = VAR_7 * 3 / 2 + VAR_1;
        VAR_14 = FUNC_4(VAR_15);
        if (!VAR_14)
            return FUNC_0(VAR_3);

        FUNC_7(&VAR_12, VAR_6, VAR_7);
        FUNC_8(&VAR_13, VAR_14, VAR_15);

        while (FUNC_6(&VAR_12)) {
            if (FUNC_6(&VAR_12) >= 3 &&
                FUNC_9(&VAR_12) <= 3) {
                FUNC_10(&VAR_13, 3);
                FUNC_12(&VAR_12, 2);
            } else
                FUNC_11(&VAR_13, FUNC_5(&VAR_12));
        }

        VAR_15 = FUNC_13(&VAR_13);
        FUNC_1(VAR_14, VAR_15 - 2);

        (void)FUNC_14(VAR_14, VAR_15, VAR_8, 1, VAR_10);

        FUNC_2(&VAR_14);
    }

    return 0;
}
