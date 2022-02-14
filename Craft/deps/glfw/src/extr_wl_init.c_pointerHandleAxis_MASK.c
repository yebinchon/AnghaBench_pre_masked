
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
typedef int _GLFWwindow ;
struct TYPE_3__ {int * pointerFocus; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;




 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,double,double) ;
 double FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void* VAR_1,
                              struct wl_pointer* VAR_2,
                              uint32_t VAR_3,
                              uint32_t VAR_4,
                              wl_fixed_t VAR_5)
{
    _GLFWwindow* VAR_6 = VAR_0.wl.pointerFocus;
    double VAR_7;
    double VAR_8, VAR_9;

    if (!VAR_6)
        return;




    VAR_7 = 1.0/10.0;

    switch (VAR_4)
    {
        case 129:
            VAR_8 = FUNC_1(VAR_5) * VAR_7;
            VAR_9 = 0.0;
            break;
        case 128:
            VAR_8 = 0.0;
            VAR_9 = FUNC_1(VAR_5) * VAR_7;
            break;
        default:
            break;
    }

    FUNC_0(VAR_6, VAR_8, VAR_9);
}
