
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int nr; scalar_t__ maxlen; int debug; TYPE_3__* rx_skb; } ;
struct hscx_hw {int log; TYPE_2__* ip; TYPE_1__ bch; scalar_t__ off; } ;
struct TYPE_8__ {scalar_t__ len; } ;
struct TYPE_7__ {char* name; int type; int hw; int (* read_fifo ) (int ,scalar_t__,scalar_t__*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hscx_hw*,int) ;
 TYPE_3__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,char*,scalar_t__,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,int ,scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_5 (TYPE_3__*,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ,int,char*,int,char*,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(struct hscx_hw *VAR_5, u8 VAR_6)
{
 u8 *VAR_7;

 FUNC_2("%s: B%1d %d\n", VAR_5->ip->name, VAR_5->bch.nr, VAR_6);
 if (!VAR_5->bch.rx_skb) {
  VAR_5->bch.rx_skb = FUNC_1(VAR_5->bch.maxlen, VAR_2);
  if (!VAR_5->bch.rx_skb) {
   FUNC_3("%s: B receive out of memory\n",
    VAR_5->ip->name);
   FUNC_0(VAR_5, 0x80);
   return;
  }
 }
 if ((VAR_5->bch.rx_skb->len + VAR_6) > VAR_5->bch.maxlen) {
  FUNC_2("%s: overrun %d\n", VAR_5->ip->name,
   VAR_5->bch.rx_skb->len + VAR_6);
  FUNC_6(VAR_5->bch.rx_skb, 0);
  FUNC_0(VAR_5, 0x80);
  return;
 }
 VAR_7 = FUNC_5(VAR_5->bch.rx_skb, VAR_6);

 if (VAR_5->ip->type & VAR_4)
  VAR_5->ip->read_fifo(VAR_5->ip->hw,
   VAR_5->off + VAR_3, VAR_7, VAR_6);
 else
  VAR_5->ip->read_fifo(VAR_5->ip->hw,
   VAR_5->off, VAR_7, VAR_6);

 FUNC_0(VAR_5, 0x80);

 if (VAR_5->bch.debug & VAR_0) {
  FUNC_7(VAR_5->log, 64, "B%1d-recv %s %d ",
   VAR_5->bch.nr, VAR_5->ip->name, VAR_6);
  FUNC_4(VAR_5->log, VAR_1, VAR_7, VAR_6);
 }
}
