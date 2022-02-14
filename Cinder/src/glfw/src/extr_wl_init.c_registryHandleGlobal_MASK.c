
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_registry {int dummy; } ;
struct TYPE_3__ {int wl_compositor_version; void* pointerConstraints; void* relativePointerManager; void* seat; void* shell; void* shm; void* compositor; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int VAR_2 ;
 void* FUNC_3 (struct wl_registry*,int ,int *,int) ;
 int FUNC_4 (void*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(void* VAR_8,
                                 struct wl_registry* VAR_9,
                                 uint32_t VAR_10,
                                 const char* VAR_11,
                                 uint32_t VAR_12)
{
    if (FUNC_2(VAR_11, "wl_compositor") == 0)
    {
        VAR_0.wl.wl_compositor_version = FUNC_1(3, VAR_12);
        VAR_0.wl.compositor =
            FUNC_3(VAR_9, VAR_10, &VAR_2,
                             VAR_0.wl.wl_compositor_version);
    }
    else if (FUNC_2(VAR_11, "wl_shm") == 0)
    {
        VAR_0.wl.shm =
            FUNC_3(VAR_9, VAR_10, &VAR_5, 1);
    }
    else if (FUNC_2(VAR_11, "wl_shell") == 0)
    {
        VAR_0.wl.shell =
            FUNC_3(VAR_9, VAR_10, &VAR_4, 1);
    }
    else if (FUNC_2(VAR_11, "wl_output") == 0)
    {
        FUNC_0(VAR_10, VAR_12);
    }
    else if (FUNC_2(VAR_11, "wl_seat") == 0)
    {
        if (!VAR_0.wl.seat)
        {
            VAR_0.wl.seat =
                FUNC_3(VAR_9, VAR_10, &VAR_3, 1);
            FUNC_4(VAR_0.wl.seat, &VAR_1, ((void*)0));
        }
    }
    else if (FUNC_2(VAR_11, "zwp_relative_pointer_manager_v1") == 0)
    {
        VAR_0.wl.relativePointerManager =
            FUNC_3(VAR_9, VAR_10,
                             &VAR_7,
                             1);
    }
    else if (FUNC_2(VAR_11, "zwp_pointer_constraints_v1") == 0)
    {
        VAR_0.wl.pointerConstraints =
            FUNC_3(VAR_9, VAR_10,
                             &VAR_6,
                             1);
    }
}
