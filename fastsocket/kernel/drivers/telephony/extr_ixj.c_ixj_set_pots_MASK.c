
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pots_pstn; } ;
struct TYPE_6__ {int rly1; } ;
struct TYPE_7__ {int byte; TYPE_1__ bits; } ;
struct TYPE_9__ {scalar_t__ cardtype; scalar_t__ port; TYPE_3__ flags; scalar_t__ XILINXbase; TYPE_2__ pld_slicw; } ;
typedef TYPE_4__ IXJ ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(IXJ *VAR_2, int VAR_3)
{
 if (VAR_2->cardtype == VAR_1) {
  if (VAR_3) {
   if (VAR_2->port == VAR_0) {
    VAR_2->pld_slicw.bits.rly1 = 0;
    FUNC_0(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
    VAR_2->flags.pots_pstn = 1;
    return 1;
   } else {
    VAR_2->flags.pots_pstn = 0;
    return 0;
   }
  } else {
   VAR_2->pld_slicw.bits.rly1 = 1;
   FUNC_0(VAR_2->pld_slicw.byte, VAR_2->XILINXbase + 0x01);
   VAR_2->flags.pots_pstn = 0;
   return 1;
  }
 } else {
  return 0;
 }
}
