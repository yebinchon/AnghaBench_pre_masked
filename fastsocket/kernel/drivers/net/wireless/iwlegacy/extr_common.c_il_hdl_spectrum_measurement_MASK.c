
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_spectrum_notification {int state; } ;
struct TYPE_2__ {struct il_spectrum_notification spectrum_notif; } ;
struct il_rx_pkt {TYPE_1__ u; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {int measurement_status; int measure_report; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct il_spectrum_notification*,int) ;
 struct il_rx_pkt* FUNC_2 (struct il_rx_buf*) ;

void
FUNC_3(struct il_priv *VAR_1, struct il_rx_buf *VAR_2)
{
 struct il_rx_pkt *VAR_3 = FUNC_2(VAR_2);
 struct il_spectrum_notification *VAR_4 = &(VAR_3->u.spectrum_notif);

 if (!VAR_4->state) {
  FUNC_0("Spectrum Measure Notification: Start\n");
  return;
 }

 FUNC_1(&VAR_1->measure_report, VAR_4, sizeof(*VAR_4));
 VAR_1->measurement_status |= VAR_0;
}
