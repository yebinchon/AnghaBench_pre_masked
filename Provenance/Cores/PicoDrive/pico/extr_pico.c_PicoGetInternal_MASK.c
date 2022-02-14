
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pint_t ;
struct TYPE_8__ {int vint; int vptr; } ;
typedef TYPE_3__ pint_ret_t ;
struct TYPE_7__ {int* reg; } ;
struct TYPE_6__ {int pal; } ;
struct TYPE_9__ {TYPE_2__ video; TYPE_1__ m; int rom; } ;






 TYPE_5__ VAR_0 ;

void FUNC_0(pint_t VAR_1, pint_ret_t *VAR_2)
{
  switch (VAR_1)
  {
    case 128: VAR_2->vptr = VAR_0.rom; break;
    case 129: VAR_2->vint = VAR_0.m.pal; break;
    case 130: VAR_2->vint = VAR_0.video.reg[12]&1; break;
    case 131: VAR_2->vint = VAR_0.m.pal && (VAR_0.video.reg[1]&8); break;
  }
}
