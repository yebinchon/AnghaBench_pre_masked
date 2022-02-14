
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {int protectedObss; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4(zdev_t* VAR_4, zbuf_t* VAR_5)
{
    u16_t VAR_6;
    u8_t VAR_7;

    FUNC_2(VAR_4);

    FUNC_1(VAR_0, "Rx beacon");


    if ((VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_1)) == 0xffff)
    {

        VAR_3->ap.protectedObss++;
        return;
    }

    VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6+2);
    if ((VAR_7 & VAR_2) == VAR_2)
    {

        VAR_3->ap.protectedObss = 1;
    }

    return;
}
