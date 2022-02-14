
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int name ;
struct TYPE_5__ {TYPE_1__* js; } ;
struct TYPE_6__ {TYPE_2__ linux_js; } ;
struct TYPE_4__ {int fd; int axisCount; int buttonCount; scalar_t__ present; void* buttons; void* axes; void* path; void* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 void* FUNC_1 (char,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,...) ;
 int FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (void*,char const*) ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static void FUNC_8(const char* VAR_9)
{

    char VAR_10, VAR_11;
    char VAR_12[256];
    int VAR_13, VAR_14, VAR_15;

    for (VAR_13 = VAR_0; VAR_13 <= VAR_1; VAR_13++)
    {
        if (!VAR_8.linux_js.js[VAR_13].present)
            continue;

        if (FUNC_5(VAR_8.linux_js.js[VAR_13].path, VAR_9) == 0)
            return;
    }

    for (VAR_13 = VAR_0; VAR_13 <= VAR_1; VAR_13++)
    {
        if (!VAR_8.linux_js.js[VAR_13].present)
            break;
    }

    if (VAR_13 > VAR_1)
        return;

    VAR_14 = FUNC_4(VAR_9, VAR_7 | VAR_6);
    if (VAR_14 == -1)
        return;

    VAR_8.linux_js.js[VAR_13].fd = VAR_14;


    FUNC_3(VAR_14, VAR_5, &VAR_15);
    if (VAR_15 < 0x010000)
    {

        FUNC_2(VAR_14);
        return;
    }

    if (FUNC_3(VAR_14, FUNC_0(sizeof(VAR_12)), VAR_12) < 0)
        FUNC_7(VAR_12, "Unknown", sizeof(VAR_12));

    VAR_8.linux_js.js[VAR_13].name = FUNC_6(VAR_12);
    VAR_8.linux_js.js[VAR_13].path = FUNC_6(VAR_9);

    FUNC_3(VAR_14, VAR_3, &VAR_10);
    VAR_8.linux_js.js[VAR_13].axisCount = (int) VAR_10;

    FUNC_3(VAR_14, VAR_4, &VAR_11);
    VAR_8.linux_js.js[VAR_13].buttonCount = (int) VAR_11;

    VAR_8.linux_js.js[VAR_13].axes = FUNC_1(VAR_10, sizeof(float));
    VAR_8.linux_js.js[VAR_13].buttons = FUNC_1(VAR_11, 1);

    VAR_8.linux_js.js[VAR_13].present = VAR_2;

}
