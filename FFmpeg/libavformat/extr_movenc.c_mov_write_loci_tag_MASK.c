
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {char* value; } ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVDictionaryEntry ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,char const*,scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 TYPE_1__* FUNC_7 (int *,char*,int*) ;
 scalar_t__ FUNC_8 (char const*) ;
 double FUNC_9 (char const*,char**) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_1, AVIOContext *VAR_2)
{
    int VAR_3;
    int64_t VAR_4 = FUNC_1(VAR_2);
    double VAR_5, VAR_6, VAR_7;
    int32_t VAR_8, VAR_9, VAR_10;
    AVDictionaryEntry *VAR_11 = FUNC_7(VAR_1, "location", &VAR_3);
    const char *VAR_12, *VAR_13 = "";
    char *VAR_14;
    static const char *VAR_15 = "earth";
    if (!VAR_11)
        return 0;

    VAR_12 = VAR_11->value;
    VAR_6 = FUNC_9(VAR_12, &VAR_14);
    if (VAR_14 == VAR_12) {
        FUNC_0(VAR_1, VAR_0, "malformed location metadata\n");
        return 0;
    }
    VAR_12 = VAR_14;
    VAR_5 = FUNC_9(VAR_12, &VAR_14);
    if (VAR_14 == VAR_12) {
        FUNC_0(VAR_1, VAR_0, "malformed location metadata\n");
        return 0;
    }
    VAR_12 = VAR_14;
    VAR_7 = FUNC_9(VAR_12, &VAR_14);

    if (*VAR_14 == '/')
        VAR_13 = VAR_14 + 1;

    VAR_8 = (int32_t) ((1 << 16) * VAR_5);
    VAR_9 = (int32_t) ((1 << 16) * VAR_6);
    VAR_10 = (int32_t) ((1 << 16) * VAR_7);

    FUNC_4(VAR_2, 0);
    FUNC_6(VAR_2, "loci");
    FUNC_4(VAR_2, 0);
    FUNC_3(VAR_2, VAR_3);
    FUNC_5(VAR_2, VAR_13, FUNC_8(VAR_13) + 1);
    FUNC_2(VAR_2, 0);
    FUNC_4(VAR_2, VAR_8);
    FUNC_4(VAR_2, VAR_9);
    FUNC_4(VAR_2, VAR_10);
    FUNC_5(VAR_2, VAR_15, FUNC_8(VAR_15) + 1);
    FUNC_2(VAR_2, 0);

    return FUNC_10(VAR_2, VAR_4);
}
