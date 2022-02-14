
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t byte ;
struct TYPE_7__ {scalar_t__ io; } ;
struct TYPE_6__ {TYPE_1__* e_tbl; } ;
struct TYPE_5__ {int * e; } ;
typedef TYPE_2__* PISDN_ADAPTER ;
typedef int ENTITY ;
typedef TYPE_3__ ADAPTER ;



ENTITY * FUNC_0(ADAPTER * VAR_0, byte VAR_1)
{
  PISDN_ADAPTER VAR_2;
  VAR_2 = (PISDN_ADAPTER) VAR_0->io;
  return (VAR_2->e_tbl[VAR_1].e);
}
