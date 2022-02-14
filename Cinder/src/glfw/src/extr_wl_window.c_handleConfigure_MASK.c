
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_shell_surface {int dummy; } ;
typedef float int32_t ;
struct TYPE_5__ {scalar_t__ numer; scalar_t__ denom; scalar_t__ minwidth; scalar_t__ maxwidth; scalar_t__ minheight; scalar_t__ maxheight; int monitor; } ;
typedef TYPE_1__ _GLFWwindow ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,float,float) ;
 int FUNC_2 (TYPE_1__*,float,float) ;

__attribute__((used)) static void FUNC_3(void* VAR_1,
                            struct wl_shell_surface* VAR_2,
                            uint32_t VAR_3,
                            int32_t VAR_4,
                            int32_t VAR_5)
{
    _GLFWwindow* VAR_6 = VAR_1;
    float VAR_7;
    float VAR_8;

    if (!VAR_6->monitor)
    {
        if (VAR_6->numer != VAR_0 && VAR_6->denom != VAR_0)
        {
            VAR_7 = (float)VAR_4 / (float)VAR_5;
            VAR_8 = (float)VAR_6->numer / (float)VAR_6->denom;
            if (VAR_7 < VAR_8)
                VAR_5 = VAR_4 / VAR_8;
            else if (VAR_7 > VAR_8)
                VAR_4 = VAR_5 * VAR_8;
        }

        if (VAR_6->minwidth != VAR_0 && VAR_4 < VAR_6->minwidth)
            VAR_4 = VAR_6->minwidth;
        else if (VAR_6->maxwidth != VAR_0 && VAR_4 > VAR_6->maxwidth)
            VAR_4 = VAR_6->maxwidth;

        if (VAR_6->minheight != VAR_0 && VAR_5 < VAR_6->minheight)
            VAR_5 = VAR_6->minheight;
        else if (VAR_6->maxheight != VAR_0 && VAR_5 > VAR_6->maxheight)
            VAR_5 = VAR_6->maxheight;
    }

    FUNC_1(VAR_6, VAR_4, VAR_5);
    FUNC_2(VAR_6, VAR_4, VAR_5);
    FUNC_0(VAR_6);
}
