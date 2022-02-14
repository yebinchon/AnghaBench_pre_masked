
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int api; int major; int minor; int revision; int robustness; int forward; int debug; int profile; int release; } ;
struct TYPE_7__ {int resizable; int decorated; int floating; TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;
 int VAR_0 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(GLFWwindow* VAR_1, int VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_1;

    FUNC_0(0);

    switch (VAR_2)
    {
        case 134:
            return FUNC_2(VAR_3);
        case 133:
            return FUNC_3(VAR_3);
        case 128:
            return FUNC_4(VAR_3);
        case 129:
            return VAR_3->resizable;
        case 136:
            return VAR_3->decorated;
        case 135:
            return VAR_3->floating;
        case 142:
            return VAR_3->context.api;
        case 138:
            return VAR_3->context.major;
        case 137:
            return VAR_3->context.minor;
        case 140:
            return VAR_3->context.revision;
        case 139:
            return VAR_3->context.robustness;
        case 131:
            return VAR_3->context.forward;
        case 132:
            return VAR_3->context.debug;
        case 130:
            return VAR_3->context.profile;
        case 141:
            return VAR_3->context.release;
    }

    FUNC_1(VAR_0, "Invalid window attribute");
    return 0;
}
