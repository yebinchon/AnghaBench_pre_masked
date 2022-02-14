
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ context; int allocated; } ;
struct TYPE_4__ {TYPE_1__ win32_tls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(void)
{
    VAR_4.win32_tls.context = FUNC_0();
    if (VAR_4.win32_tls.context == VAR_3)
    {
        FUNC_1(VAR_0,
                        "Win32: Failed to allocate TLS index");
        return VAR_1;
    }

    VAR_4.win32_tls.allocated = VAR_2;
    return VAR_2;
}
