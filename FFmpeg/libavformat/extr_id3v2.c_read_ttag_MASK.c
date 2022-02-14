
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const uint8_t ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int **,char const*,char const*,int) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (int *,int ,char*,char const*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int,char const**,int*) ;
 int * VAR_5 ;
 int FUNC_6 (char const*,char*,unsigned int*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static void FUNC_8(AVFormatContext *VAR_6, AVIOContext *VAR_7, int VAR_8,
                      AVDictionary **VAR_9, const char *VAR_10)
{
    uint8_t *VAR_11;
    int VAR_12, VAR_13 = VAR_0 | VAR_2;
    unsigned VAR_14;

    if (VAR_8 < 1)
        return;

    VAR_12 = FUNC_4(VAR_7);
    VAR_8--;

    if (FUNC_5(VAR_6, VAR_7, VAR_12, &VAR_11, &VAR_8) < 0) {
        FUNC_2(VAR_6, VAR_3, "Error reading frame %s, skipped\n", VAR_10);
        return;
    }

    if (!(FUNC_7(VAR_10, "TCON") && FUNC_7(VAR_10, "TCO")) &&
        (FUNC_6(VAR_11, "(%d)", &VAR_14) == 1 || FUNC_6(VAR_11, "%d", &VAR_14) == 1) &&
        VAR_14 <= VAR_4) {
        FUNC_1(&VAR_11);
        VAR_11 = FUNC_3(VAR_5[VAR_14]);
    } else if (!(FUNC_7(VAR_10, "TXXX") && FUNC_7(VAR_10, "TXX"))) {

        VAR_10 = VAR_11;
        if (FUNC_5(VAR_6, VAR_7, VAR_12, &VAR_11, &VAR_8) < 0) {
            FUNC_2(VAR_6, VAR_3, "Error reading frame %s, skipped\n", VAR_10);
            FUNC_1(&VAR_10);
            return;
        }
        VAR_13 |= VAR_1;
    } else if (!*VAR_11)
        FUNC_1(&VAR_11);

    if (VAR_11)
        FUNC_0(VAR_9, VAR_10, VAR_11, VAR_13);
}
