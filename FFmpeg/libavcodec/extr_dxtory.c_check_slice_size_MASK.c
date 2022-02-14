
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_2,
                            const uint8_t *VAR_3, int VAR_4,
                            int VAR_5, int VAR_6)
{
    int VAR_7;

    if (VAR_5 > VAR_4 - VAR_6) {
        FUNC_1(VAR_2, VAR_1,
               "invalid slice size %d (only %d bytes left)\n",
               VAR_5, VAR_4 - VAR_6);
        return VAR_0;
    }
    if (VAR_5 <= 16) {
        FUNC_1(VAR_2, VAR_1, "invalid slice size %d\n",
               VAR_5);
        return VAR_0;
    }

    VAR_7 = FUNC_0(VAR_3 + VAR_6);
    if (VAR_7 != VAR_5 - 16) {
        FUNC_1(VAR_2, VAR_1,
               "Slice sizes mismatch: got %d instead of %d\n",
               VAR_7, VAR_5 - 16);
    }

    return 0;
}
