
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_8__ {struct buffer_head* bh; int key; int * p; } ;
typedef TYPE_1__ Indirect ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *,struct inode*,int ,int,int*,scalar_t__,int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,unsigned int,int) ;
 int FUNC_6 (struct inode*,int ,int *,int*) ;
 scalar_t__ FUNC_7 (struct inode*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (struct inode*,int,int *,TYPE_1__*,int*) ;
 int FUNC_9 (int *,struct inode*,int ,TYPE_1__*,int,int) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (int *,struct inode*,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct buffer_head*,int ,scalar_t__) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_16(handle_t *VAR_3, struct inode *VAR_4,
          ext4_lblk_t VAR_5, unsigned int VAR_6,
          struct buffer_head *VAR_7,
          int VAR_8)
{
 int VAR_9 = -VAR_0;
 ext4_lblk_t VAR_10[4];
 Indirect VAR_11[4];
 Indirect *VAR_12;
 ext4_fsblk_t VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17 = 0;
 ext4_fsblk_t VAR_18 = 0;

 FUNC_1(!(FUNC_10(VAR_4, VAR_2)));
 FUNC_1(VAR_3 != ((void*)0) || (VAR_8 & VAR_1) == 0);
 VAR_16 = FUNC_6(VAR_4, VAR_5, VAR_10,
       &VAR_15);

 if (VAR_16 == 0)
  goto out;

 VAR_12 = FUNC_8(VAR_4, VAR_16, VAR_10, VAR_11, &VAR_9);


 if (!VAR_12) {
  VAR_18 = FUNC_12(VAR_11[VAR_16 - 1].key);
  FUNC_3(VAR_7);
  VAR_17++;

  while (VAR_17 < VAR_6 && VAR_17 <= VAR_15) {
   ext4_fsblk_t VAR_19;

   VAR_19 = FUNC_12(*(VAR_11[VAR_16-1].p + VAR_17));

   if (VAR_19 == VAR_18 + VAR_17)
    VAR_17++;
   else
    break;
  }
  goto got_it;
 }


 if ((VAR_8 & VAR_1) == 0 || VAR_9 == -VAR_0)
  goto cleanup;




 VAR_13 = FUNC_7(VAR_4, VAR_5, VAR_12);


 VAR_14 = (VAR_11 + VAR_16) - VAR_12 - 1;





 VAR_17 = FUNC_5(VAR_12, VAR_14,
     VAR_6, VAR_15);



 VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_14,
    &VAR_17, VAR_13,
    VAR_10 + (VAR_12 - VAR_11), VAR_12);
 if (!VAR_9)
  VAR_9 = FUNC_9(VAR_3, VAR_4, VAR_5,
      VAR_12, VAR_14, VAR_17);
 if (VAR_9)
  goto cleanup;

 FUNC_15(VAR_7);

 FUNC_11(VAR_3, VAR_4, 1);
got_it:
 FUNC_13(VAR_7, VAR_4->i_sb, FUNC_12(VAR_11[VAR_16-1].key));
 if (VAR_17 > VAR_15)
  FUNC_14(VAR_7);
 VAR_9 = VAR_17;

 VAR_12 = VAR_11 + VAR_16 - 1;
cleanup:
 while (VAR_12 > VAR_11) {
  FUNC_0(VAR_12->bh, "call brelse");
  FUNC_2(VAR_12->bh);
  VAR_12--;
 }
 FUNC_0(VAR_7, "returned");
out:
 return VAR_9;
}
