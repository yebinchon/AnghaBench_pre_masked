
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef scalar_t__ u32_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ ibssAdditionalIESize; int ibssAdditionalIE; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, u32_t VAR_2, u8_t* VAR_3)
{
 FUNC_1(VAR_1);

 if ( VAR_2 )
    {
     VAR_0->sta.ibssAdditionalIESize = VAR_2;
        FUNC_0(VAR_0->sta.ibssAdditionalIE, VAR_3, (u16_t)VAR_2);
    }
    else
     VAR_0->sta.ibssAdditionalIESize = 0;
}
