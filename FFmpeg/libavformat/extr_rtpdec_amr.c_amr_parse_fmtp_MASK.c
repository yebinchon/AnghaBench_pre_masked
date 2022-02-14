
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* channels; void* interleaving; void* crc; void* octet_align; } ;
typedef TYPE_1__ PayloadContext ;
typedef int AVStream ;
typedef int AVFormatContext ;


 int VAR_0 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1,
                          AVStream *VAR_2, PayloadContext *VAR_3,
                          const char *VAR_4, const char *VAR_5)
{




    if (!FUNC_2(VAR_5, "")) {
        FUNC_1(VAR_1, VAR_0, "AMR fmtp attribute %s had "
                                  "nonstandard empty value\n", VAR_4);
        VAR_5 = "1";
    }
    if (!FUNC_2(VAR_4, "octet-align"))
        VAR_3->octet_align = FUNC_0(VAR_5);
    else if (!FUNC_2(VAR_4, "crc"))
        VAR_3->crc = FUNC_0(VAR_5);
    else if (!FUNC_2(VAR_4, "interleaving"))
        VAR_3->interleaving = FUNC_0(VAR_5);
    else if (!FUNC_2(VAR_4, "channels"))
        VAR_3->channels = FUNC_0(VAR_5);
    return 0;
}
