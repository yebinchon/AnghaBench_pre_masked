
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mfxStatus ;
typedef int mfxSession ;
struct TYPE_3__ {scalar_t__ Data; } ;
typedef TYPE_1__ mfxPluginUID ;
typedef int errorbuf ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char const**,char*) ;
 int FUNC_4 (void*,int ,char*) ;
 int FUNC_5 (void*,scalar_t__,char*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (char*,char*,scalar_t__) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(mfxSession VAR_3, const char *VAR_4,
                            void *VAR_5)
{
    if (!VAR_4 || !*VAR_4)
        return 0;

    while (*VAR_4) {
        mfxPluginUID VAR_6;
        mfxStatus VAR_7;
        int VAR_8, VAR_9 = 0;

        char *VAR_10 = FUNC_3(&VAR_4, ":");
        if (!VAR_10)
            return FUNC_0(VAR_2);
        if (FUNC_8(VAR_10) != 2 * sizeof(VAR_6.Data)) {
            FUNC_4(VAR_5, VAR_0, "Invalid plugin UID length\n");
            VAR_9 = FUNC_0(VAR_1);
            goto load_plugin_fail;
        }

        for (VAR_8 = 0; VAR_8 < sizeof(VAR_6.Data); VAR_8++) {
            VAR_9 = FUNC_7(VAR_10 + 2 * VAR_8, "%2hhx", VAR_6.Data + VAR_8);
            if (VAR_9 != 1) {
                FUNC_4(VAR_5, VAR_0, "Invalid plugin UID\n");
                VAR_9 = FUNC_0(VAR_1);
                goto load_plugin_fail;
            }

        }

        VAR_7 = FUNC_1(VAR_3, &VAR_6, 1);
        if (VAR_7 < 0) {
            char VAR_11[128];
            FUNC_6(VAR_11, sizeof(VAR_11),
                     "Could not load the requested plugin '%s'", VAR_10);
            VAR_9 = FUNC_5(VAR_5, VAR_7, VAR_11);
            goto load_plugin_fail;
        }

        if (*VAR_4)
            VAR_4++;
load_plugin_fail:
        FUNC_2(&VAR_10);
        if (VAR_9 < 0)
            return VAR_9;
    }

    return 0;

}
