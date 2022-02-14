
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_page {size_t headcnt; size_t cnt; int idx; struct bio* bio; struct mm_dma_desc* desc; } ;
struct mm_dma_desc {int transfer_size; int local_addr; int data_dma_handle; int sem_control_bits; } ;
struct cardinfo {unsigned int dma_status; size_t Active; int init_size; int mm_size; int lock; scalar_t__ check_batteries; TYPE_1__* dev; struct mm_page* mm_pages; } ;
struct bio {scalar_t__ bi_vcnt; scalar_t__ bi_idx; struct bio* bi_next; int bi_rw; int bi_flags; } ;
struct TYPE_4__ {int bv_len; } ;
struct TYPE_3__ {int dev; } ;


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
 int FUNC_0 (struct cardinfo*) ;
 int FUNC_1 (struct bio*,int ) ;
 TYPE_2__* FUNC_2 (struct bio*,int) ;
 int FUNC_3 (struct cardinfo*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_13 ;
 int FUNC_5 (int ,int *,char*,...) ;
 int FUNC_6 (struct cardinfo*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct cardinfo*) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct mm_page*) ;
 int FUNC_12 (struct cardinfo*,int ,int ) ;
 int FUNC_13 (struct cardinfo*,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(unsigned long VAR_14)
{






 struct mm_page *VAR_15;
 struct bio *VAR_16 = ((void*)0);
 struct cardinfo *VAR_17 = (struct cardinfo *)VAR_14;
 unsigned int VAR_18 = VAR_17->dma_status;

 FUNC_14(&VAR_17->lock);
 if (VAR_17->Active < 0)
  goto out_unlock;
 VAR_15 = &VAR_17->mm_pages[VAR_17->Active];

 while (VAR_15->headcnt < VAR_15->cnt) {
  struct bio *VAR_19 = VAR_15->bio;
  struct mm_dma_desc *VAR_20 = &VAR_15->desc[VAR_15->headcnt];
  int VAR_21 = FUNC_7(VAR_20->sem_control_bits);
  int VAR_22 = 0;
  int VAR_23;

  if (!(VAR_21 & VAR_3)) {
   VAR_21 = VAR_18;
   VAR_22 = 1;
  }
  VAR_15->headcnt++;
  VAR_23 = VAR_15->idx;
  VAR_15->idx++;
  if (VAR_15->idx >= VAR_19->bi_vcnt) {
   VAR_15->bio = VAR_19->bi_next;
   if (VAR_15->bio)
    VAR_15->idx = VAR_15->bio->bi_idx;
  }

  FUNC_9(VAR_17->dev, VAR_20->data_dma_handle,
          FUNC_2(VAR_19, VAR_23)->bv_len,
     (VAR_21 & VAR_5) ?
    VAR_12 : VAR_11);
  if (VAR_21 & VAR_4) {

   FUNC_4(VAR_1, &VAR_19->bi_flags);
   FUNC_5(VAR_7, &VAR_17->dev->dev,
    "I/O error on sector %d/%d\n",
    FUNC_7(VAR_20->local_addr)>>9,
    FUNC_7(VAR_20->transfer_size));
   FUNC_6(VAR_17, VAR_21);
  } else if (FUNC_16(VAR_0, &VAR_19->bi_rw) &&
      FUNC_7(VAR_20->local_addr) >> 9 ==
    VAR_17->init_size) {
   VAR_17->init_size += FUNC_7(VAR_20->transfer_size) >> 9;
   if (VAR_17->init_size >> 1 >= VAR_17->mm_size) {
    FUNC_5(VAR_6, &VAR_17->dev->dev,
     "memory now initialised\n");
    FUNC_13(VAR_17, VAR_10, 1);
   }
  }
  if (VAR_19 != VAR_15->bio) {
   VAR_19->bi_next = VAR_16;
   VAR_16 = VAR_19;
  }

  if (VAR_22)
   break;
 }

 if (VAR_13 & VAR_2)
  FUNC_12(VAR_17, VAR_9, VAR_8);

 if (VAR_17->check_batteries) {
  VAR_17->check_batteries = 0;
  FUNC_3(VAR_17);
 }
 if (VAR_15->headcnt >= VAR_15->cnt) {
  FUNC_11(VAR_15);
  VAR_17->Active = -1;
  FUNC_0(VAR_17);
 } else {

  FUNC_10("do some more\n");
  FUNC_8(VAR_17);
 }
 out_unlock:
 FUNC_15(&VAR_17->lock);

 while (VAR_16) {
  struct bio *VAR_24 = VAR_16;

  VAR_16 = VAR_24->bi_next;
  VAR_24->bi_next = ((void*)0);
  FUNC_1(VAR_24, 0);
 }
}
