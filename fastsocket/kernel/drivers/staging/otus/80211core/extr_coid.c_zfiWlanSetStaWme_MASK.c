
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_3__ {int staWmeEnabled; int staWmeQosInfo; } ;
struct TYPE_4__ {TYPE_1__ ws; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_1, u8_t VAR_2, u8_t VAR_3)
{
    FUNC_0(VAR_1);

    VAR_0->ws.staWmeEnabled = VAR_2 & 0x3;
    if ((VAR_2 & 0x2) != 0)
    {
        VAR_0->ws.staWmeQosInfo = VAR_3 & 0x6f;
    }
    else
    {
        VAR_0->ws.staWmeQosInfo = 0;
    }
}
