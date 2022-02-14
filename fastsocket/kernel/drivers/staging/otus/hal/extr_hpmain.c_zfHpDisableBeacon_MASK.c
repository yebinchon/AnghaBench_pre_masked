
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
struct zsHpPriv {scalar_t__ ibssBcnEnabled; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_2)
{
    FUNC_2(VAR_2);

    ((struct zsHpPriv*)VAR_1->hpPrivate)->ibssBcnEnabled = 0;

    FUNC_0(VAR_2, VAR_0, 0);
    FUNC_1(VAR_2);
}
