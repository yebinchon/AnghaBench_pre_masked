
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ source; scalar_t__ client; int major; int minor; int profile; int robustness; int release; scalar_t__ forward; } ;
typedef TYPE_1__ _GLFWctxconfig ;
typedef int GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*,...) ;

GLFWbool FUNC_1(const _GLFWctxconfig* VAR_15)
{
    if (VAR_15->source != VAR_5 &&
        VAR_15->source != VAR_0)
    {
        FUNC_0(VAR_2,
                        "Invalid context creation API %i",
                        VAR_15->source);
        return VAR_1;
    }

    if (VAR_15->client != VAR_6 &&
        VAR_15->client != VAR_8 &&
        VAR_15->client != VAR_11)
    {
        FUNC_0(VAR_2,
                        "Invalid client API %i",
                        VAR_15->client);
        return VAR_1;
    }

    if (VAR_15->client == VAR_8)
    {
        if ((VAR_15->major < 1 || VAR_15->minor < 0) ||
            (VAR_15->major == 1 && VAR_15->minor > 5) ||
            (VAR_15->major == 2 && VAR_15->minor > 1) ||
            (VAR_15->major == 3 && VAR_15->minor > 3))
        {






            FUNC_0(VAR_3,
                            "Invalid OpenGL version %i.%i",
                            VAR_15->major, VAR_15->minor);
            return VAR_1;
        }

        if (VAR_15->profile)
        {
            if (VAR_15->profile != VAR_10 &&
                VAR_15->profile != VAR_9)
            {
                FUNC_0(VAR_2,
                                "Invalid OpenGL profile %i",
                                VAR_15->profile);
                return VAR_1;
            }

            if (VAR_15->major <= 2 ||
                (VAR_15->major == 3 && VAR_15->minor < 2))
            {



                FUNC_0(VAR_3,
                                "Context profiles are only defined for OpenGL version 3.2 and above");
                return VAR_1;
            }
        }

        if (VAR_15->forward && VAR_15->major <= 2)
        {

            FUNC_0(VAR_3,
                            "Forward-compatibility is only defined for OpenGL version 3.0 and above");
            return VAR_1;
        }
    }
    else if (VAR_15->client == VAR_11)
    {
        if (VAR_15->major < 1 || VAR_15->minor < 0 ||
            (VAR_15->major == 1 && VAR_15->minor > 1) ||
            (VAR_15->major == 2 && VAR_15->minor > 0))
        {





            FUNC_0(VAR_3,
                            "Invalid OpenGL ES version %i.%i",
                            VAR_15->major, VAR_15->minor);
            return VAR_1;
        }
    }

    if (VAR_15->robustness)
    {
        if (VAR_15->robustness != VAR_7 &&
            VAR_15->robustness != VAR_4)
        {
            FUNC_0(VAR_2,
                            "Invalid context robustness mode %i",
                            VAR_15->robustness);
            return VAR_1;
        }
    }

    if (VAR_15->release)
    {
        if (VAR_15->release != VAR_13 &&
            VAR_15->release != VAR_12)
        {
            FUNC_0(VAR_2,
                            "Invalid context release behavior %i",
                            VAR_15->release);
            return VAR_1;
        }
    }

    return VAR_14;
}
