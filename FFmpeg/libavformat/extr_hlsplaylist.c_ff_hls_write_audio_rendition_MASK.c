
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *,char*,...) ;

void FUNC_1(AVIOContext *VAR_0, char *VAR_1,
                                  const char *VAR_2, char *VAR_3, int VAR_4, int VAR_5) {
    if (!VAR_0 || !VAR_1 || !VAR_2)
        return;

    FUNC_0(VAR_0, "#EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID=\"group_%s\"", VAR_1);
    FUNC_0(VAR_0, ",NAME=\"audio_%d\",DEFAULT=%s,", VAR_4, VAR_5 ? "YES" : "NO");
    if (VAR_3) {
        FUNC_0(VAR_0, "LANGUAGE=\"%s\",", VAR_3);
    }
    FUNC_0(VAR_0, "URI=\"%s\"\n", VAR_2);
}
