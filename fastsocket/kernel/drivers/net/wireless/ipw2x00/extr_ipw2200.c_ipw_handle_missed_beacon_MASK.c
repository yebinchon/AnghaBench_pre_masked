
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int notif_missed_beacons; int disassociate_threshold; int status; int roaming_threshold; int abort_scan; int request_scan; int disassociate; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ipw_priv *VAR_9,
         int VAR_10)
{
 VAR_9->notif_missed_beacons = VAR_10;

 if (VAR_10 > VAR_9->disassociate_threshold &&
     VAR_9->status & VAR_5) {



  FUNC_0(VAR_1 | VAR_2 |
     VAR_3 | VAR_0,
     "Missed beacon: %d - disassociate\n", VAR_10);
  VAR_9->status &= ~VAR_6;
  if (VAR_9->status & VAR_7) {
   FUNC_0(VAR_1 | VAR_2 |
      VAR_3,
      "Aborting scan with missed beacon.\n");
   FUNC_3(&VAR_9->abort_scan);
  }

  FUNC_3(&VAR_9->disassociate);
  return;
 }

 if (VAR_9->status & VAR_6) {


  FUNC_0(VAR_2 | VAR_3,
     "Missed beacon: %d - roam in progress\n",
     VAR_10);
  return;
 }

 if (VAR_8 &&
     (VAR_10 > VAR_9->roaming_threshold &&
      VAR_10 <= VAR_9->disassociate_threshold)) {




  FUNC_0(VAR_2 | VAR_3,
     "Missed beacon: %d - initiate "
     "roaming\n", VAR_10);
  if (!(VAR_9->status & VAR_6)) {
   VAR_9->status |= VAR_6;
   if (!(VAR_9->status & VAR_7))
    FUNC_2(&VAR_9->request_scan, 0);
  }
  return;
 }

 if (VAR_9->status & VAR_7 &&
     VAR_10 > VAR_4) {




  FUNC_0(VAR_1 | VAR_2 | VAR_3,
     "Aborting scan with missed beacon.\n");
  FUNC_3(&VAR_9->abort_scan);
 }

 FUNC_1("Missed beacon: %d\n", VAR_10);
}
