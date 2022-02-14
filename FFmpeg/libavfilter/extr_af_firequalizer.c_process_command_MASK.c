
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {char* gain_cmd; char* gain_entry_cmd; } ;
typedef TYPE_1__ FIREqualizerContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (TYPE_1__*) ;
 char const* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_2__*,char*,char*) ;
 int FUNC_7 (char const*,char const*) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_3, const char *VAR_4, const char *VAR_5,
                           char *VAR_6, int VAR_7, int VAR_8)
{
    FIREqualizerContext *VAR_9 = VAR_3->priv;
    int VAR_10 = FUNC_0(VAR_2);

    if (!FUNC_7(VAR_4, "gain")) {
        char *VAR_11;

        if (FUNC_1(VAR_9) && !FUNC_7(FUNC_1(VAR_9), VAR_5)) {
            FUNC_4(VAR_3, VAR_0, "equal gain, do not rebuild.\n");
            return 0;
        }

        VAR_11 = FUNC_5(VAR_5);
        if (!VAR_11)
            return FUNC_0(VAR_1);

        VAR_10 = FUNC_6(VAR_3, VAR_11, FUNC_2(VAR_9));
        if (VAR_10 >= 0) {
            FUNC_3(&VAR_9->gain_cmd);
            VAR_9->gain_cmd = VAR_11;
        } else {
            FUNC_3(&VAR_11);
        }
    } else if (!FUNC_7(VAR_4, "gain_entry")) {
        char *VAR_12;

        if (FUNC_2(VAR_9) && !FUNC_7(FUNC_2(VAR_9), VAR_5)) {
            FUNC_4(VAR_3, VAR_0, "equal gain_entry, do not rebuild.\n");
            return 0;
        }

        VAR_12 = FUNC_5(VAR_5);
        if (!VAR_12)
            return FUNC_0(VAR_1);

        VAR_10 = FUNC_6(VAR_3, FUNC_1(VAR_9), VAR_12);
        if (VAR_10 >= 0) {
            FUNC_3(&VAR_9->gain_entry_cmd);
            VAR_9->gain_entry_cmd = VAR_12;
        } else {
            FUNC_3(&VAR_12);
        }
    }

    return VAR_10;
}
