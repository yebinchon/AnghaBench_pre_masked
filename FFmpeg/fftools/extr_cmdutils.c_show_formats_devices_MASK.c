
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* name; char* long_name; int priv_class; } ;
struct TYPE_5__ {char* name; char* long_name; int priv_class; } ;
typedef TYPE_1__ AVOutputFormat ;
typedef TYPE_2__ AVInputFormat ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (void**) ;
 TYPE_1__* FUNC_1 (void**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, const char *VAR_3, const char *VAR_4, int VAR_5, int VAR_6)
{
    void *VAR_7 = ((void*)0);
    const AVInputFormat *VAR_8 = ((void*)0);
    void *VAR_9 = ((void*)0);
    const AVOutputFormat *VAR_10 = ((void*)0);
    const char *VAR_11;
    int VAR_12;

    FUNC_3("%s\n"
           " D. = Demuxing supported\n"
           " .E = Muxing supported\n"
           " --\n", VAR_5 ? "Devices:" : "File formats:");
    VAR_11 = "000";
    for (;;) {
        int VAR_13 = 0;
        int VAR_14 = 0;
        const char *VAR_15 = ((void*)0);
        const char *VAR_16 = ((void*)0);

        if (VAR_6 !=VAR_0) {
            VAR_9 = ((void*)0);
            while ((VAR_10 = FUNC_1(&VAR_9))) {
                VAR_12 = FUNC_2(VAR_10->priv_class);
                if (!VAR_12 && VAR_5)
                    continue;
                if ((!VAR_15 || FUNC_4(VAR_10->name, VAR_15) < 0) &&
                    FUNC_4(VAR_10->name, VAR_11) > 0) {
                    VAR_15 = VAR_10->name;
                    VAR_16 = VAR_10->long_name;
                    VAR_14 = 1;
                }
            }
        }
        if (VAR_6 != VAR_1) {
            VAR_7 = ((void*)0);
            while ((VAR_8 = FUNC_0(&VAR_7))) {
                VAR_12 = FUNC_2(VAR_8->priv_class);
                if (!VAR_12 && VAR_5)
                    continue;
                if ((!VAR_15 || FUNC_4(VAR_8->name, VAR_15) < 0) &&
                    FUNC_4(VAR_8->name, VAR_11) > 0) {
                    VAR_15 = VAR_8->name;
                    VAR_16 = VAR_8->long_name;
                    VAR_14 = 0;
                }
                if (VAR_15 && FUNC_4(VAR_8->name, VAR_15) == 0)
                    VAR_13 = 1;
            }
        }
        if (!VAR_15)
            break;
        VAR_11 = VAR_15;

        FUNC_3(" %s%s %-15s %s\n",
               VAR_13 ? "D" : " ",
               VAR_14 ? "E" : " ",
               VAR_15,
            VAR_16 ? VAR_16:" ");
    }
    return 0;
}
