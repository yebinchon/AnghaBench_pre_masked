
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int channel; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct il_priv {TYPE_2__ active; TYPE_1__ ht; } ;
struct il_link_quality_cmd {TYPE_3__* rs_table; } ;
struct TYPE_6__ {int rate_n_flags; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct il_priv *VAR_2, struct il_link_quality_cmd *VAR_3)
{
 int VAR_4;

 if (VAR_2->ht.enabled)
  return 1;

 FUNC_0("Channel %u is not an HT channel\n", VAR_2->active.channel);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_1(VAR_3->rs_table[VAR_4].rate_n_flags) & VAR_1) {
   FUNC_0("idx %d of LQ expects HT channel\n", VAR_4);
   return 0;
  }
 }
 return 1;
}
