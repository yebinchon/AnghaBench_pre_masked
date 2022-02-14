
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ api; int major; int minor; scalar_t__ profile; scalar_t__ robustness; scalar_t__ release; scalar_t__ forward; } ;
typedef TYPE_1__ _GLFWctxconfig ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;

GLboolean FUNC_1(const _GLFWctxconfig* VAR_12)
{
    if (VAR_12->api != VAR_4 &&
        VAR_12->api != VAR_7)
    {
        FUNC_0(VAR_0, "Invalid client API");
        return VAR_10;
    }

    if (VAR_12->api == VAR_4)
    {
        if ((VAR_12->major < 1 || VAR_12->minor < 0) ||
            (VAR_12->major == 1 && VAR_12->minor > 5) ||
            (VAR_12->major == 2 && VAR_12->minor > 1) ||
            (VAR_12->major == 3 && VAR_12->minor > 3))
        {






            FUNC_0(VAR_1,
                            "Invalid OpenGL version %i.%i",
                            VAR_12->major, VAR_12->minor);
            return VAR_10;
        }

        if (VAR_12->profile)
        {
            if (VAR_12->profile != VAR_6 &&
                VAR_12->profile != VAR_5)
            {
                FUNC_0(VAR_0,
                                "Invalid OpenGL profile");
                return VAR_10;
            }

            if (VAR_12->major < 3 ||
                (VAR_12->major == 3 && VAR_12->minor < 2))
            {



                FUNC_0(VAR_1,
                                "Context profiles are only defined for OpenGL version 3.2 and above");
                return VAR_10;
            }
        }

        if (VAR_12->forward && VAR_12->major < 3)
        {

            FUNC_0(VAR_1,
                            "Forward-compatibility is only defined for OpenGL version 3.0 and above");
            return VAR_10;
        }
    }
    else if (VAR_12->api == VAR_7)
    {
        if (VAR_12->major < 1 || VAR_12->minor < 0 ||
            (VAR_12->major == 1 && VAR_12->minor > 1) ||
            (VAR_12->major == 2 && VAR_12->minor > 0))
        {





            FUNC_0(VAR_1,
                            "Invalid OpenGL ES version %i.%i",
                            VAR_12->major, VAR_12->minor);
            return VAR_10;
        }
    }

    if (VAR_12->robustness)
    {
        if (VAR_12->robustness != VAR_3 &&
            VAR_12->robustness != VAR_2)
        {
            FUNC_0(VAR_0,
                            "Invalid context robustness mode");
            return VAR_10;
        }
    }

    if (VAR_12->release)
    {
        if (VAR_12->release != VAR_9 &&
            VAR_12->release != VAR_8)
        {
            FUNC_0(VAR_0,
                            "Invalid context release behavior");
            return VAR_10;
        }
    }

    return VAR_11;
}
