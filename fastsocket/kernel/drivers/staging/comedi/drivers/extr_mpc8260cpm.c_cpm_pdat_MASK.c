
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long iop_pdata; unsigned long iop_pdatb; unsigned long iop_pdatc; unsigned long iop_pdatd; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned long *FUNC_0(int VAR_1)
{
 switch (VAR_1) {
 case 0:
  return &VAR_0->iop_pdata;
 case 1:
  return &VAR_0->iop_pdatb;
 case 2:
  return &VAR_0->iop_pdatc;
 case 3:
  return &VAR_0->iop_pdatd;
 }
}
