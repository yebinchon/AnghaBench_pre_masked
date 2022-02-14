
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef int _GLFWwndconfig ;
struct TYPE_20__ {scalar_t__ monitor; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_21__ {scalar_t__ client; scalar_t__ source; } ;
typedef TYPE_3__ _GLFWctxconfig ;
typedef int Visual ;
struct TYPE_19__ {int display; int screen; } ;
struct TYPE_18__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 TYPE_17__ VAR_4 ;
 int FUNC_3 (TYPE_3__ const*,int const*,int **,int*) ;
 int FUNC_4 (TYPE_3__ const*,int const*,int **,int*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__ const*,int const*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__ const*,int const*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int const*,int *,int) ;
 int FUNC_13 (TYPE_2__*) ;

int FUNC_14(_GLFWwindow* VAR_5,
                              const _GLFWwndconfig* VAR_6,
                              const _GLFWctxconfig* VAR_7,
                              const _GLFWfbconfig* VAR_8)
{
    Visual* VAR_9;
    int VAR_10;

    if (VAR_7->client == VAR_2)
    {
        VAR_9 = FUNC_1(VAR_4.x11.display, VAR_4.x11.screen);
        VAR_10 = FUNC_0(VAR_4.x11.display, VAR_4.x11.screen);
    }
    else
    {
        if (VAR_7->source == VAR_1)
        {
            if (!FUNC_8())
                return VAR_0;
            if (!FUNC_4(VAR_7, VAR_8, &VAR_9, &VAR_10))
                return VAR_0;
        }
        else
        {
            if (!FUNC_7())
                return VAR_0;
            if (!FUNC_3(VAR_7, VAR_8, &VAR_9, &VAR_10))
                return VAR_0;
        }
    }

    if (!FUNC_12(VAR_5, VAR_6, VAR_9, VAR_10))
        return VAR_0;

    if (VAR_7->client != VAR_2)
    {
        if (VAR_7->source == VAR_1)
        {
            if (!FUNC_6(VAR_5, VAR_7, VAR_8))
                return VAR_0;
        }
        else
        {
            if (!FUNC_5(VAR_5, VAR_7, VAR_8))
                return VAR_0;
        }
    }

    if (VAR_5->monitor)
    {
        FUNC_9(VAR_5);
        FUNC_13(VAR_5);
        if (!FUNC_10(VAR_5))
            return VAR_0;

        FUNC_11(VAR_5);
    }

    FUNC_2(VAR_4.x11.display);
    return VAR_3;
}
