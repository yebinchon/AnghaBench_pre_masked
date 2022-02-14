
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_5__ {int len; int data; int tail; } ;
typedef TYPE_1__ zbuf_t ;
typedef int u16_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

u16_t FUNC_2(zdev_t* VAR_0, zbuf_t* VAR_1, zbuf_t* VAR_2)
{
    FUNC_0(VAR_1->data, VAR_2->data, VAR_2->len);
    VAR_1->tail = VAR_1->data;
    FUNC_1(VAR_1, VAR_2->len);
    return 0;
}
