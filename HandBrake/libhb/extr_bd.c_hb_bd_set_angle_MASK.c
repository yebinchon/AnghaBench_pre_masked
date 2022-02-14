
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bd; } ;
typedef TYPE_1__ hb_bd_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;

void FUNC_2( hb_bd_t * VAR_0, int VAR_1 )
{

    if ( !FUNC_0( VAR_0->bd, VAR_1) )
    {
        FUNC_1("bd_select_angle failed");
    }
}
