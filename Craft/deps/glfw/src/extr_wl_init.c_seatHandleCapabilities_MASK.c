
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_seat {int dummy; } ;
typedef enum wl_seat_capability { ____Placeholder_wl_seat_capability } wl_seat_capability ;
struct TYPE_3__ {int * keyboard; int * pointer; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct wl_seat*) ;
 int * FUNC_5 (struct wl_seat*) ;

__attribute__((used)) static void FUNC_6(void* VAR_5,
                                   struct wl_seat* VAR_6,
                                   enum wl_seat_capability VAR_7)
{
    if ((VAR_7 & VAR_1) && !VAR_2.wl.pointer)
    {
        VAR_2.wl.pointer = FUNC_5(VAR_6);
        FUNC_2(VAR_2.wl.pointer, &VAR_4, ((void*)0));
    }
    else if (!(VAR_7 & VAR_1) && VAR_2.wl.pointer)
    {
        FUNC_3(VAR_2.wl.pointer);
        VAR_2.wl.pointer = ((void*)0);
    }

    if ((VAR_7 & VAR_0) && !VAR_2.wl.keyboard)
    {
        VAR_2.wl.keyboard = FUNC_4(VAR_6);
        FUNC_0(VAR_2.wl.keyboard, &VAR_3, ((void*)0));
    }
    else if (!(VAR_7 & VAR_0) && VAR_2.wl.keyboard)
    {
        FUNC_1(VAR_2.wl.keyboard);
        VAR_2.wl.keyboard = ((void*)0);
    }
}
