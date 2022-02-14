
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct mpsc_tx_desc {int cmdstat; } ;
struct TYPE_2__ {int dev; } ;
struct mpsc_port_info {int txr_tail; scalar_t__ txr_p; scalar_t__ cache_mgmt; TYPE_1__ port; scalar_t__ txr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct mpsc_port_info*,int) ;
 int FUNC_4 (struct mpsc_port_info*,struct mpsc_tx_desc*) ;
 int FUNC_5 (struct mpsc_port_info*) ;

__attribute__((used)) static void FUNC_6(struct mpsc_port_info *VAR_5)
{
 struct mpsc_tx_desc *VAR_6, *VAR_7;


 if (!FUNC_5(VAR_5)) {
  VAR_6 = (struct mpsc_tx_desc *)(VAR_5->txr
    + (VAR_5->txr_tail * VAR_1));
  FUNC_1(VAR_5->port.dev, (void *)VAR_6, VAR_1,
    VAR_0);






  if (FUNC_0(VAR_6->cmdstat) & VAR_2) {
   VAR_7 = (struct mpsc_tx_desc *)
    (VAR_5->txr_p + (VAR_5->txr_tail * VAR_1));

   FUNC_4(VAR_5, VAR_7);
   FUNC_3(VAR_5, VAR_3 | VAR_4);
  }
 }
}
