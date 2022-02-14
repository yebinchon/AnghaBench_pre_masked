
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpsb_packet {int tlabel; TYPE_2__* host; int node_id; } ;
struct TYPE_4__ {TYPE_1__* tl_pool; } ;
struct TYPE_3__ {unsigned long* map; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,unsigned long*) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct hpsb_packet *VAR_3)
{
 unsigned long VAR_4, *VAR_5;
 int VAR_6, VAR_7 = FUNC_1(VAR_3->node_id);

 if (FUNC_5(VAR_7 == VAR_0))
  return;
 VAR_5 = VAR_3->host->tl_pool[VAR_7].map;
 VAR_6 = VAR_3->tlabel;
 FUNC_0(VAR_6 > 63 || VAR_6 < 0);

 FUNC_3(&VAR_1, VAR_4);
 FUNC_0(!FUNC_2(VAR_6, VAR_5));
 FUNC_4(&VAR_1, VAR_4);

 FUNC_6(&VAR_2);
}
