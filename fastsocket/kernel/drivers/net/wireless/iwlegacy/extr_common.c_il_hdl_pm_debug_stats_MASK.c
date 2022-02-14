
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int raw; } ;
struct TYPE_3__ {int cmd; } ;
struct il_rx_pkt {TYPE_2__ u; TYPE_1__ hdr; int len_n_flags; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {int dummy; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct il_priv*,int ,int ,int) ;
 int FUNC_3 (int ) ;
 struct il_rx_pkt* FUNC_4 (struct il_rx_buf*) ;

void
FUNC_5(struct il_priv *VAR_2, struct il_rx_buf *VAR_3)
{
 struct il_rx_pkt *VAR_4 = FUNC_4(VAR_3);
 u32 VAR_5 = FUNC_3(VAR_4->len_n_flags) & VAR_1;
 FUNC_0("Dumping %d bytes of unhandled notification for %s:\n", VAR_5,
  FUNC_1(VAR_4->hdr.cmd));
 FUNC_2(VAR_2, VAR_0, VAR_4->u.raw, VAR_5);
}
