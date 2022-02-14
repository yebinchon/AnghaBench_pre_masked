
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {char* d_name; } ;
typedef int regmatch_t ;
typedef int path ;
typedef int _GLFWjoystickLinux ;
struct TYPE_3__ {int inotify; int watch; int js; int regex; } ;
struct TYPE_4__ {TYPE_1__ linux_js; } ;
typedef int GLFWbool ;
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
 int VAR_9 ;
 int FUNC_2 (int,char const*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (int ,int,int,int ) ;
 struct dirent* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*,int ) ;
 scalar_t__ FUNC_9 (int *,char*,int,int *,int ) ;
 int FUNC_10 (char*,int,char*,char const*,char*) ;
 int FUNC_11 (int ) ;

GLFWbool FUNC_12(void)
{

    DIR* VAR_10;
    int VAR_11 = 0;
    const char* VAR_12 = "/dev/input";

    VAR_7.linux_js.inotify = FUNC_3(VAR_6 | VAR_4);
    if (VAR_7.linux_js.inotify == -1)
    {
        FUNC_0(VAR_1,
                        "Linux: Failed to initialize inotify: %s",
                        FUNC_11(VAR_9));
        return VAR_0;
    }




    VAR_7.linux_js.watch = FUNC_2(VAR_7.linux_js.inotify,
                                             VAR_12,
                                             VAR_5 | VAR_3);
    if (VAR_7.linux_js.watch == -1)
    {
        FUNC_0(VAR_1,
                        "Linux: Failed to watch for joystick connections in %s: %s",
                        VAR_12,
                        FUNC_11(VAR_9));

    }

    if (FUNC_8(&VAR_7.linux_js.regex, "^js[0-9]\\+$", 0) != 0)
    {
        FUNC_0(VAR_1, "Linux: Failed to compile regex");
        return VAR_0;
    }

    VAR_10 = FUNC_5(VAR_12);
    if (VAR_10)
    {
        struct dirent* VAR_13;

        while ((VAR_13 = FUNC_7(VAR_10)))
        {
            char VAR_14[20];
            regmatch_t VAR_15;

            if (FUNC_9(&VAR_7.linux_js.regex, VAR_13->d_name, 1, &VAR_15, 0) != 0)
                continue;

            FUNC_10(VAR_14, sizeof(VAR_14), "%s/%s", VAR_12, VAR_13->d_name);
            if (FUNC_4(VAR_14))
                VAR_11++;
        }

        FUNC_1(VAR_10);
    }
    else
    {
        FUNC_0(VAR_1,
                        "Linux: Failed to open joystick device directory %s: %s",
                        VAR_12,
                        FUNC_11(VAR_9));

    }

    FUNC_6(VAR_7.linux_js.js, VAR_11, sizeof(_GLFWjoystickLinux), VAR_8);


    return VAR_2;
}
