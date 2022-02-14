
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocated; int context; } ;
struct TYPE_4__ {TYPE_1__ posix_tls; } ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

GLFWbool FUNC_2(void)
{
    if (FUNC_1(&VAR_3.posix_tls.context, ((void*)0)) != 0)
    {
        FUNC_0(VAR_1,
                        "POSIX: Failed to create context TLS");
        return VAR_0;
    }

    VAR_3.posix_tls.allocated = VAR_2;
    return VAR_2;
}
