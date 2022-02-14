
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct il_rx_pkt {TYPE_1__ hdr; } ;
struct il_priv {int dummy; } ;
struct TYPE_4__ {int cmd; } ;
struct il_device_cmd {TYPE_2__ hdr; } ;




 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_1, struct il_device_cmd *VAR_2,
   struct il_rx_pkt *VAR_3)
{
 if (VAR_3->hdr.flags & VAR_0) {
  FUNC_2("Bad return from %s (0x%08X)\n",
         FUNC_3(VAR_2->hdr.cmd), VAR_3->hdr.flags);
  return;
 }
}
