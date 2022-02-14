
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_priv {int sta_lock; TYPE_2__* stations; int mutex; } ;
struct iwl_addsta_cmd {int dummy; } ;
struct TYPE_4__ {int modify_mask; } ;
struct TYPE_6__ {int mode; int tid_disable_tx; TYPE_1__ sta; } ;
struct TYPE_5__ {TYPE_3__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_priv*,struct iwl_addsta_cmd*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iwl_addsta_cmd*,TYPE_3__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iwl_priv *VAR_3, int VAR_4, int VAR_5)
{
 struct iwl_addsta_cmd VAR_6;

 FUNC_2(&VAR_3->mutex);


 FUNC_4(&VAR_3->sta_lock);
 VAR_3->stations[VAR_4].sta.sta.modify_mask = VAR_2;
 VAR_3->stations[VAR_4].sta.tid_disable_tx &= FUNC_0(~(1 << VAR_5));
 VAR_3->stations[VAR_4].sta.mode = VAR_1;
 FUNC_3(&VAR_6, &VAR_3->stations[VAR_4].sta, sizeof(struct iwl_addsta_cmd));
 FUNC_5(&VAR_3->sta_lock);

 return FUNC_1(VAR_3, &VAR_6, VAR_0);
}
