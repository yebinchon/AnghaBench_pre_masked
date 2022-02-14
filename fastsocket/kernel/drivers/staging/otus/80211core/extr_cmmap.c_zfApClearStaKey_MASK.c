
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
typedef int bcAddr ;
struct TYPE_4__ {TYPE_2__* staTable; } ;
struct TYPE_6__ {TYPE_1__ ap; } ;
struct TYPE_5__ {int encryMode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(zdev_t* VAR_4, u16_t* VAR_5)
{

    u16_t VAR_6[3] = { 0xffff, 0xffff, 0xffff };
    u16_t VAR_7;

    FUNC_6(VAR_4);

    if (FUNC_2((u8_t*)VAR_6, (u8_t*)VAR_5, sizeof(VAR_6)) == VAR_0)
    {


    }
    else
    {
        FUNC_4();

        FUNC_5(VAR_4);

        if ((VAR_7 = FUNC_0(VAR_4, VAR_5)) != 0xffff)
        {

            FUNC_1(VAR_4, VAR_7+1);


            VAR_3->ap.staTable[VAR_7].encryMode = VAR_2;
        }
        else
        {
            FUNC_3(VAR_1, "Can't find STA address\n");
        }
        FUNC_7(VAR_4);
    }
}
