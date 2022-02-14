
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct page {int dummy; } ;
struct journal_head {char* b_frozen_data; int * b_transaction; int b_triggers; int b_frozen_triggers; } ;
struct buffer_head {char* b_data; unsigned long long b_blocknr; int b_bdev; int b_size; struct page* b_page; int b_count; scalar_t__ b_state; } ;
struct TYPE_7__ {int j_list_lock; int j_dev; } ;
typedef TYPE_2__ journal_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct buffer_head*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct journal_head*,TYPE_1__*,int ) ;
 struct buffer_head* FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct buffer_head*,int *,int *) ;
 char* FUNC_8 (int ,int) ;
 int FUNC_9 (struct journal_head*,char*,int ) ;
 int FUNC_10 (char*,int ) ;
 struct journal_head* FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct journal_head*,TYPE_1__*,int ) ;
 int FUNC_13 (struct journal_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 struct buffer_head* FUNC_16 (struct journal_head*) ;
 char* FUNC_17 (struct page*,int ) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (char*,char*,int ) ;
 unsigned int FUNC_20 (char*) ;
 int FUNC_21 (struct buffer_head*,struct page*,unsigned int) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 struct page* FUNC_26 (char*) ;

int FUNC_27(transaction_t *VAR_7,
      struct journal_head *VAR_8,
      struct journal_head **VAR_9,
      unsigned long long VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 char *VAR_14;
 struct buffer_head *VAR_15;
 struct journal_head *VAR_16;
 struct page *VAR_17;
 unsigned int VAR_18;
 struct buffer_head *VAR_19 = FUNC_16(VAR_8);
 journal_t *VAR_20 = VAR_7->t_journal;
 FUNC_1(VAR_19, FUNC_5(VAR_19));

 VAR_15 = FUNC_3(VAR_3|VAR_6);

 VAR_15->b_state = 0;
 FUNC_7(VAR_15, ((void*)0), ((void*)0));
 FUNC_4(&VAR_15->b_count, 1);
 VAR_16 = FUNC_11(VAR_15);





 FUNC_14(VAR_19);
repeat:
 if (VAR_8->b_frozen_data) {
  VAR_12 = 1;
  VAR_17 = FUNC_26(VAR_8->b_frozen_data);
  VAR_18 = FUNC_20(VAR_8->b_frozen_data);
 } else {
  VAR_17 = FUNC_16(VAR_8)->b_page;
  VAR_18 = FUNC_20(FUNC_16(VAR_8)->b_data);
 }

 VAR_14 = FUNC_17(VAR_17, VAR_5);






 if (!VAR_12)
  FUNC_9(VAR_8, VAR_14 + VAR_18,
        VAR_8->b_triggers);




 if (*((__be32 *)(VAR_14 + VAR_18)) ==
    FUNC_6(VAR_4)) {
  VAR_11 = 1;
  VAR_13 = 1;
 }
 FUNC_18(VAR_14, VAR_5);




 if (VAR_11 && !VAR_12) {
  char *VAR_21;

  FUNC_15(VAR_19);
  VAR_21 = FUNC_8(VAR_19->b_size, VAR_3);
  if (!VAR_21) {
   FUNC_13(VAR_16);
   return -VAR_2;
  }
  FUNC_14(VAR_19);
  if (VAR_8->b_frozen_data) {
   FUNC_10(VAR_21, VAR_19->b_size);
   goto repeat;
  }

  VAR_8->b_frozen_data = VAR_21;
  VAR_14 = FUNC_17(VAR_17, VAR_5);
  FUNC_19(VAR_21, VAR_14 + VAR_18, FUNC_16(VAR_8)->b_size);
  FUNC_18(VAR_14, VAR_5);

  VAR_17 = FUNC_26(VAR_21);
  VAR_18 = FUNC_20(VAR_21);
  VAR_12 = 1;






  VAR_8->b_frozen_triggers = VAR_8->b_triggers;
 }





 if (VAR_13) {
  VAR_14 = FUNC_17(VAR_17, VAR_5);
  *((unsigned int *)(VAR_14 + VAR_18)) = 0;
  FUNC_18(VAR_14, VAR_5);
 }

 FUNC_21(VAR_15, VAR_17, VAR_18);
 VAR_16->b_transaction = ((void*)0);
 VAR_15->b_size = FUNC_16(VAR_8)->b_size;
 VAR_15->b_bdev = VAR_7->t_journal->j_dev;
 VAR_15->b_blocknr = VAR_10;
 FUNC_23(VAR_15);
 FUNC_22(VAR_15);

 *VAR_9 = VAR_16;






 FUNC_0(VAR_8, "file as BJ_Shadow");
 FUNC_24(&VAR_20->j_list_lock);
 FUNC_2(VAR_8, VAR_7, VAR_1);
 FUNC_25(&VAR_20->j_list_lock);
 FUNC_15(VAR_19);

 FUNC_0(VAR_16, "file as BJ_IO");
 FUNC_12(VAR_16, VAR_7, VAR_0);

 return VAR_13 | (VAR_12 << 1);
}
