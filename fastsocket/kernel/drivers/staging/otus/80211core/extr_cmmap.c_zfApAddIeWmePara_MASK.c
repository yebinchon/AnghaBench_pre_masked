
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ uapsdEnabled; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int) ;

u16_t FUNC_2(zdev_t* VAR_2, zbuf_t* VAR_3, u16_t VAR_4, u16_t VAR_5)
{
    FUNC_0(VAR_2);


    FUNC_1(VAR_2, VAR_3, VAR_4++, VAR_0);


    FUNC_1(VAR_2, VAR_3, VAR_4++, 24);


    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x00);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x50);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0xF2);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x02);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x01);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x01);


    if (VAR_1->ap.uapsdEnabled)
    {
        FUNC_1(VAR_2, VAR_3, VAR_4++, 0x81);
    }
    else
    {
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x01);
    }


    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x00);


    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x03);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0xA4);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x00);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x00);

    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x27);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0xA4);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x00);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x00);

    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x42);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x43);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x5E);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x00);

    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x62);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x32);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x2F);
    FUNC_1(VAR_2, VAR_3, VAR_4++, 0x00);

    return VAR_4;
}
