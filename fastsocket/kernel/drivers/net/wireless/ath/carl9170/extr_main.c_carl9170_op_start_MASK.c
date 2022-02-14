
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_hw {struct ar9170* priv; } ;
struct TYPE_6__ {int disable_offload_fw; scalar_t__ rx_filter; } ;
struct TYPE_5__ {void* last_slept; void* last_action; } ;
struct ar9170 {int current_factor; int current_density; int usedkeys; int disable_offload; int rx_software_decryption; int mutex; TYPE_3__* hw; int stat_work; TYPE_2__ fw; int mem_allocs; scalar_t__* max_queue_stop_timeout; void** queue_stop_timeout; int erp_mode; TYPE_1__ ps; scalar_t__ filter_state; int * edcf; } ;
struct TYPE_7__ {int queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,int,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ar9170*,int) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*,int) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*,int ,int ) ;
 int FUNC_7 (struct ar9170*,int,int *,int ,int,int *,int ) ;
 int FUNC_8 (struct ar9170*) ;
 int FUNC_9 (struct ar9170*,int ,int ) ;
 int FUNC_10 (struct ar9170*) ;
 int FUNC_11 (TYPE_3__*,int *,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 void* VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct ieee80211_hw *VAR_18)
{
 struct ar9170 *VAR_19 = VAR_18->priv;
 int VAR_20, VAR_21;

 FUNC_14(&VAR_19->mutex);

 FUNC_10(VAR_19);


 FUNC_0(VAR_19->edcf[VAR_8], 2, 3, 7, 47);
 FUNC_0(VAR_19->edcf[VAR_7], 2, 7, 15, 94);
 FUNC_0(VAR_19->edcf[VAR_4], 3, 15, 1023, 0);
 FUNC_0(VAR_19->edcf[VAR_5], 7, 15, 1023, 0);
 FUNC_0(VAR_19->edcf[VAR_6], 2, 3, 7, 0);

 VAR_19->current_factor = VAR_19->current_density = -1;

 VAR_19->usedkeys = 1;
 VAR_19->filter_state = 0;
 VAR_19->ps.last_action = VAR_16;
 VAR_19->ps.last_slept = VAR_16;
 VAR_19->erp_mode = VAR_9;




 VAR_19->disable_offload = VAR_17 |
  VAR_19->fw.disable_offload_fw;
 VAR_19->rx_software_decryption = VAR_19->disable_offload;

 for (VAR_21 = 0; VAR_21 < VAR_19->hw->queues; VAR_21++) {
  VAR_19->queue_stop_timeout[VAR_21] = VAR_16;
  VAR_19->max_queue_stop_timeout[VAR_21] = 0;
 }

 FUNC_1(&VAR_19->mem_allocs, 0);

 VAR_20 = FUNC_8(VAR_19);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_3(VAR_19);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_5(VAR_19);
 if (VAR_20)
  goto out;

 if (VAR_19->fw.rx_filter) {
  VAR_20 = FUNC_4(VAR_19, VAR_13 |
   VAR_12 | VAR_11);
  if (VAR_20)
   goto out;
 }

 VAR_20 = FUNC_9(VAR_19, VAR_3,
     VAR_1);
 if (VAR_20)
  goto out;


 for (VAR_21 = 0; VAR_21 < VAR_0 + 4; VAR_21++) {
  VAR_20 = FUNC_7(VAR_19, VAR_21, ((void*)0), VAR_2,
       0, ((void*)0), 0);
  if (VAR_20)
   goto out;

  VAR_20 = FUNC_7(VAR_19, VAR_21, ((void*)0), VAR_2,
       1, ((void*)0), 0);
  if (VAR_20)
   goto out;

  if (VAR_21 < VAR_0) {
   VAR_20 = FUNC_2(VAR_19, VAR_21);
   if (VAR_20)
    goto out;
  }
 }

 FUNC_6(VAR_19, VAR_10, VAR_14);

 FUNC_11(VAR_19->hw, &VAR_19->stat_work,
  FUNC_16(FUNC_13(VAR_15)));

 FUNC_12(VAR_19->hw);
 VAR_20 = 0;

out:
 FUNC_15(&VAR_19->mutex);
 return VAR_20;
}
