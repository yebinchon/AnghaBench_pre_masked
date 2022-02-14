
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {int flags; } ;
struct iwl_rx_packet {TYPE_1__ hdr; scalar_t__ data; } ;
struct iwl_priv {int sta_lock; TYPE_4__* stations; } ;
struct TYPE_10__ {size_t sta_id; int addr; } ;
struct iwl_addsta_cmd {TYPE_5__ sta; } ;
struct iwl_add_sta_resp {int status; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {scalar_t__ mode; TYPE_2__ sta; } ;
struct TYPE_9__ {TYPE_3__ sta; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,int) ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;
 int FUNC_2 (struct iwl_priv*,char*,size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct iwl_priv*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_3,
        struct iwl_addsta_cmd *VAR_4,
        struct iwl_rx_packet *VAR_5)
{
 struct iwl_add_sta_resp *VAR_6 = (void *)VAR_5->data;
 u8 VAR_7 = VAR_4->sta.sta_id;
 int VAR_8 = -VAR_0;

 if (VAR_5->hdr.flags & VAR_1) {
  FUNC_2(VAR_3, "Bad return from REPLY_ADD_STA (0x%08X)\n",
   VAR_5->hdr.flags);
  return VAR_8;
 }

 FUNC_1(VAR_3, "Processing response for adding station %u\n",
         VAR_7);

 FUNC_4(&VAR_3->sta_lock);

 switch (VAR_6->status) {
 case 128:
  FUNC_1(VAR_3, "REPLY_ADD_STA PASSED\n");
  VAR_8 = FUNC_3(VAR_3, VAR_7);
  break;
 case 129:
  FUNC_2(VAR_3, "Adding station %d failed, no room in table.\n",
   VAR_7);
  break;
 case 130:
  FUNC_2(VAR_3, "Adding station %d failed, no block ack "
   "resource.\n", VAR_7);
  break;
 case 131:
  FUNC_2(VAR_3, "Attempting to modify non-existing station %d\n",
   VAR_7);
  break;
 default:
  FUNC_0(VAR_3, "Received REPLY_ADD_STA:(0x%08X)\n",
    VAR_6->status);
  break;
 }

 FUNC_1(VAR_3, "%s station id %u addr %pM\n",
         VAR_3->stations[VAR_7].sta.mode ==
         VAR_2 ? "Modified" : "Added",
         VAR_7, VAR_3->stations[VAR_7].sta.sta.addr);
 FUNC_1(VAR_3, "%s station according to cmd buffer %pM\n",
         VAR_3->stations[VAR_7].sta.mode ==
         VAR_2 ? "Modified" : "Added",
         VAR_4->sta.addr);
 FUNC_5(&VAR_3->sta_lock);

 return VAR_8;
}
