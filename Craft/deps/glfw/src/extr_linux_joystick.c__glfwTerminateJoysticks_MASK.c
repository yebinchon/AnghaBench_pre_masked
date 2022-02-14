
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ inotify; scalar_t__ watch; int regex; TYPE_1__* js; } ;
struct TYPE_6__ {TYPE_2__ linux_js; } ;
struct TYPE_4__ {scalar_t__ fd; int path; int name; int buttons; int axes; scalar_t__ present; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{

    int VAR_2;

    for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++)
    {
        if (VAR_1.linux_js.js[VAR_2].present)
        {
            FUNC_0(VAR_1.linux_js.js[VAR_2].fd);
            FUNC_1(VAR_1.linux_js.js[VAR_2].axes);
            FUNC_1(VAR_1.linux_js.js[VAR_2].buttons);
            FUNC_1(VAR_1.linux_js.js[VAR_2].name);
            FUNC_1(VAR_1.linux_js.js[VAR_2].path);
        }
    }

    FUNC_3(&VAR_1.linux_js.regex);

    if (VAR_1.linux_js.inotify > 0)
    {
        if (VAR_1.linux_js.watch > 0)
            FUNC_2(VAR_1.linux_js.inotify, VAR_1.linux_js.watch);

        FUNC_0(VAR_1.linux_js.inotify);
    }

}
