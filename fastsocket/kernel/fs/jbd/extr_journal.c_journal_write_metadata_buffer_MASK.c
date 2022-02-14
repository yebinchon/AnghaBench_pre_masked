
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct page {int dummy; } ;
struct journal_head {char* b_frozen_data; int * b_transaction; } ;
struct buffer_head {char* b_data; unsigned int b_blocknr; int b_bdev; int b_size; struct page* b_page; int b_count; scalar_t__ b_state; } ;
struct TYPE_7__ {int j_list_lock; int j_dev; } ;
typedef TYPE_2__ journal_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct buffer_head*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct journal_head*,TYPE_1__*,int ) ;
 struct buffer_head* FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct buffer_head*,int *,int *) ;
 char* FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 struct buffer_head* FUNC_12 (struct journal_head*) ;
 struct journal_head* FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct journal_head*,TYPE_1__*,int ) ;
 char* FUNC_15 (struct page*,int ) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (char*,char*,int ) ;
 unsigned int FUNC_18 (char*) ;
 int FUNC_19 (struct buffer_head*,struct page*,unsigned int) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 struct page* FUNC_24 (char*) ;

int FUNC_25(transaction_t *VAR_6,
      struct journal_head *VAR_7,
      struct journal_head **VAR_8,
      unsigned int VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;
 char *VAR_13;
 struct buffer_head *VAR_14;
 struct journal_head *VAR_15;
 struct page *VAR_16;
 unsigned int VAR_17;
 struct buffer_head *VAR_18 = FUNC_12(VAR_7);
 journal_t *VAR_19 = VAR_6->t_journal;
 FUNC_1(VAR_18, FUNC_5(VAR_18));

 VAR_14 = FUNC_3(VAR_2|VAR_5);

 VAR_14->b_state = 0;
 FUNC_7(VAR_14, ((void*)0), ((void*)0));
 FUNC_4(&VAR_14->b_count, 1);
 VAR_15 = FUNC_13(VAR_14);





 FUNC_10(VAR_18);
repeat:
 if (VAR_7->b_frozen_data) {
  VAR_11 = 1;
  VAR_16 = FUNC_24(VAR_7->b_frozen_data);
  VAR_17 = FUNC_18(VAR_7->b_frozen_data);
 } else {
  VAR_16 = FUNC_12(VAR_7)->b_page;
  VAR_17 = FUNC_18(FUNC_12(VAR_7)->b_data);
 }

 VAR_13 = FUNC_15(VAR_16, VAR_4);



 if (*((__be32 *)(VAR_13 + VAR_17)) ==
    FUNC_6(VAR_3)) {
  VAR_10 = 1;
  VAR_12 = 1;
 }
 FUNC_16(VAR_13, VAR_4);




 if (VAR_10 && !VAR_11) {
  char *VAR_20;

  FUNC_11(VAR_18);
  VAR_20 = FUNC_8(VAR_18->b_size, VAR_2);
  FUNC_10(VAR_18);
  if (VAR_7->b_frozen_data) {
   FUNC_9(VAR_20, VAR_18->b_size);
   goto repeat;
  }

  VAR_7->b_frozen_data = VAR_20;
  VAR_13 = FUNC_15(VAR_16, VAR_4);
  FUNC_17(VAR_20, VAR_13 + VAR_17, FUNC_12(VAR_7)->b_size);
  FUNC_16(VAR_13, VAR_4);

  VAR_16 = FUNC_24(VAR_20);
  VAR_17 = FUNC_18(VAR_20);
  VAR_11 = 1;
 }





 if (VAR_12) {
  VAR_13 = FUNC_15(VAR_16, VAR_4);
  *((unsigned int *)(VAR_13 + VAR_17)) = 0;
  FUNC_16(VAR_13, VAR_4);
 }

 FUNC_19(VAR_14, VAR_16, VAR_17);
 VAR_15->b_transaction = ((void*)0);
 VAR_14->b_size = FUNC_12(VAR_7)->b_size;
 VAR_14->b_bdev = VAR_6->t_journal->j_dev;
 VAR_14->b_blocknr = VAR_9;
 FUNC_21(VAR_14);
 FUNC_20(VAR_14);

 *VAR_8 = VAR_15;






 FUNC_0(VAR_7, "file as BJ_Shadow");
 FUNC_22(&VAR_19->j_list_lock);
 FUNC_2(VAR_7, VAR_6, VAR_1);
 FUNC_23(&VAR_19->j_list_lock);
 FUNC_11(VAR_18);

 FUNC_0(VAR_15, "file as BJ_IO");
 FUNC_14(VAR_15, VAR_6, VAR_0);

 return VAR_12 | (VAR_11 << 1);
}
