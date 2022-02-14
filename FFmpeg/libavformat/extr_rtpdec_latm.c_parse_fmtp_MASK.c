
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PayloadContext ;
typedef int AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0,
                      AVStream *VAR_1, PayloadContext *VAR_2,
                      const char *VAR_3, const char *VAR_4)
{
    int VAR_5;

    if (!FUNC_3(VAR_3, "config")) {
        VAR_5 = FUNC_2(VAR_1, VAR_4);
        if (VAR_5 < 0)
            return VAR_5;
    } else if (!FUNC_3(VAR_3, "cpresent")) {
        int VAR_6 = FUNC_0(VAR_4);
        if (VAR_6 != 0)
            FUNC_1(VAR_0,
                                  "RTP MP4A-LATM with in-band configuration");
    }

    return 0;
}
