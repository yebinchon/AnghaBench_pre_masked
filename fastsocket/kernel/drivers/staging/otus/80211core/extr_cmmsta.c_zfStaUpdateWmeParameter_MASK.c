
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ wmeConnected; scalar_t__ wmeParameterSetCount; int ac0PriorityHigherThanAc2; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int *,int *,int,int) ;
 int FUNC_1 (int *,int*,int*,int*,int*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;

void FUNC_6(zdev_t* VAR_3, zbuf_t* VAR_4)
{
    u16_t VAR_5;
    u16_t VAR_6[5];
    u16_t VAR_7[5];
    u16_t VAR_8[5];
    u16_t VAR_9[5];
    u8_t VAR_10;
    u8_t VAR_11;
    u16_t VAR_12;
    u16_t VAR_13;
    u16_t VAR_14;
    u8_t VAR_15;

    FUNC_3(VAR_3);



    if (VAR_1->sta.wmeConnected != 0)
    {

        if ((VAR_14 = FUNC_0(VAR_3, VAR_4, 2, 1)) != 0xffff)
        {
            if ((VAR_12 = FUNC_4(VAR_3, VAR_4, VAR_14+1)) >= 7)
            {
                VAR_15=FUNC_4(VAR_3, VAR_4, VAR_14+8);
                if (VAR_15 != VAR_1->sta.wmeParameterSetCount)
                {
                    FUNC_2(VAR_0, "wmeParameterSetCount changed!");
                    VAR_1->sta.wmeParameterSetCount = VAR_15;

                    VAR_10 = 0xf;
                    for (VAR_13=0; VAR_13<4; VAR_13++)
                    {
                        if (VAR_12 >= (8+(VAR_13*4)+4))
                        {
                            VAR_5=FUNC_4(VAR_3, VAR_4, VAR_14+10+VAR_13*4);
                            VAR_11 = (VAR_5 >> 5) & 0x3;
                            if ((VAR_5 & 0x10) == 0)
                            {
                                VAR_10 &= (~(1<<VAR_11));
                            }
                            VAR_6[VAR_11] = ((VAR_5 & 0xf) * 9) + 10;
                            VAR_5=FUNC_4(VAR_3, VAR_4, VAR_14+11+VAR_13*4);

                            VAR_7[VAR_11] = VAR_2[(VAR_5 & 0xf)];
                            VAR_8[VAR_11] = VAR_2[(VAR_5 >> 4)];
                            VAR_9[VAR_11]=FUNC_5(VAR_3, VAR_4,
                                    VAR_14+12+VAR_13*4);
                        }
                    }

                    if ((VAR_10 & 0x4) != 0)
                    {
                        VAR_7[2] = VAR_7[0];
                        VAR_8[2] = VAR_8[0];
                        VAR_6[2] = VAR_6[0];
                        VAR_9[2] = VAR_9[0];
                    }
                    if ((VAR_10 & 0x8) != 0)
                    {
                        VAR_7[3] = VAR_7[2];
                        VAR_8[3] = VAR_8[2];
                        VAR_6[3] = VAR_6[2];
                        VAR_9[3] = VAR_9[2];
                    }
                    VAR_7[4] = 3;
                    VAR_8[4] = 7;
                    VAR_6[4] = 28;

                    if ((VAR_7[2]+VAR_6[2]) > ((VAR_7[0]+VAR_6[0])+1))
                    {
                        VAR_1->sta.ac0PriorityHigherThanAc2 = 1;
                    }
                    else
                    {
                        VAR_1->sta.ac0PriorityHigherThanAc2 = 0;
                    }
                    FUNC_1(VAR_3, VAR_7, VAR_8, VAR_6, VAR_9);
                }
            }
        }
    }
}
