
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int **,char*,char const*,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_2, const char *VAR_3, AVDictionary **VAR_4)
{

    if (VAR_3 && FUNC_3(VAR_3) > 1) {
        const char VAR_5[3] = { VAR_3[0], VAR_3[1], '\0' };
        const char *VAR_6 = FUNC_2(VAR_5,
                                                       VAR_0);
        if (VAR_6)
            if (FUNC_0(VAR_4, "language", VAR_6, 0) < 0)
                FUNC_1(VAR_2, VAR_1, "av_dict_set failed.\n");
    }
}
