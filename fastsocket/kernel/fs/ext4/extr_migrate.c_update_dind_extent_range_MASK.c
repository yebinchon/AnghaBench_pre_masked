
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_blocks_struct {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef unsigned long ext4_lblk_t ;
typedef int ext4_fsblk_t ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,struct inode*,int ,unsigned long*,struct list_blocks_struct*) ;

__attribute__((used)) static int FUNC_4(handle_t *VAR_1, struct inode *VAR_2,
        ext4_fsblk_t VAR_3, ext4_lblk_t *VAR_4,
        struct list_blocks_struct *VAR_5)
{
 struct buffer_head *VAR_6;
 __le32 *VAR_7;
 int VAR_8, VAR_9 = 0;
 ext4_lblk_t VAR_10 = *VAR_4;
 unsigned long VAR_11 = VAR_2->i_sb->s_blocksize >> 2;

 if (!VAR_3) {

  *VAR_4 += VAR_11 * VAR_11;
  return 0;
 }
 VAR_6 = FUNC_2(VAR_2->i_sb, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = (__le32 *)VAR_6->b_data;
 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  if (VAR_7[VAR_8]) {
   VAR_9 = FUNC_3(VAR_1, VAR_2,
      FUNC_0(VAR_7[VAR_8]),
      &VAR_10, VAR_5);
   if (VAR_9)
    break;
  } else {

   VAR_10 += VAR_11;
  }
 }


 *VAR_4 = VAR_10;
 FUNC_1(VAR_6);
 return VAR_9;

}
