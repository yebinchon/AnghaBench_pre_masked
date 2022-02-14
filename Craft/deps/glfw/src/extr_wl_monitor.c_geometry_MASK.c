
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_output {int dummy; } ;
struct TYPE_2__ {void* y; void* x; } ;
struct _GLFWmonitor {void* heightMM; void* widthMM; TYPE_1__ wl; } ;
typedef void* int32_t ;



__attribute__((used)) static void FUNC_0(void* VAR_0,
                     struct wl_output* VAR_1,
                     int32_t VAR_2,
                     int32_t VAR_3,
                     int32_t VAR_4,
                     int32_t VAR_5,
                     int32_t VAR_6,
                     const char* VAR_7,
                     const char* VAR_8,
                     int32_t VAR_9)
{
    struct _GLFWmonitor *VAR_10 = VAR_0;

    VAR_10->wl.x = VAR_2;
    VAR_10->wl.y = VAR_3;
    VAR_10->widthMM = VAR_4;
    VAR_10->heightMM = VAR_5;
}
