
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u16_t ;
struct TYPE_3__ {size_t ibssAdditionalIESize; int * ibssAdditionalIE; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ) ;

u16_t FUNC_2(zdev_t* VAR_1, zbuf_t* VAR_2, u16_t VAR_3)
{
 u16_t VAR_4;

    FUNC_0(VAR_1);

    for (VAR_4=0; VAR_4<VAR_0->sta.ibssAdditionalIESize; VAR_4++)
    {
        FUNC_1(VAR_1, VAR_2, VAR_3++, VAR_0->sta.ibssAdditionalIE[VAR_4]);
    }

    return VAR_3;
}
