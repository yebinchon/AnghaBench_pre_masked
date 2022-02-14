
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mode; TYPE_2__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext2_fsblk_t ;
typedef void* __le32 ;
struct TYPE_5__ {int s_blocksize; } ;
struct TYPE_4__ {void** p; void* key; struct buffer_head* bh; } ;
typedef TYPE_1__ Indirect ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,int ,int,int,int *,int*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*,struct inode*) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 struct buffer_head* FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_0,
   int VAR_1, int *VAR_2, ext2_fsblk_t VAR_3,
   int *VAR_4, Indirect *VAR_5)
{
 int VAR_6 = VAR_0->i_sb->s_blocksize;
 int VAR_7, VAR_8 = 0;
 int VAR_9 = 0;
 struct buffer_head *VAR_10;
 int VAR_11;
 ext2_fsblk_t VAR_12[4];
 ext2_fsblk_t VAR_13;

 VAR_11 = FUNC_3(VAR_0, VAR_3, VAR_1,
    *VAR_2, VAR_12, &VAR_9);
 if (VAR_9)
  return VAR_9;

 VAR_5[0].key = FUNC_2(VAR_12[0]);



 for (VAR_8 = 1; VAR_8 <= VAR_1; VAR_8++) {





  VAR_10 = FUNC_7(VAR_0->i_sb, VAR_12[VAR_8-1]);
  VAR_5[VAR_8].bh = VAR_10;
  FUNC_4(VAR_10);
  FUNC_6(VAR_10->b_data, 0, VAR_6);
  VAR_5[VAR_8].p = (__le32 *) VAR_10->b_data + VAR_4[VAR_8];
  VAR_5[VAR_8].key = FUNC_2(VAR_12[VAR_8]);
  *VAR_5[VAR_8].p = VAR_5[VAR_8].key;
  if ( VAR_8 == VAR_1) {
   VAR_13 = VAR_12[VAR_8];





   for (VAR_7=1; VAR_7 < VAR_11; VAR_7++)
    *(VAR_5[VAR_8].p + VAR_7) = FUNC_2(++VAR_13);
  }
  FUNC_8(VAR_10);
  FUNC_10(VAR_10);
  FUNC_5(VAR_10, VAR_0);




  if (FUNC_1(VAR_0->i_mode) && FUNC_0(VAR_0))
   FUNC_9(VAR_10);
 }
 *VAR_2 = VAR_11;
 return VAR_9;
}
