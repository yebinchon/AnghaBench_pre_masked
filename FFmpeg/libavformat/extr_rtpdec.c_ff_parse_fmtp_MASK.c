
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int attr ;
typedef int PayloadContext ;
typedef int AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const**,char*,int,char*,int) ;
 int FUNC_5 (char const*) ;

int FUNC_6(AVFormatContext *VAR_3,
                  AVStream *VAR_4, PayloadContext *VAR_5, const char *VAR_6,
                  int (*VAR_7)(AVFormatContext *VAR_8,
                                    AVStream *VAR_9,
                                    PayloadContext *VAR_10,
                                    const char *VAR_11, const char *VAR_12))
{
    char VAR_13[256];
    char *VAR_14;
    int VAR_15;
    int VAR_16 = FUNC_5(VAR_6) + 1;

    if (!(VAR_14 = FUNC_3(VAR_16))) {
        FUNC_2(VAR_3, VAR_1, "Failed to allocate data for FMTP.\n");
        return FUNC_0(VAR_2);
    }


    while (*VAR_6 && *VAR_6 == ' ')
        VAR_6++;
    while (*VAR_6 && *VAR_6 != ' ')
        VAR_6++;
    while (*VAR_6 && *VAR_6 == ' ')
        VAR_6++;

    while (FUNC_4(&VAR_6,
                                       VAR_13, sizeof(VAR_13),
                                       VAR_14, VAR_16)) {
        VAR_15 = VAR_7(VAR_3, VAR_4, VAR_5, VAR_13, VAR_14);
        if (VAR_15 < 0 && VAR_15 != VAR_0) {
            FUNC_1(VAR_14);
            return VAR_15;
        }
    }
    FUNC_1(VAR_14);
    return 0;
}
