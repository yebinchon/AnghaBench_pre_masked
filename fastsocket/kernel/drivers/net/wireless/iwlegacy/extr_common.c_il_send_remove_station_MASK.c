
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_2__ rem_sta; } ;
struct TYPE_4__ {int flags; } ;
struct il_rx_pkt {TYPE_3__ u; TYPE_1__ hdr; } ;
struct il_rem_sta_cmd {int num_sta; int addr; } ;
struct il_priv {int sta_lock; } ;
struct il_host_cmd {int len; scalar_t__ reply_page; int flags; struct il_rem_sta_cmd* data; int id; } ;
typedef int rm_sta_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;

 int FUNC_2 (struct il_priv*,scalar_t__) ;
 int FUNC_3 (struct il_priv*,struct il_host_cmd*) ;
 int FUNC_4 (struct il_priv*,int) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (struct il_rem_sta_cmd*,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_9(struct il_priv *VAR_6, const u8 * VAR_7, int VAR_8,
         bool VAR_9)
{
 struct il_rx_pkt *VAR_10;
 int VAR_11;

 unsigned long VAR_12;
 struct il_rem_sta_cmd VAR_13;

 struct il_host_cmd VAR_14 = {
  .id = VAR_2,
  .len = sizeof(struct il_rem_sta_cmd),
  .flags = VAR_0,
  .data = &VAR_13,
 };

 FUNC_6(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.num_sta = 1;
 FUNC_5(&VAR_13.addr, VAR_7, VAR_4);

 VAR_14.flags |= VAR_1;

 VAR_11 = FUNC_3(VAR_6, &VAR_14);

 if (VAR_11)
  return VAR_11;

 VAR_10 = (struct il_rx_pkt *)VAR_14.reply_page;
 if (VAR_10->hdr.flags & VAR_5) {
  FUNC_1("Bad return from C_REM_STA (0x%08X)\n", VAR_10->hdr.flags);
  VAR_11 = -VAR_3;
 }

 if (!VAR_11) {
  switch (VAR_10->u.rem_sta.status) {
  case 128:
   if (!VAR_9) {
    FUNC_7(&VAR_6->sta_lock, VAR_12);
    FUNC_4(VAR_6, VAR_8);
    FUNC_8(&VAR_6->sta_lock,
             VAR_12);
   }
   FUNC_0("C_REM_STA PASSED\n");
   break;
  default:
   VAR_11 = -VAR_3;
   FUNC_1("C_REM_STA failed\n");
   break;
  }
 }
 FUNC_2(VAR_6, VAR_14.reply_page);

 return VAR_11;
}
