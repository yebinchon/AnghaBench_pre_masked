
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int name ;
struct TYPE_5__ {int fd; int axisCount; int buttonCount; void* buttons; void* axes; void* path; void* name; int present; } ;
typedef TYPE_2__ _GLFWjoystickLinux ;
struct TYPE_4__ {TYPE_2__* js; } ;
struct TYPE_6__ {TYPE_1__ linux_js; } ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 int FUNC_1 (int,int ) ;
 void* FUNC_2 (char,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ,...) ;
 int FUNC_5 (char const*,int) ;
 scalar_t__ FUNC_6 (void*,char const*) ;
 void* FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static GLFWbool FUNC_9(const char* VAR_11)
{
    char VAR_12, VAR_13;
    char VAR_14[256] = "";
    int VAR_15, VAR_16, VAR_17;
    _GLFWjoystickLinux* VAR_18;

    for (VAR_15 = VAR_2; VAR_15 <= VAR_3; VAR_15++)
    {
        if (!VAR_10.linux_js.js[VAR_15].present)
            continue;

        if (FUNC_6(VAR_10.linux_js.js[VAR_15].path, VAR_11) == 0)
            return VAR_1;
    }

    for (VAR_15 = VAR_2; VAR_15 <= VAR_3; VAR_15++)
    {
        if (!VAR_10.linux_js.js[VAR_15].present)
            break;
    }

    if (VAR_15 > VAR_3)
        return VAR_1;

    VAR_16 = FUNC_5(VAR_11, VAR_9 | VAR_8);
    if (VAR_16 == -1)
        return VAR_1;


    FUNC_4(VAR_16, VAR_7, &VAR_17);
    if (VAR_17 < 0x010000)
    {

        FUNC_3(VAR_16);
        return VAR_1;
    }

    if (FUNC_4(VAR_16, FUNC_0(sizeof(VAR_14)), VAR_14) < 0)
        FUNC_8(VAR_14, "Unknown", sizeof(VAR_14));

    VAR_18 = VAR_10.linux_js.js + VAR_15;
    VAR_18->present = VAR_4;
    VAR_18->name = FUNC_7(VAR_14);
    VAR_18->path = FUNC_7(VAR_11);
    VAR_18->fd = VAR_16;

    FUNC_4(VAR_16, VAR_5, &VAR_12);
    VAR_18->axisCount = (int) VAR_12;
    VAR_18->axes = FUNC_2(VAR_12, sizeof(float));

    FUNC_4(VAR_16, VAR_6, &VAR_13);
    VAR_18->buttonCount = (int) VAR_13;
    VAR_18->buttons = FUNC_2(VAR_13, 1);

    FUNC_1(VAR_15, VAR_0);
    return VAR_4;
}
