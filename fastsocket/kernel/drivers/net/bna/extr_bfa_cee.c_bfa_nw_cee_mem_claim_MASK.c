
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct bfa_cee_stats {int dummy; } ;
struct bfa_cee_attr {int dummy; } ;
struct TYPE_4__ {int pa; int * kva; } ;
struct TYPE_3__ {int pa; int * kva; } ;
struct bfa_cee {struct bfa_cee_stats* stats; struct bfa_cee_attr* attr; TYPE_2__ stats_dma; TYPE_1__ attr_dma; } ;


 int FUNC_0 () ;

void
FUNC_1(struct bfa_cee *VAR_0, u8 *VAR_1, u64 VAR_2)
{
 VAR_0->attr_dma.kva = VAR_1;
 VAR_0->attr_dma.pa = VAR_2;
 VAR_0->stats_dma.kva = VAR_1 + FUNC_0();
 VAR_0->stats_dma.pa = VAR_2 + FUNC_0();
 VAR_0->attr = (struct bfa_cee_attr *) VAR_1;
 VAR_0->stats = (struct bfa_cee_stats *)
  (VAR_1 + FUNC_0());
}
