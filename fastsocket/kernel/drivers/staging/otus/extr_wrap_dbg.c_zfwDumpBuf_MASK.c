
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;


 int FUNC_0 (char*,...) ;

void FUNC_1(zdev_t* VAR_0, zbuf_t* VAR_1)
{
    u16_t VAR_2;

    for (VAR_2=0; VAR_2<VAR_1->len; VAR_2++)
    {
        FUNC_0("%02x ", *(((u8_t*)VAR_1->data)+VAR_2));
        if ((VAR_2&0xf)==0xf)
        {
            FUNC_0("\n");
        }
    }
    FUNC_0("\n");
}
