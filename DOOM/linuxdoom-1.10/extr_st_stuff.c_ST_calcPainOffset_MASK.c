
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int health; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_0(void)
{
    int VAR_3;
    static int VAR_4;
    static int VAR_5 = -1;

    VAR_3 = VAR_2->health > 100 ? 100 : VAR_2->health;

    if (VAR_3 != VAR_5)
    {
 VAR_4 = VAR_0 * (((100 - VAR_3) * VAR_1) / 101);
 VAR_5 = VAR_3;
    }
    return VAR_4;
}
