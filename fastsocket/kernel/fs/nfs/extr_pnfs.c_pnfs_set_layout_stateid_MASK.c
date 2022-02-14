
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int seqid; } ;
struct TYPE_10__ {TYPE_2__ stateid; } ;
struct pnfs_layout_hdr {int plh_barrier; TYPE_5__ plh_stateid; } ;
struct TYPE_7__ {int seqid; } ;
struct TYPE_9__ {TYPE_1__ stateid; } ;
typedef TYPE_3__ nfs4_stateid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__ const*) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(struct pnfs_layout_hdr *VAR_0, const nfs4_stateid *VAR_1,
   bool VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0->plh_stateid.stateid.seqid);
 VAR_4 = FUNC_0(VAR_1->stateid.seqid);
 if ((int)(VAR_4 - VAR_3) > 0) {
  FUNC_1(&VAR_0->plh_stateid, VAR_1);
  if (VAR_2) {
   u32 VAR_5 = FUNC_0(VAR_1->stateid.seqid);

   if ((int)(VAR_5 - VAR_0->plh_barrier))
    VAR_0->plh_barrier = VAR_5;
  } else {







   if (FUNC_2((VAR_4 - VAR_0->plh_barrier) > (3 << 29)))
    VAR_0->plh_barrier = VAR_4 - (1 << 30);
  }
 }
}
