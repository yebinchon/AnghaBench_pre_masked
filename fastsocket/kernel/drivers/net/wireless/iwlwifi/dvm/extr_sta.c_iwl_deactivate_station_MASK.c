
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_priv {scalar_t__ num_stations; int sta_lock; TYPE_1__* stations; int ** tid_data; } ;
struct TYPE_2__ {int used; } ;


 int FUNC_0 (struct iwl_priv*,char*,size_t const*,size_t const) ;
 int FUNC_1 (struct iwl_priv*,char*,size_t const*) ;
 size_t const VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct iwl_priv *VAR_3, const u8 VAR_4,
       const u8 *VAR_5)
{
 u8 VAR_6;

 if (!FUNC_3(VAR_3)) {
  FUNC_1(VAR_3,
   "Unable to remove station %pM, device not ready.\n",
   VAR_5);
  return;
 }

 FUNC_0(VAR_3, "Deactivating STA: %pM (%d)\n", VAR_5, VAR_4);

 if (FUNC_2(VAR_4 == VAR_0))
  return;

 FUNC_5(&VAR_3->sta_lock);

 FUNC_2(!(VAR_3->stations[VAR_4].used & VAR_2));

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_4(&VAR_3->tid_data[VAR_4][VAR_6], 0,
   sizeof(VAR_3->tid_data[VAR_4][VAR_6]));

 VAR_3->stations[VAR_4].used &= ~VAR_2;

 VAR_3->num_stations--;

 if (FUNC_2(VAR_3->num_stations < 0))
  VAR_3->num_stations = 0;

 FUNC_6(&VAR_3->sta_lock);
}
