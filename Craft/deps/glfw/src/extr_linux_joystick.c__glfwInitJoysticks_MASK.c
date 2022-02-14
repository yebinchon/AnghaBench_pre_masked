
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {char* d_name; } ;
typedef int regmatch_t ;
typedef int path ;
struct TYPE_3__ {int inotify; int watch; int regex; } ;
struct TYPE_4__ {TYPE_1__ linux_js; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (int,char const*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char const*) ;
 struct dirent* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char*,int ) ;
 scalar_t__ FUNC_8 (int *,char*,int,int *,int ) ;
 int FUNC_9 (char*,int,char*,char const*,char*) ;
 int FUNC_10 (int ) ;

int FUNC_11(void)
{

    const char* VAR_9 = "/dev/input";
    DIR* VAR_10;

    VAR_7.linux_js.inotify = FUNC_3(VAR_6 | VAR_4);
    if (VAR_7.linux_js.inotify == -1)
    {
        FUNC_0(VAR_0,
                        "Linux: Failed to initialize inotify: %s",
                        FUNC_10(VAR_8));
        return VAR_1;
    }




    VAR_7.linux_js.watch = FUNC_2(VAR_7.linux_js.inotify,
                                             VAR_9,
                                             VAR_5 | VAR_3);
    if (VAR_7.linux_js.watch == -1)
    {
        FUNC_0(VAR_0,
                        "Linux: Failed to watch for joystick connections in %s: %s",
                        VAR_9,
                        FUNC_10(VAR_8));

    }

    if (FUNC_7(&VAR_7.linux_js.regex, "^js[0-9]\\+$", 0) != 0)
    {
        FUNC_0(VAR_0, "Linux: Failed to compile regex");
        return VAR_1;
    }

    VAR_10 = FUNC_5(VAR_9);
    if (VAR_10)
    {
        struct dirent* VAR_11;

        while ((VAR_11 = FUNC_6(VAR_10)))
        {
            char VAR_12[20];
            regmatch_t VAR_13;

            if (FUNC_8(&VAR_7.linux_js.regex, VAR_11->d_name, 1, &VAR_13, 0) != 0)
                continue;

            FUNC_9(VAR_12, sizeof(VAR_12), "%s/%s", VAR_9, VAR_11->d_name);
            FUNC_4(VAR_12);
        }

        FUNC_1(VAR_10);
    }
    else
    {
        FUNC_0(VAR_0,
                        "Linux: Failed to open joystick device directory %s: %s",
                        VAR_9,
                        FUNC_10(VAR_8));

    }



    return VAR_2;
}
