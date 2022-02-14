
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ data; scalar_t__ tail; } ;
typedef TYPE_1__ zbuf_t ;
typedef int u16_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

u16_t FUNC_1(zdev_t* VAR_0, zbuf_t* VAR_1, u16_t VAR_2)
{




    VAR_1->tail = VAR_1->data;
    VAR_1->len = 0;


    FUNC_0(VAR_1, VAR_2);
    return 0;
}
