
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct js_event {size_t number; scalar_t__ value; int type; } ;
typedef int e ;
struct TYPE_8__ {float* axes; float* buttons; float* name; float* path; int present; int fd; } ;
typedef TYPE_2__ _GLFWjoystickLinux ;
struct TYPE_7__ {int js; } ;
struct TYPE_9__ {TYPE_1__ linux_js; } ;
typedef int GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (float*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int ,struct js_event*,int) ;

__attribute__((used)) static GLFWbool FUNC_5(_GLFWjoystickLinux* VAR_10)
{

    FUNC_1();

    if (!VAR_10->present)
        return VAR_2;


    for (;;)
    {
        struct js_event VAR_11;

        VAR_9 = 0;
        if (FUNC_4(VAR_10->fd, &VAR_11, sizeof(VAR_11)) < 0)
        {

            if (VAR_9 == VAR_0)
            {
                FUNC_2(VAR_10->axes);
                FUNC_2(VAR_10->buttons);
                FUNC_2(VAR_10->name);
                FUNC_2(VAR_10->path);

                FUNC_3(VAR_10, 0, sizeof(_GLFWjoystickLinux));

                FUNC_0(VAR_10 - VAR_8.linux_js.js,
                                         VAR_1);
            }

            break;
        }


        VAR_11.type &= ~VAR_7;

        if (VAR_11.type == VAR_5)
            VAR_10->axes[VAR_11.number] = (float) VAR_11.value / 32767.0f;
        else if (VAR_11.type == VAR_6)
            VAR_10->buttons[VAR_11.number] = VAR_11.value ? VAR_3 : VAR_4;
    }

    return VAR_10->present;
}
