
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* open ) (int *,int *) ;} ;
struct TYPE_3__ {int (* init ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int ,int ,int) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(void)
{
    if (FUNC_0()) {
        goto error;
    }

    VAR_7 = FUNC_2(VAR_0, VAR_3, VAR_2, VAR_1, 2);
    if (VAR_7 == ((void*)0)) {
        return -2;
    }

    VAR_8->init(&VAR_9);
    VAR_4->open(&VAR_5, VAR_7);

    VAR_6 = 1;
    return 0;
error:
    FUNC_1();
    return -1;
}
