
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int major; } ;
struct TYPE_5__ {scalar_t__ (* GetString ) (int ) ;scalar_t__ (* GetStringi ) (int ,int) ;int (* GetIntegerv ) (int ,int*) ;TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int ,int*) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(const char* VAR_7)
{
    _GLFWwindow* VAR_8;

    FUNC_0(VAR_4);

    VAR_8 = FUNC_3();
    if (!VAR_8)
    {
        FUNC_1(VAR_1, ((void*)0));
        return VAR_4;
    }

    if (*VAR_7 == '\0')
    {
        FUNC_1(VAR_0, ((void*)0));
        return VAR_4;
    }
    {


        const char* VAR_9 = (const char*) VAR_8->GetString(VAR_3);
        if (!VAR_9)
        {
            FUNC_1(VAR_2,
                            "Failed to retrieve extension string");
            return VAR_4;
        }

        if (FUNC_4(VAR_7, VAR_9))
            return VAR_6;
    }


    return FUNC_2(VAR_7);
}
