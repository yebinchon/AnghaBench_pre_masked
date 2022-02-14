
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int tx_idx; int nr; int debug; TYPE_1__* tx_skb; int Flags; } ;
struct hscx_hw {int fifo_size; int log; TYPE_3__* ip; TYPE_2__ bch; scalar_t__ off; } ;
struct TYPE_6__ {char* name; int type; int hw; int (* write_fifo ) (int ,scalar_t__,int *,int) ;} ;
struct TYPE_4__ {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hscx_hw*,int) ;
 int FUNC_1 (char*,char*,int,int,int,int) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int,char*,int,char*,int) ;
 int FUNC_4 (int ,scalar_t__,int *,int) ;
 int FUNC_5 (int ,scalar_t__,int *,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct hscx_hw*) ;

__attribute__((used)) static void
FUNC_8(struct hscx_hw *VAR_5)
{
 int VAR_6, VAR_7;
 u8 *VAR_8;

 if (!VAR_5->bch.tx_skb)
  return;
 VAR_6 = VAR_5->bch.tx_skb->len - VAR_5->bch.tx_idx;
 if (VAR_6 <= 0)
  return;
 VAR_8 = VAR_5->bch.tx_skb->data + VAR_5->bch.tx_idx;

 VAR_7 = FUNC_6(VAR_2, &VAR_5->bch.Flags) ? 1 : 0;
 if (VAR_6 > VAR_5->fifo_size) {
  VAR_6 = VAR_5->fifo_size;
  VAR_7 = 1;
 }
 FUNC_1("%s: B%1d %d/%d/%d\n", VAR_5->ip->name, VAR_5->bch.nr, VAR_6,
  VAR_5->bch.tx_idx, VAR_5->bch.tx_skb->len);
 VAR_5->bch.tx_idx += VAR_6;

 if (VAR_5->ip->type & VAR_4)
  VAR_5->ip->write_fifo(VAR_5->ip->hw,
   VAR_5->off + VAR_3, VAR_8, VAR_6);
 else {
  FUNC_7(VAR_5);
  VAR_5->ip->write_fifo(VAR_5->ip->hw,
   VAR_5->off, VAR_8, VAR_6);
 }
 FUNC_0(VAR_5, VAR_7 ? 0x08 : 0x0a);

 if (VAR_5->bch.debug & VAR_0) {
  FUNC_3(VAR_5->log, 64, "B%1d-send %s %d ",
   VAR_5->bch.nr, VAR_5->ip->name, VAR_6);
  FUNC_2(VAR_5->log, VAR_1, VAR_8, VAR_6);
 }
}
