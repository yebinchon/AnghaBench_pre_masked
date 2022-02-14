
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint16_t ;
typedef int buf ;
struct TYPE_4__ {int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int **,char const*,char*,int ) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int,char*,int) ;
 int FUNC_7 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4, const uint8_t *VAR_5,
                          uint16_t VAR_6, int VAR_7, AVDictionary **VAR_8)
{
    int VAR_9;
    uint8_t *VAR_10;
    uint16_t VAR_11 = 2 * VAR_6 + 1;
    AVIOContext *VAR_12 = VAR_4->pb;

    VAR_10 = FUNC_4(VAR_11);
    if (!VAR_10)
        return FUNC_0(VAR_3);
    if (VAR_7 == VAR_0) {

        if ((VAR_9 = FUNC_6(VAR_12, VAR_6, VAR_10, VAR_11)) < 0)
            goto failed;
        if (FUNC_1(VAR_8, VAR_5, VAR_10, 0) < 0)
            FUNC_3(VAR_4, VAR_2, "av_dict_set failed.\n");
    } else {
        char VAR_13[256];
        if (VAR_6 > sizeof(VAR_13)) {
            VAR_9 = VAR_1;
            goto failed;
        }
        if ((VAR_9 = FUNC_5(VAR_12, VAR_10, VAR_6)) < 0)
            goto failed;
        if (VAR_9 < 2 * VAR_6)
            VAR_10[VAR_9] = '\0';
        else
            VAR_10[2 * VAR_6 - 1] = '\0';
        FUNC_7(VAR_13, sizeof(VAR_13), "%s", VAR_10);
        if (FUNC_1(VAR_8, VAR_5, VAR_13, 0) < 0)
            FUNC_3(VAR_4, VAR_2, "av_dict_set failed.\n");
    }
    FUNC_2(&VAR_10);

    return 0;

failed:
    FUNC_2(&VAR_10);
    return VAR_9;
}
