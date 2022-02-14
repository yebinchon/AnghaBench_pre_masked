
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {size_t bcast_id; } ;
struct il_priv {int sta_lock; TYPE_1__* stations; TYPE_2__ hw_params; } ;
struct il_link_quality_cmd {int dummy; } ;
struct TYPE_3__ {struct il_link_quality_cmd* lq; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 struct il_link_quality_cmd* FUNC_2 (struct il_priv*,size_t) ;
 int FUNC_3 (struct il_link_quality_cmd*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_1)
{
 unsigned long VAR_2;
 struct il_link_quality_cmd *VAR_3;
 u8 VAR_4 = VAR_1->hw_params.bcast_id;

 VAR_3 = FUNC_2(VAR_1, VAR_4);
 if (!VAR_3) {
  FUNC_1("Unable to initialize rate scaling for bcast sta.\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_1->sta_lock, VAR_2);
 if (VAR_1->stations[VAR_4].lq)
  FUNC_3(VAR_1->stations[VAR_4].lq);
 else
  FUNC_0("Bcast sta rate scaling has not been initialized.\n");
 VAR_1->stations[VAR_4].lq = VAR_3;
 FUNC_5(&VAR_1->sta_lock, VAR_2);

 return 0;
}
