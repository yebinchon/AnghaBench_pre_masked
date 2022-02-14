
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_blocknr; int b_data; int b_history; scalar_t__ b_state; } ;
typedef int handle_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int *,struct inode*,long,int,struct buffer_head*,int) ;
 int FUNC_9 (int *,struct buffer_head*) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (int ,int ,int ) ;
 struct buffer_head* FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;

struct buffer_head *FUNC_16(handle_t *VAR_1, struct inode *VAR_2,
    long VAR_3, int VAR_4, int *VAR_5)
{
 struct buffer_head VAR_6;
 int VAR_7 = 0, VAR_8;

 FUNC_1(VAR_1 != ((void*)0) || VAR_4 == 0);

 VAR_6.b_state = 0;
 VAR_6.b_blocknr = -1000;
 FUNC_6(&VAR_6.b_history);
 VAR_8 = FUNC_8(VAR_1, VAR_2, VAR_3, 1,
     &VAR_6, VAR_4);




 if (VAR_8 > 0) {
  if (VAR_8 > 1)
   FUNC_2(1);
  VAR_8 = 0;
 }
 *VAR_5 = VAR_8;
 if (!VAR_8 && FUNC_4(&VAR_6)) {
  struct buffer_head *VAR_9;
  VAR_9 = FUNC_13(VAR_2->i_sb, VAR_6.b_blocknr);
  if (!VAR_9) {
   *VAR_5 = -VAR_0;
   goto err;
  }
  if (FUNC_5(&VAR_6)) {
   FUNC_1(VAR_4 != 0);
   FUNC_1(VAR_1 != ((void*)0));
   FUNC_11(VAR_9);
   FUNC_0(VAR_9, "call get_create_access");
   VAR_7 = FUNC_10(VAR_1, VAR_9);
   if (!VAR_7 && !FUNC_7(VAR_9)) {
    FUNC_12(VAR_9->b_data,0,VAR_2->i_sb->s_blocksize);
    FUNC_14(VAR_9);
   }
   FUNC_15(VAR_9);
   FUNC_0(VAR_9, "call ext3_journal_dirty_metadata");
   VAR_8 = FUNC_9(VAR_1, VAR_9);
   if (!VAR_7)
    VAR_7 = VAR_8;
  } else {
   FUNC_0(VAR_9, "not a new buffer");
  }
  if (VAR_7) {
   *VAR_5 = VAR_7;
   FUNC_3(VAR_9);
   VAR_9 = ((void*)0);
  }
  return VAR_9;
 }
err:
 return ((void*)0);
}
