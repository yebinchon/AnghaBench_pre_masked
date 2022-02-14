
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ codec_id; int extradata_size; int extradata; } ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int,int const**,int*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2, AVIOContext *VAR_3, AVCodecParameters *VAR_4)
{
    const uint8_t *VAR_5[3];
    int VAR_6[3];
    int VAR_7;
    int VAR_8;

    if (VAR_4->codec_id == VAR_0)
        VAR_7 = 30;
    else
        VAR_7 = 42;

    if (FUNC_3(VAR_4->extradata, VAR_4->extradata_size,
                              VAR_7, VAR_5, VAR_6) < 0) {
        FUNC_0(VAR_2, VAR_1, "Extradata corrupt.\n");
        return -1;
    }

    FUNC_1(VAR_3, 2);
    for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
        FUNC_4(VAR_3, VAR_6[VAR_8]);
    }
    for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
        FUNC_2(VAR_3, VAR_5[VAR_8], VAR_6[VAR_8]);

    return 0;
}
