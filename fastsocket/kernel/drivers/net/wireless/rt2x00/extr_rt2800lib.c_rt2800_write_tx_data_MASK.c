
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mpdu_density; int txop; int mcs; int stbc; int ba_size; int wcid; } ;
struct TYPE_5__ {TYPE_1__ ht; } ;
struct txentry_desc {int rate_mode; int key_idx; int length; TYPE_2__ u; int flags; } ;
struct queue_entry {int entry_idx; TYPE_3__* queue; } ;
typedef int __le32 ;
struct TYPE_6__ {int qid; int winfo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 (struct queue_entry*) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct queue_entry *VAR_28,
     struct txentry_desc *VAR_29)
{
 __le32 *VAR_30 = FUNC_1(VAR_28);
 u32 VAR_31;
 int VAR_32;




 FUNC_2(VAR_30, 0, &VAR_31);
 FUNC_4(&VAR_31, VAR_12,
      FUNC_5(VAR_7, &VAR_29->flags));
 FUNC_4(&VAR_31, VAR_14,
      FUNC_5(VAR_5, &VAR_29->flags));
 FUNC_4(&VAR_31, VAR_11, 0);
 FUNC_4(&VAR_31, VAR_19,
      FUNC_5(VAR_8, &VAR_29->flags));
 FUNC_4(&VAR_31, VAR_9,
      FUNC_5(VAR_3, &VAR_29->flags));
 FUNC_4(&VAR_31, VAR_15,
      VAR_29->u.ht.mpdu_density);
 FUNC_4(&VAR_31, VAR_20, VAR_29->u.ht.txop);
 FUNC_4(&VAR_31, VAR_13, VAR_29->u.ht.mcs);
 FUNC_4(&VAR_31, VAR_10,
      FUNC_5(VAR_4, &VAR_29->flags));
 FUNC_4(&VAR_31, VAR_17,
      FUNC_5(VAR_6, &VAR_29->flags));
 FUNC_4(&VAR_31, VAR_18, VAR_29->u.ht.stbc);
 FUNC_4(&VAR_31, VAR_16, VAR_29->rate_mode);
 FUNC_3(VAR_30, 0, VAR_31);

 FUNC_2(VAR_30, 1, &VAR_31);
 FUNC_4(&VAR_31, VAR_21,
      FUNC_5(VAR_0, &VAR_29->flags));
 FUNC_4(&VAR_31, VAR_24,
      FUNC_5(VAR_2, &VAR_29->flags));
 FUNC_4(&VAR_31, VAR_22, VAR_29->u.ht.ba_size);
 FUNC_4(&VAR_31, VAR_27,
      FUNC_5(VAR_1, &VAR_29->flags) ?
      VAR_29->key_idx : VAR_29->u.ht.wcid);
 FUNC_4(&VAR_31, VAR_23,
      VAR_29->length);
 FUNC_4(&VAR_31, VAR_26, VAR_28->queue->qid);
 FUNC_4(&VAR_31, VAR_25, (VAR_28->entry_idx % 3) + 1);
 FUNC_3(VAR_30, 1, VAR_31);
 for (VAR_32 = 2; VAR_32 < VAR_28->queue->winfo_size / sizeof(__le32); VAR_32++)
  FUNC_0(VAR_30, VAR_32, 0);
}
