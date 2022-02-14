
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ zbuf_t ;
typedef scalar_t__ u16_t ;



u16_t FUNC_0(zdev_t* VAR_0, zbuf_t* VAR_1, u16_t VAR_2)
{


    VAR_1->data += VAR_2;
    VAR_1->len -= VAR_2;
    return 0;
}
