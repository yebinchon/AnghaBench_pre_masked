
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int fsft; int krs; int * rrp; int eincr; int * srp; int eincs; int * drp; int eincd; int * arp; int einca; } ;
typedef TYPE_1__ slot_t ;



__attribute__((used)) static void
FUNC_0 (slot_t *VAR_0, u32 VAR_1)
{
  if (VAR_0->arp && (VAR_1 & 0x1))
    VAR_0->einca = VAR_0->arp[(14 - VAR_0->fsft) >> VAR_0->krs];
  if (VAR_0->drp && (VAR_1 & 0x2))
    VAR_0->eincd = VAR_0->drp[(14 - VAR_0->fsft) >> VAR_0->krs];
  if (VAR_0->srp && (VAR_1 & 0x4))
    VAR_0->eincs = VAR_0->srp[(14 - VAR_0->fsft) >> VAR_0->krs];
  if (VAR_0->rrp && (VAR_1 & 0x8))
    VAR_0->eincr = VAR_0->rrp[(14 - VAR_0->fsft) >> VAR_0->krs];
}
