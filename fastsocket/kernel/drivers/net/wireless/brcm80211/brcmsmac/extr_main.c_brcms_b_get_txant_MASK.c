
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct brcms_hardware {TYPE_2__* wlc; } ;
struct TYPE_4__ {TYPE_1__* stf; } ;
struct TYPE_3__ {int txant; } ;



u16 FUNC_0(struct brcms_hardware *VAR_0)
{
 return (u16) VAR_0->wlc->stf->txant;
}
