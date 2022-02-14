
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int angle; } ;
typedef TYPE_1__ mobj_t ;
typedef int angle_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1 (mobj_t* VAR_3)
{
    angle_t VAR_4;


    VAR_4 = VAR_3->angle;
    VAR_1 = FUNC_0 (VAR_3, VAR_4, 16*64*VAR_0);

    if (!VAR_2)
    {
 VAR_4 += 1<<26;
 VAR_1 = FUNC_0 (VAR_3, VAR_4, 16*64*VAR_0);
 if (!VAR_2)
 {
     VAR_4 -= 2<<26;
     VAR_1 = FUNC_0 (VAR_3, VAR_4, 16*64*VAR_0);
 }
    }
}
