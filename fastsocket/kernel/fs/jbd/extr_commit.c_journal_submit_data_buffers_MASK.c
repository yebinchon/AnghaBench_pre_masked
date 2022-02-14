
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct journal_head* t_sync_datalist; } ;
typedef TYPE_1__ transaction_t ;
struct journal_head {scalar_t__ b_jlist; TYPE_1__* b_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_10__ {int j_wbufsize; int j_list_lock; struct buffer_head** j_wbuf; } ;
typedef TYPE_2__ journal_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct journal_head*,TYPE_1__*,int ) ;
 int FUNC_2 (struct journal_head*) ;
 struct journal_head* FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (TYPE_2__*,struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 struct buffer_head* FUNC_13 (struct journal_head*) ;
 int FUNC_14 (struct buffer_head**,int,int) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct buffer_head*) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_25 (struct buffer_head*) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_28(journal_t *VAR_3,
           transaction_t *VAR_4,
           int VAR_5)
{
 struct journal_head *VAR_6;
 struct buffer_head *VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 struct buffer_head **VAR_10 = VAR_3->j_wbuf;
 int VAR_11 = 0;
write_out_data:
 FUNC_8();
 FUNC_20(&VAR_3->j_list_lock);

 while (VAR_4->t_sync_datalist) {
  VAR_6 = VAR_4->t_sync_datalist;
  VAR_7 = FUNC_13(VAR_6);
  VAR_8 = 0;



  FUNC_9(VAR_7);





  if (FUNC_4(VAR_7)) {
   if (!FUNC_25(VAR_7)) {
    FUNC_0(VAR_7, "needs blocking lock");
    FUNC_22(&VAR_3->j_list_lock);
    FUNC_24(VAR_3,
           VAR_4);

    FUNC_14(VAR_10, VAR_9, VAR_5);
    VAR_9 = 0;
    FUNC_16(VAR_7);
    FUNC_20(&VAR_3->j_list_lock);
   }
   VAR_8 = 1;
  }

  if (!FUNC_10(VAR_3, VAR_7)) {
   FUNC_11(VAR_7);
   FUNC_20(&VAR_3->j_list_lock);
  }

  if (!FUNC_5(VAR_7) || FUNC_3(VAR_7) != VAR_6
   || VAR_6->b_transaction != VAR_4
   || VAR_6->b_jlist != VAR_1) {
   FUNC_12(VAR_7);
   if (VAR_8)
    FUNC_27(VAR_7);
   FUNC_0(VAR_7, "already cleaned up");
   FUNC_19(VAR_7);
   continue;
  }
  if (VAR_8 && FUNC_23(VAR_7)) {
   FUNC_0(VAR_7, "needs writeout, adding to array");
   VAR_10[VAR_9++] = VAR_7;
   FUNC_1(VAR_6, VAR_4,
      VAR_0);
   FUNC_12(VAR_7);
   if (VAR_9 == VAR_3->j_wbufsize) {
    FUNC_22(&VAR_3->j_list_lock);
    FUNC_24(VAR_3,
           VAR_4);
    FUNC_14(VAR_10, VAR_9, VAR_5);
    VAR_9 = 0;
    goto write_out_data;
   }
  } else if (!VAR_8 && FUNC_6(VAR_7)) {
   FUNC_1(VAR_6, VAR_4,
      VAR_0);
   FUNC_12(VAR_7);
   FUNC_18(VAR_7);
  } else {
   FUNC_0(VAR_7, "writeout complete: unfile");
   if (FUNC_26(!FUNC_7(VAR_7)))
    VAR_11 = -VAR_2;
   FUNC_2(VAR_6);
   FUNC_12(VAR_7);
   if (VAR_8)
    FUNC_27(VAR_7);
   FUNC_15(VAR_7);


   FUNC_18(VAR_7);
   FUNC_19(VAR_7);
  }

  if (FUNC_17() || FUNC_21(&VAR_3->j_list_lock)) {
   FUNC_22(&VAR_3->j_list_lock);
   goto write_out_data;
  }
 }
 FUNC_22(&VAR_3->j_list_lock);
 FUNC_24(VAR_3, VAR_4);
 FUNC_14(VAR_10, VAR_9, VAR_5);

 return VAR_11;
}
