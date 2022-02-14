
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_5__ {TYPE_1__* mo; } ;
struct TYPE_4__ {scalar_t__ x; scalar_t__ y; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_2__* VAR_7 ;

void FUNC_2(void)
{

    if (VAR_0.x != VAR_7->mo->x || VAR_0.y != VAR_7->mo->y)
    {
 VAR_3 = FUNC_0(FUNC_1(VAR_7->mo->x)) - VAR_2/2;
 VAR_5 = FUNC_0(FUNC_1(VAR_7->mo->y)) - VAR_1/2;
 VAR_4 = VAR_3 + VAR_2;
 VAR_6 = VAR_5 + VAR_1;
 VAR_0.x = VAR_7->mo->x;
 VAR_0.y = VAR_7->mo->y;






    }

}
