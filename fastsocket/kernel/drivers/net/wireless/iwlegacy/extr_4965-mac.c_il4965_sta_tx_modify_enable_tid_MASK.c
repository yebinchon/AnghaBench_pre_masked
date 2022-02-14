
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct il_priv {int sta_lock; TYPE_2__* stations; int mutex; } ;
struct il_addsta_cmd {int dummy; } ;
struct TYPE_4__ {int modify_mask; } ;
struct TYPE_6__ {int mode; int tid_disable_tx; TYPE_1__ sta; } ;
struct TYPE_5__ {TYPE_3__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct il_priv*,struct il_addsta_cmd*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct il_addsta_cmd*,TYPE_3__*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct il_priv *VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 struct il_addsta_cmd VAR_7;

 FUNC_2(&VAR_3->mutex);


 FUNC_4(&VAR_3->sta_lock, VAR_6);
 VAR_3->stations[VAR_4].sta.sta.modify_mask = VAR_2;
 VAR_3->stations[VAR_4].sta.tid_disable_tx &= FUNC_0(~(1 << VAR_5));
 VAR_3->stations[VAR_4].sta.mode = VAR_1;
 FUNC_3(&VAR_7, &VAR_3->stations[VAR_4].sta,
        sizeof(struct il_addsta_cmd));
 FUNC_5(&VAR_3->sta_lock, VAR_6);

 return FUNC_1(VAR_3, &VAR_7, VAR_0);
}
