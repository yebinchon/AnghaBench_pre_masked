
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_3__ {int delayWcmdCount; int* delayWcmdAddr; int* delayWcmdVal; } ;
struct zsHpPriv {TYPE_1__ cmd; } ;
struct TYPE_4__ {struct zsHpPriv* hpPrivate; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *,int*,int,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u16_t FUNC_5(zdev_t* VAR_3)
{
    u32_t VAR_4[(VAR_0/4)];
    u16_t VAR_5;
    u16_t VAR_6;
    struct zsHpPriv* VAR_7;

    FUNC_3(VAR_3);
    VAR_7=VAR_2->hpPrivate;

    FUNC_1();


    FUNC_2(VAR_3);


    if (VAR_7->cmd.delayWcmdCount > 0)
    {
        VAR_4[0] = 0x00000100 + (VAR_7->cmd.delayWcmdCount<<3);


        for (VAR_5=0; VAR_5<VAR_7->cmd.delayWcmdCount; VAR_5++)
        {
            VAR_4[1+(VAR_5<<1)] = VAR_7->cmd.delayWcmdAddr[VAR_5];
            VAR_4[2+(VAR_5<<1)] = VAR_7->cmd.delayWcmdVal[VAR_5];
        }

        VAR_7->cmd.delayWcmdCount = 0;


        FUNC_4(VAR_3);


        VAR_6 = FUNC_0(VAR_3, VAR_4, 4+(VAR_5<<3), VAR_1, ((void*)0));

        return 1;
    }
    else
    {

        FUNC_4(VAR_3);

        return 0;
    }
}
