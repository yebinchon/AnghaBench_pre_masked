
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_5__ {size_t sta_id; int addr; } ;
struct TYPE_6__ {int rate_n_flags; scalar_t__ station_flags; TYPE_2__ sta; scalar_t__ mode; } ;
struct il_station_entry {int used; TYPE_3__ sta; } ;
struct TYPE_4__ {size_t bcast_id; int max_stations; } ;
struct il_priv {scalar_t__ band; int num_stations; struct il_station_entry* stations; TYPE_1__ hw_params; } ;
struct il_addsta_cmd {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (char*,size_t,size_t const*) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,size_t const*) ;
 int FUNC_4 (struct il_priv*,size_t,struct ieee80211_sta*) ;
 scalar_t__ FUNC_5 (size_t const*) ;
 int FUNC_6 (int ,size_t const*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_8 (int) ;

u8
FUNC_9(struct il_priv *VAR_11, const u8 *VAR_12, bool VAR_13,
  struct ieee80211_sta *VAR_14)
{
 struct il_station_entry *VAR_15;
 int VAR_16;
 u8 VAR_17 = VAR_3;
 u16 VAR_18;

 if (VAR_13)
  VAR_17 = VAR_2;
 else if (FUNC_5(VAR_12))
  VAR_17 = VAR_11->hw_params.bcast_id;
 else
  for (VAR_16 = VAR_5; VAR_16 < VAR_11->hw_params.max_stations; VAR_16++) {
   if (FUNC_3(VAR_11->stations[VAR_16].sta.sta.addr,
          VAR_12)) {
    VAR_17 = VAR_16;
    break;
   }

   if (!VAR_11->stations[VAR_16].used &&
       VAR_17 == VAR_3)
    VAR_17 = VAR_16;
  }





 if (FUNC_8(VAR_17 == VAR_3))
  return VAR_17;






 if (VAR_11->stations[VAR_17].used & VAR_7) {
  FUNC_1("STA %d already in process of being added.\n", VAR_17);
  return VAR_17;
 }

 if ((VAR_11->stations[VAR_17].used & VAR_4) &&
     (VAR_11->stations[VAR_17].used & VAR_6) &&
     FUNC_3(VAR_11->stations[VAR_17].sta.sta.addr, VAR_12)) {
  FUNC_0("STA %d (%pM) already added, not adding again.\n",
   VAR_17, VAR_12);
  return VAR_17;
 }

 VAR_15 = &VAR_11->stations[VAR_17];
 VAR_15->used = VAR_4;
 FUNC_0("Add STA to driver ID %d: %pM\n", VAR_17, VAR_12);
 VAR_11->num_stations++;


 FUNC_7(&VAR_15->sta, 0, sizeof(struct il_addsta_cmd));
 FUNC_6(VAR_15->sta.sta.addr, VAR_12, VAR_0);
 VAR_15->sta.mode = 0;
 VAR_15->sta.sta.sta_id = VAR_17;
 VAR_15->sta.station_flags = 0;






 FUNC_4(VAR_11, VAR_17, VAR_14);


 VAR_18 = (VAR_11->band == VAR_1) ? VAR_9 : VAR_8;

 VAR_15->sta.rate_n_flags = FUNC_2(VAR_18 | VAR_10);

 return VAR_17;

}
