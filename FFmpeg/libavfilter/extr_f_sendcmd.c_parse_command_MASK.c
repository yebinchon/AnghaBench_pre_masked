
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int flag_buf ;
struct TYPE_4__ {int index; int * arg; int * command; int * target; int flags; } ;
typedef TYPE_1__ Command ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (int **) ;
 void* FUNC_2 (char const**,int ) ;
 int FUNC_3 (void*,int ,char*,...) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*,char*,int ) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(Command *VAR_6, int VAR_7, int VAR_8,
                         const char **VAR_9, void *VAR_10)
{
    int VAR_11;

    FUNC_5(VAR_6, 0, sizeof(Command));
    VAR_6->index = VAR_7;


    *VAR_9 += FUNC_9(*VAR_9, VAR_5);


    if (**VAR_9 == '[') {
        (*VAR_9)++;

        while (**VAR_9) {
            int VAR_12 = FUNC_6(*VAR_9, "|+]");

            if (!FUNC_8(*VAR_9, "enter", FUNC_7("enter"))) VAR_6->flags |= VAR_2;
            else if (!FUNC_8(*VAR_9, "leave", FUNC_7("leave"))) VAR_6->flags |= VAR_3;
            else {
                char VAR_13[64];
                FUNC_4(VAR_13, *VAR_9, sizeof(VAR_13));
                FUNC_3(VAR_10, VAR_0,
                       "Unknown flag '%s' in interval #%d, command #%d\n",
                       VAR_13, VAR_8, VAR_7);
                return FUNC_0(VAR_4);
            }
            *VAR_9 += VAR_12;
            if (**VAR_9 == ']')
                break;
            if (!FUNC_9(*VAR_9, "+|")) {
                FUNC_3(VAR_10, VAR_0,
                       "Invalid flags char '%c' in interval #%d, command #%d\n",
                       **VAR_9, VAR_8, VAR_7);
                return FUNC_0(VAR_4);
            }
            if (**VAR_9)
                (*VAR_9)++;
        }

        if (**VAR_9 != ']') {
            FUNC_3(VAR_10, VAR_0,
                   "Missing flag terminator or extraneous data found at the end of flags "
                   "in interval #%d, command #%d\n", VAR_8, VAR_7);
            return FUNC_0(VAR_4);
        }
        (*VAR_9)++;
    } else {
        VAR_6->flags = VAR_2;
    }

    *VAR_9 += FUNC_9(*VAR_9, VAR_5);
    VAR_6->target = FUNC_2(VAR_9, VAR_1);
    if (!VAR_6->target || !VAR_6->target[0]) {
        FUNC_3(VAR_10, VAR_0,
               "No target specified in interval #%d, command #%d\n",
               VAR_8, VAR_7);
        VAR_11 = FUNC_0(VAR_4);
        goto fail;
    }

    *VAR_9 += FUNC_9(*VAR_9, VAR_5);
    VAR_6->command = FUNC_2(VAR_9, VAR_1);
    if (!VAR_6->command || !VAR_6->command[0]) {
        FUNC_3(VAR_10, VAR_0,
               "No command specified in interval #%d, command #%d\n",
               VAR_8, VAR_7);
        VAR_11 = FUNC_0(VAR_4);
        goto fail;
    }

    *VAR_9 += FUNC_9(*VAR_9, VAR_5);
    VAR_6->arg = FUNC_2(VAR_9, VAR_1);

    return 1;

fail:
    FUNC_1(&VAR_6->target);
    FUNC_1(&VAR_6->command);
    FUNC_1(&VAR_6->arg);
    return VAR_11;
}
