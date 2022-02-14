
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pollfd {int member_0; int member_2; int member_1; } ;
struct TYPE_4__ {int interrupt_callback; } ;
typedef TYPE_1__ URLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pollfd*,int,int,int *) ;
 scalar_t__ FUNC_4 (int,int) ;

int FUNC_5(int VAR_2, int VAR_3, URLContext *VAR_4)
{
    int VAR_5;
    struct pollfd VAR_6 = { VAR_2, VAR_1, 0 };

    VAR_5 = FUNC_3(&VAR_6, 1, VAR_3, &VAR_4->interrupt_callback);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_5 = FUNC_0(VAR_2, ((void*)0), ((void*)0));
    if (VAR_5 < 0)
        return FUNC_2();
    if (FUNC_4(VAR_5, 1) < 0)
        FUNC_1(VAR_4, VAR_0, "ff_socket_nonblock failed\n");

    return VAR_5;
}
