
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_priv {scalar_t__ num_stations; int sta_lock; TYPE_1__* stations; int ** tid_data; } ;
struct TYPE_2__ {int used; int * lq; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,size_t const,size_t const*) ;
 int FUNC_1 (struct iwl_priv*,char*,size_t const*) ;
 size_t const VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (struct iwl_priv*,size_t const*,size_t const,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct iwl_priv *VAR_6, const u8 VAR_7,
         const u8 *VAR_8)
{
 u8 VAR_9;

 if (!FUNC_3(VAR_6)) {
  FUNC_1(VAR_6,
   "Unable to remove station %pM, device not ready.\n",
   VAR_8);





  return 0;
 }

 FUNC_0(VAR_6, "Removing STA from driver:%d  %pM\n",
   VAR_7, VAR_8);

 if (FUNC_2(VAR_7 == VAR_1))
  return -VAR_0;

 FUNC_7(&VAR_6->sta_lock);

 if (!(VAR_6->stations[VAR_7].used & VAR_3)) {
  FUNC_1(VAR_6, "Removing %pM but non DRIVER active\n",
    VAR_8);
  goto out_err;
 }

 if (!(VAR_6->stations[VAR_7].used & VAR_5)) {
  FUNC_1(VAR_6, "Removing %pM but non UCODE active\n",
    VAR_8);
  goto out_err;
 }

 if (VAR_6->stations[VAR_7].used & VAR_4) {
  FUNC_5(VAR_6->stations[VAR_7].lq);
  VAR_6->stations[VAR_7].lq = ((void*)0);
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  FUNC_6(&VAR_6->tid_data[VAR_7][VAR_9], 0,
   sizeof(VAR_6->tid_data[VAR_7][VAR_9]));

 VAR_6->stations[VAR_7].used &= ~VAR_3;

 VAR_6->num_stations--;

 if (FUNC_2(VAR_6->num_stations < 0))
  VAR_6->num_stations = 0;

 FUNC_8(&VAR_6->sta_lock);

 return FUNC_4(VAR_6, VAR_8, VAR_7, 0);
out_err:
 FUNC_8(&VAR_6->sta_lock);
 return -VAR_0;
}
