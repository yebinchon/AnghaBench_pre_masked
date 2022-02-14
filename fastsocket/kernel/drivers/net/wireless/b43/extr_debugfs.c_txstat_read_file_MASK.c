
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* dfsentry; } ;
struct b43_txstatus_log {int end; struct b43_txstatus* log; } ;
struct b43_txstatus {int acked; int for_ampdu; int intermediate; int pm_indicated; int supp_reason; int rts_count; int frame_count; int phy_stat; int seq; scalar_t__ cookie; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct b43_txstatus_log txstatlog; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct b43_wldev *VAR_1,
    char *VAR_2, size_t VAR_3)
{
 struct b43_txstatus_log *VAR_4 = &VAR_1->dfsentry->txstatlog;
 ssize_t VAR_5 = 0;
 int VAR_6, VAR_7;
 struct b43_txstatus *VAR_8;

 if (VAR_4->end < 0) {
  FUNC_0("Nothing transmitted, yet\n");
  goto out;
 }
 FUNC_0("b43 TX status reports:\n\n"
  "index | cookie | seq | phy_stat | frame_count | "
  "rts_count | supp_reason | pm_indicated | "
  "intermediate | for_ampdu | acked\n" "---\n");
 VAR_6 = VAR_4->end + 1;
 VAR_7 = 0;
 while (1) {
  if (VAR_6 == VAR_0)
   VAR_6 = 0;
  VAR_8 = &(VAR_4->log[VAR_6]);
  if (VAR_8->cookie) {
   FUNC_0("%03d | "
    "0x%04X | 0x%04X | 0x%02X | "
    "0x%X | 0x%X | "
    "%u | %u | "
    "%u | %u | %u\n",
    VAR_7,
    VAR_8->cookie, VAR_8->seq, VAR_8->phy_stat,
    VAR_8->frame_count, VAR_8->rts_count,
    VAR_8->supp_reason, VAR_8->pm_indicated,
    VAR_8->intermediate, VAR_8->for_ampdu,
    VAR_8->acked);
   VAR_7++;
  }
  if (VAR_6 == VAR_4->end)
   break;
  VAR_6++;
 }
out:

 return VAR_5;
}
