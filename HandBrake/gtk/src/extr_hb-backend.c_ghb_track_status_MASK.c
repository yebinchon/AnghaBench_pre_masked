
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hb_state_t ;
struct TYPE_2__ {int live; int queue; int scan; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2()
{
    hb_state_t VAR_4;

    if (VAR_2 == ((void*)0)) return;
    FUNC_0( VAR_2, &VAR_4 );
    FUNC_1(&VAR_4, &VAR_3.scan);
    FUNC_0( VAR_1, &VAR_4 );
    FUNC_1(&VAR_4, &VAR_3.queue);
    FUNC_0( VAR_0, &VAR_4 );
    FUNC_1(&VAR_4, &VAR_3.live);
}
