
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_blocknr; int b_data; int b_history; scalar_t__ b_state; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int *,struct inode*,int ,int,struct buffer_head*,int) ;
 int FUNC_9 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (int ,int ,int ) ;
 struct buffer_head* FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;

struct buffer_head *FUNC_16(handle_t *VAR_2, struct inode *VAR_3,
    ext4_lblk_t VAR_4, int VAR_5, int *VAR_6)
{
 struct buffer_head VAR_7;
 int VAR_8 = 0, VAR_9;
 int VAR_10 = 0;

 FUNC_1(VAR_2 != ((void*)0) || VAR_5 == 0);

 VAR_7.b_state = 0;
 VAR_7.b_blocknr = -1000;
 FUNC_6(&VAR_7.b_history);
 if (VAR_5)
  VAR_10 |= VAR_1;
 VAR_9 = FUNC_8(VAR_2, VAR_3, VAR_4, 1, &VAR_7, VAR_10);




 if (VAR_9 > 0) {
  if (VAR_9 > 1)
   FUNC_2(1);
  VAR_9 = 0;
 }
 *VAR_6 = VAR_9;
 if (!VAR_9 && FUNC_4(&VAR_7)) {
  struct buffer_head *VAR_11;
  VAR_11 = FUNC_13(VAR_3->i_sb, VAR_7.b_blocknr);
  if (!VAR_11) {
   *VAR_6 = -VAR_0;
   goto err;
  }
  if (FUNC_5(&VAR_7)) {
   FUNC_1(VAR_5 != 0);
   FUNC_1(VAR_2 != ((void*)0));
   FUNC_11(VAR_11);
   FUNC_0(VAR_11, "call get_create_access");
   VAR_8 = FUNC_10(VAR_2, VAR_11);
   if (!VAR_8 && !FUNC_7(VAR_11)) {
    FUNC_12(VAR_11->b_data, 0, VAR_3->i_sb->s_blocksize);
    FUNC_14(VAR_11);
   }
   FUNC_15(VAR_11);
   FUNC_0(VAR_11, "call ext4_handle_dirty_metadata");
   VAR_9 = FUNC_9(VAR_2, VAR_3, VAR_11);
   if (!VAR_8)
    VAR_8 = VAR_9;
  } else {
   FUNC_0(VAR_11, "not a new buffer");
  }
  if (VAR_8) {
   *VAR_6 = VAR_8;
   FUNC_3(VAR_11);
   VAR_11 = ((void*)0);
  }
  return VAR_11;
 }
err:
 return ((void*)0);
}
