
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Tracks {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char,float,char,char) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,char const*,char const*) ;
 int FUNC_7 (struct Tracks*,int,int *) ;
 int VAR_4 ;
 int FUNC_8 (struct Tracks*,int,int *,char const*,int,int,char const*) ;

__attribute__((used)) static int FUNC_9(struct Tracks *VAR_5, int VAR_6,
                     const char *VAR_7, int VAR_8, int VAR_9,
                     const char *VAR_10, const char* VAR_11)
{
    int VAR_12 = 0;
    const char* VAR_13 = "";
    AVIOContext *VAR_14 = ((void*)0);
    int32_t VAR_15;

    if ((VAR_12 = FUNC_2(&VAR_14, VAR_7, VAR_1, ((void*)0), ((void*)0))) < 0)
        goto fail;
    FUNC_4(VAR_14, FUNC_5(VAR_14) - 4, VAR_3);
    VAR_15 = FUNC_3(VAR_14);
    FUNC_4(VAR_14, -VAR_15, VAR_2);
    if (FUNC_3(VAR_14) != VAR_15) {
        VAR_12 = VAR_0;
        VAR_13 = "mfra size mismatch";
        goto fail;
    }
    if (FUNC_3(VAR_14) != FUNC_0('m', 'f', 'r', 'a')) {
        VAR_12 = VAR_0;
        VAR_13 = "mfra tag mismatch";
        goto fail;
    }
    while (!FUNC_7(VAR_5, VAR_6, VAR_14)) {

    }

    if (VAR_8 || VAR_9)
        VAR_12 = FUNC_8(VAR_5, VAR_6, VAR_14, VAR_10, VAR_8, VAR_9,
                              VAR_11);
    VAR_13 = "error in write_fragments";

fail:
    if (VAR_14)
        FUNC_1(VAR_14);
    if (VAR_12)
        FUNC_6(VAR_4, "Unable to read the MFRA atom in %s (%s)\n", VAR_7, VAR_13);
    return VAR_12;
}
