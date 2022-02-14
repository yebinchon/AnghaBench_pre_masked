
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_5__ {int (* io_open ) (TYPE_1__*,int **,char const*,int ,int *) ;} ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char,unsigned char,char,char) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int **) ;
 int FUNC_9 (int*,int const*,int) ;
 int FUNC_10 (TYPE_1__*,int **,char const*,int ,int *) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_4, const char *VAR_5, int64_t *VAR_6, int64_t *VAR_7, int64_t *VAR_8, int64_t VAR_9)
{
    AVIOContext *VAR_10;
    int VAR_11;
    uint32_t VAR_12;
    if ((VAR_11 = VAR_4->io_open(VAR_4, &VAR_10, VAR_5, VAR_0, ((void*)0))) < 0)
        return VAR_11;
    VAR_11 = FUNC_0(VAR_1);
    *VAR_8 = FUNC_2(VAR_10);
    if (*VAR_8 < 8 || *VAR_8 > VAR_9)
        goto fail;
    if (FUNC_5(VAR_10) != FUNC_1('m','o','o','f'))
        goto fail;
    VAR_12 = FUNC_2(VAR_10);
    if (VAR_12 > *VAR_8)
        goto fail;
    if (FUNC_5(VAR_10) != FUNC_1('m','f','h','d'))
        goto fail;
    FUNC_6(VAR_10, VAR_12 - 8, VAR_2);
    FUNC_2(VAR_10);
    if (FUNC_5(VAR_10) != FUNC_1('t','r','a','f'))
        goto fail;
    while (FUNC_7(VAR_10) < *VAR_8) {
        uint32_t VAR_13 = FUNC_2(VAR_10);
        uint32_t VAR_14 = FUNC_5(VAR_10);
        int64_t VAR_15 = FUNC_7(VAR_10) + VAR_13 - 8;
        if (VAR_13 < 8 || VAR_13 >= *VAR_8)
            goto fail;
        if (VAR_14 == FUNC_1('u','u','i','d')) {
            static const uint8_t VAR_16[] = {
                0x6d, 0x1d, 0x9b, 0x05, 0x42, 0xd5, 0x44, 0xe6,
                0x80, 0xe2, 0x14, 0x1d, 0xaf, 0xf7, 0x57, 0xb2
            };
            uint8_t VAR_17[16];
            FUNC_4(VAR_10, VAR_17, 16);
            if (!FUNC_9(VAR_17, VAR_16, 16) && VAR_13 >= 8 + 16 + 4 + 16) {
                FUNC_6(VAR_10, 4, VAR_2);
                *VAR_6 = FUNC_3(VAR_10);
                *VAR_7 = FUNC_3(VAR_10);
                VAR_11 = 0;
                break;
            }
        }
        FUNC_6(VAR_10, VAR_15, VAR_3);
    }
fail:
    FUNC_8(VAR_4, &VAR_10);
    return VAR_11;
}
