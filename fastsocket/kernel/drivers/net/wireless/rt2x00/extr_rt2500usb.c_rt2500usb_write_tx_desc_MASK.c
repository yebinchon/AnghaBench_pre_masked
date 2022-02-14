
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int ifs; int signal; int service; int length_low; int length_high; } ;
struct TYPE_7__ {TYPE_2__ plcp; } ;
struct txentry_desc {int retry_limit; scalar_t__ rate_mode; int length; int key_idx; int iv_offset; int flags; TYPE_3__ u; int cipher; } ;
struct skb_frame_desc {int desc_len; int * desc; int flags; int * iv; } ;
struct queue_entry {TYPE_1__* queue; TYPE_4__* skb; } ;
typedef int __le32 ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_5__ {int aifs; int cw_min; int cw_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int *,int,int ) ;
 struct skb_frame_desc* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct queue_entry *VAR_26,
        struct txentry_desc *VAR_27)
{
 struct skb_frame_desc *VAR_28 = FUNC_1(VAR_26->skb);
 __le32 *VAR_29 = (__le32 *) VAR_26->skb->data;
 u32 VAR_30;




 FUNC_2(VAR_29, 0, &VAR_30);
 FUNC_4(&VAR_30, VAR_16, VAR_27->retry_limit);
 FUNC_4(&VAR_30, VAR_13,
      FUNC_5(VAR_3, &VAR_27->flags));
 FUNC_4(&VAR_30, VAR_8,
      FUNC_5(VAR_0, &VAR_27->flags));
 FUNC_4(&VAR_30, VAR_17,
      FUNC_5(VAR_4, &VAR_27->flags));
 FUNC_4(&VAR_30, VAR_15,
      (VAR_27->rate_mode == VAR_5));
 FUNC_4(&VAR_30, VAR_14,
      FUNC_5(VAR_2, &VAR_27->flags));
 FUNC_4(&VAR_30, VAR_11, VAR_27->u.plcp.ifs);
 FUNC_4(&VAR_30, VAR_10, VAR_27->length);
 FUNC_4(&VAR_30, VAR_9, !!VAR_27->cipher);
 FUNC_4(&VAR_30, VAR_12, VAR_27->key_idx);
 FUNC_3(VAR_29, 0, VAR_30);

 FUNC_2(VAR_29, 1, &VAR_30);
 FUNC_4(&VAR_30, VAR_21, VAR_27->iv_offset);
 FUNC_4(&VAR_30, VAR_18, VAR_26->queue->aifs);
 FUNC_4(&VAR_30, VAR_20, VAR_26->queue->cw_min);
 FUNC_4(&VAR_30, VAR_19, VAR_26->queue->cw_max);
 FUNC_3(VAR_29, 1, VAR_30);

 FUNC_2(VAR_29, 2, &VAR_30);
 FUNC_4(&VAR_30, VAR_25, VAR_27->u.plcp.signal);
 FUNC_4(&VAR_30, VAR_24, VAR_27->u.plcp.service);
 FUNC_4(&VAR_30, VAR_23,
      VAR_27->u.plcp.length_low);
 FUNC_4(&VAR_30, VAR_22,
      VAR_27->u.plcp.length_high);
 FUNC_3(VAR_29, 2, VAR_30);

 if (FUNC_5(VAR_1, &VAR_27->flags)) {
  FUNC_0(VAR_29, 3, VAR_28->iv[0]);
  FUNC_0(VAR_29, 4, VAR_28->iv[1]);
 }




 VAR_28->flags |= VAR_6;
 VAR_28->desc = VAR_29;
 VAR_28->desc_len = VAR_7;
}
