
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43legacy_wldev {TYPE_1__* dfsentry; } ;
struct b43legacy_txstatus_log {int end; int lock; struct b43legacy_txstatus* log; } ;
struct b43legacy_txstatus {int acked; int for_ampdu; int intermediate; int pm_indicated; int supp_reason; int rts_count; int frame_count; int phy_stat; int seq; scalar_t__ cookie; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct b43legacy_txstatus_log txstatlog; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct b43legacy_wldev *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct b43legacy_txstatus_log *VAR_4 = &VAR_1->dfsentry->txstatlog;
 ssize_t VAR_5 = 0;
 unsigned long VAR_6;
 int VAR_7, VAR_8;
 struct b43legacy_txstatus *VAR_9;

 FUNC_1(&VAR_4->lock, VAR_6);
 if (VAR_4->end < 0) {
  FUNC_0("Nothing transmitted, yet\n");
  goto out_unlock;
 }
 FUNC_0("b43legacy TX status reports:\n\n"
  "index | cookie | seq | phy_stat | frame_count | "
  "rts_count | supp_reason | pm_indicated | "
  "intermediate | for_ampdu | acked\n" "---\n");
 VAR_7 = VAR_4->end + 1;
 VAR_8 = 0;
 while (1) {
  if (VAR_7 == VAR_0)
   VAR_7 = 0;
  VAR_9 = &(VAR_4->log[VAR_7]);
  if (VAR_9->cookie) {
   FUNC_0("%03d | "
    "0x%04X | 0x%04X | 0x%02X | "
    "0x%X | 0x%X | "
    "%u | %u | "
    "%u | %u | %u\n",
    VAR_8,
    VAR_9->cookie, VAR_9->seq, VAR_9->phy_stat,
    VAR_9->frame_count, VAR_9->rts_count,
    VAR_9->supp_reason, VAR_9->pm_indicated,
    VAR_9->intermediate, VAR_9->for_ampdu,
    VAR_9->acked);
   VAR_8++;
  }
  if (VAR_7 == VAR_4->end)
   break;
  VAR_7++;
 }
out_unlock:
 FUNC_2(&VAR_4->lock, VAR_6);

 return VAR_5;
}
