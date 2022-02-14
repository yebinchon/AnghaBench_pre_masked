
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int ID3v2ExtraMeta ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*,char const*) ;
 int FUNC_4 (int **,int *,int ) ;
 int FUNC_5 (int *,int) ;
 int VAR_4 ;
 int FUNC_6 (int *,int **,int *,int,int,int,int **) ;
 int FUNC_7 (int **) ;

__attribute__((used)) static void FUNC_8(AVIOContext *VAR_5, AVDictionary **VAR_6,
                                AVFormatContext *VAR_7, const char *VAR_8,
                                ID3v2ExtraMeta **VAR_9, int64_t VAR_10)
{
    int VAR_11, VAR_12;
    uint8_t VAR_13[VAR_0];
    int VAR_14;
    int64_t VAR_15, VAR_16;

    if (VAR_10 && VAR_10 < VAR_0)
        return;

    VAR_15 = FUNC_2(VAR_5);
    do {

        VAR_16 = FUNC_2(VAR_5);
        if (VAR_10 && VAR_16 - VAR_15 >= VAR_10 - VAR_0) {
            FUNC_1(VAR_5, VAR_16, VAR_1);
            break;
        }

        VAR_12 = FUNC_5(VAR_5, VAR_0);
        if (VAR_12 >= 0)
            VAR_12 = FUNC_0(VAR_5, VAR_13, VAR_0);
        if (VAR_12 != VAR_0) {
            FUNC_1(VAR_5, VAR_16, VAR_1);
            break;
        }
        VAR_14 = FUNC_3(VAR_13, VAR_8);
        if (VAR_14) {

            VAR_11 = ((VAR_13[6] & 0x7f) << 21) |
                  ((VAR_13[7] & 0x7f) << 14) |
                  ((VAR_13[8] & 0x7f) << 7) |
                   (VAR_13[9] & 0x7f);
            FUNC_6(VAR_5, VAR_6, VAR_7, VAR_11, VAR_13[3], VAR_13[5], VAR_9);
        } else {
            FUNC_1(VAR_5, VAR_16, VAR_1);
        }
    } while (VAR_14);
    FUNC_4(VAR_6, ((void*)0), VAR_2);
    FUNC_4(VAR_6, ((void*)0), VAR_4);
    FUNC_4(VAR_6, ((void*)0), VAR_3);
    FUNC_7(VAR_6);
}
