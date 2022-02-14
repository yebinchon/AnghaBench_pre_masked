
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_registry {int dummy; } ;
struct TYPE_3__ {void* seat; void* shell; void* shm; void* compositor; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_2 ;
 void* FUNC_2 (struct wl_registry*,int ,int *,int) ;
 int FUNC_3 (void*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(void* VAR_6,
                                 struct wl_registry* VAR_7,
                                 uint32_t VAR_8,
                                 const char* VAR_9,
                                 uint32_t VAR_10)
{
    if (FUNC_1(VAR_9, "wl_compositor") == 0)
    {
        VAR_0.wl.compositor =
            FUNC_2(VAR_7, VAR_8, &VAR_2, 1);
    }
    else if (FUNC_1(VAR_9, "wl_shm") == 0)
    {
        VAR_0.wl.shm =
            FUNC_2(VAR_7, VAR_8, &VAR_5, 1);
    }
    else if (FUNC_1(VAR_9, "wl_shell") == 0)
    {
        VAR_0.wl.shell =
            FUNC_2(VAR_7, VAR_8, &VAR_4, 1);
    }
    else if (FUNC_1(VAR_9, "wl_output") == 0)
    {
        FUNC_0(VAR_8, VAR_10);
    }
    else if (FUNC_1(VAR_9, "wl_seat") == 0)
    {
        if (!VAR_0.wl.seat)
        {
            VAR_0.wl.seat =
                FUNC_2(VAR_7, VAR_8, &VAR_3, 1);
            FUNC_3(VAR_0.wl.seat, &VAR_1, ((void*)0));
        }
    }
}
