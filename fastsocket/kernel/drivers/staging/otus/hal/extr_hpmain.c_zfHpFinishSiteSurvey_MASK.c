
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsHpPriv {int isSiteSurvey; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_1, u8_t VAR_2)
{
    struct zsHpPriv* VAR_3;

    FUNC_2(VAR_1);
    VAR_3=VAR_0->hpPrivate;

    FUNC_0();

    FUNC_1(VAR_1);
    if ( VAR_2 == 1 )
    {
        VAR_3->isSiteSurvey = 2;
    }
    else
    {
        VAR_3->isSiteSurvey = 0;
    }
    FUNC_3(VAR_1);
}
