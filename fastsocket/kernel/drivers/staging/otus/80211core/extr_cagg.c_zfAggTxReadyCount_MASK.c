
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct TYPE_4__ {TYPE_1__** aggQPool; } ;
struct TYPE_3__ {size_t ac; scalar_t__ clearFlag; scalar_t__ aggReady; scalar_t__ aggQEnabled; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u16_t FUNC_4(zdev_t* VAR_2, u16_t VAR_3)
{
    u16_t VAR_4;
    u16_t VAR_5 = 0;

    FUNC_2(VAR_2);

    FUNC_0();

    FUNC_1(VAR_2);

    for (VAR_4=0 ; VAR_4<VAR_0; VAR_4++)
    {
        if (VAR_1->aggQPool[VAR_4]->aggQEnabled && (VAR_1->aggQPool[VAR_4]->aggReady || VAR_1->aggQPool[VAR_4]->clearFlag) && VAR_3 == VAR_1->aggQPool[VAR_4]->ac)

            VAR_5++;
    }

    FUNC_3(VAR_2);

    return VAR_5;
}
