
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; scalar_t__ start_ts; scalar_t__ end_ts; int nb_commands; int commands; } ;
typedef TYPE_1__ Interval ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const**,int ) ;
 int FUNC_3 (void*,int ,char*,...) ;
 int FUNC_4 (scalar_t__*,char*,int) ;
 char* FUNC_5 (char*,char*,char**) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int *,int *,int,char const**,void*) ;
 int FUNC_8 (char const*,int ) ;

__attribute__((used)) static int FUNC_9(Interval *VAR_5, int VAR_6,
                          const char **VAR_7, void *VAR_8)
{
    char *VAR_9;
    int VAR_10;

    *VAR_7 += FUNC_8(*VAR_7, VAR_4);
    if (!**VAR_7)
        return 0;


    FUNC_6(VAR_5, 0, sizeof(Interval));
    VAR_5->index = VAR_6;




    VAR_9 = FUNC_2(VAR_7, VAR_1);
    if (VAR_9 && VAR_9[0]) {
        char *VAR_11, *VAR_12;

        VAR_11 = FUNC_5(VAR_9, "-", &VAR_12);
        if (!VAR_11) {
            VAR_10 = FUNC_0(VAR_2);
            FUNC_3(VAR_8, VAR_0,
                   "Invalid interval specification '%s' in interval #%d\n",
                   VAR_9, VAR_6);
            goto end;
        }
        if ((VAR_10 = FUNC_4(&VAR_5->start_ts, VAR_11, 1)) < 0) {
            FUNC_3(VAR_8, VAR_0,
                   "Invalid start time specification '%s' in interval #%d\n",
                   VAR_11, VAR_6);
            goto end;
        }

        if (VAR_12) {
            if ((VAR_10 = FUNC_4(&VAR_5->end_ts, VAR_12, 1)) < 0) {
                FUNC_3(VAR_8, VAR_0,
                       "Invalid end time specification '%s' in interval #%d\n",
                       VAR_12, VAR_6);
                goto end;
            }
        } else {
            VAR_5->end_ts = VAR_3;
        }
        if (VAR_5->end_ts < VAR_5->start_ts) {
            FUNC_3(VAR_8, VAR_0,
                   "Invalid end time '%s' in interval #%d: "
                   "cannot be lesser than start time '%s'\n",
                   VAR_12, VAR_6, VAR_11);
            VAR_10 = FUNC_0(VAR_2);
            goto end;
        }
    } else {
        FUNC_3(VAR_8, VAR_0,
               "No interval specified for interval #%d\n", VAR_6);
        VAR_10 = FUNC_0(VAR_2);
        goto end;
    }


    VAR_10 = FUNC_7(&VAR_5->commands, &VAR_5->nb_commands,
                         VAR_6, VAR_7, VAR_8);

end:
    FUNC_1(VAR_9);
    return VAR_10;
}
