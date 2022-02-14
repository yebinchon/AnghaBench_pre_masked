
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {double* var_values; } ;
typedef TYPE_1__ DrawTextContext ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,char const*,struct tm*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (TYPE_2__*,int ,char*,char const*) ;
 int FUNC_4 (int*,char*,int) ;
 int FUNC_5 (int *,struct tm*) ;
 scalar_t__ FUNC_6 (double) ;
 int FUNC_7 (double) ;
 int FUNC_8 (int *,struct tm*) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_4, AVBPrint *VAR_5,
                    char *VAR_6, unsigned VAR_7, char **VAR_8, int VAR_9)
{
    DrawTextContext *VAR_10 = VAR_4->priv;
    const char *VAR_11;
    double VAR_12 = VAR_10->var_values[VAR_3];
    int VAR_13;

    VAR_11 = VAR_7 >= 1 ? VAR_8[0] : "flt";
    if (VAR_7 >= 2) {
        int64_t VAR_14;
        if ((VAR_13 = FUNC_4(&VAR_14, VAR_8[1], 1)) < 0) {
            FUNC_3(VAR_4, VAR_0, "Invalid delta '%s'\n", VAR_8[1]);
            return VAR_13;
        }
        VAR_12 += (double)VAR_14 / VAR_1;
    }
    if (!FUNC_9(VAR_11, "flt")) {
        FUNC_2(VAR_5, "%.6f", VAR_12);
    } else if (!FUNC_9(VAR_11, "hms")) {
        if (FUNC_6(VAR_12)) {
            FUNC_2(VAR_5, " ??:??:??.???");
        } else {
            int64_t VAR_15 = FUNC_7(VAR_12 * 1000);
            char VAR_16 = ' ';
            if (VAR_15 < 0) {
                VAR_16 = '-';
                VAR_15 = -VAR_15;
            }
            if (VAR_7 >= 3) {
                if (!FUNC_9(VAR_8[2], "24HH")) {
                    VAR_15 %= 24 * 60 * 60 * 1000;
                } else {
                    FUNC_3(VAR_4, VAR_0, "Invalid argument '%s'\n", VAR_8[2]);
                    return FUNC_0(VAR_2);
                }
            }
            FUNC_2(VAR_5, "%c%02d:%02d:%02d.%03d", VAR_16,
                       (int)(VAR_15 / (60 * 60 * 1000)),
                       (int)(VAR_15 / (60 * 1000)) % 60,
                       (int)(VAR_15 / 1000) % 60,
                       (int)(VAR_15 % 1000));
        }
    } else if (!FUNC_9(VAR_11, "localtime") ||
               !FUNC_9(VAR_11, "gmtime")) {
        struct tm VAR_17;
        time_t VAR_18 = (time_t)VAR_12;
        const char *VAR_19 = VAR_7 >= 3 ? VAR_8[2] : "%Y-%m-%d %H:%M:%S";
        if (!FUNC_9(VAR_11, "localtime"))
            FUNC_8(&VAR_18, &VAR_17);
        else
            FUNC_5(&VAR_18, &VAR_17);
        FUNC_1(VAR_5, VAR_19, &VAR_17);
    } else {
        FUNC_3(VAR_4, VAR_0, "Invalid format '%s'\n", VAR_11);
        return FUNC_0(VAR_2);
    }
    return 0;
}
