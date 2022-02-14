
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context; } ;
struct TYPE_4__ {TYPE_1__ posix_tls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

int FUNC_2(void)
{
    if (FUNC_1(&VAR_3.posix_tls.context, ((void*)0)) != 0)
    {
        FUNC_0(VAR_0,
                        "POSIX: Failed to create context TLS");
        return VAR_1;
    }

    return VAR_2;
}
