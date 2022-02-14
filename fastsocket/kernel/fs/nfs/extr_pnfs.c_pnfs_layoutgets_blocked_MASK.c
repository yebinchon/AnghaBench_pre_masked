
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pnfs_layout_hdr {int plh_outstanding; int plh_segs; int plh_flags; scalar_t__ plh_block_lgets; scalar_t__ plh_barrier; } ;
struct TYPE_4__ {int seqid; } ;
struct TYPE_5__ {TYPE_1__ stateid; } ;
typedef TYPE_2__ nfs4_stateid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static bool
FUNC_4(struct pnfs_layout_hdr *VAR_2, nfs4_stateid *VAR_3,
   int VAR_4)
{
 if ((VAR_3) &&
     (int)(VAR_2->plh_barrier - FUNC_1(VAR_3->stateid.seqid)) >= 0)
  return 1;
 return VAR_2->plh_block_lgets ||
  FUNC_3(VAR_1, &VAR_2->plh_flags) ||
  FUNC_3(VAR_0, &VAR_2->plh_flags) ||
  (FUNC_2(&VAR_2->plh_segs) &&
   (FUNC_0(&VAR_2->plh_outstanding) > VAR_4));
}
