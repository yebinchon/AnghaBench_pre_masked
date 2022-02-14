
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; scalar_t__ i_blocks; } ;
struct ext4_inode_info {int i_data_sem; int * i_data; } ;
typedef int handle_t ;
typedef int __le32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (int *,struct inode*,int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_6, struct inode *VAR_7,
      struct inode *VAR_8)
{
 int VAR_9;
 __le32 VAR_10[3];
 struct ext4_inode_info *VAR_11 = FUNC_0(VAR_7);
 struct ext4_inode_info *VAR_12 = FUNC_0(VAR_8);





 VAR_9 = FUNC_3(VAR_6, 1);
 if (VAR_9) {
  VAR_9 = FUNC_4(VAR_6, 1);
  if (VAR_9)
   goto err_out;
 }

 VAR_10[0] = VAR_11->i_data[VAR_2];
 VAR_10[1] = VAR_11->i_data[VAR_1];
 VAR_10[2] = VAR_11->i_data[VAR_5];

 FUNC_1(&FUNC_0(VAR_7)->i_data_sem);





 if (!FUNC_7(VAR_7, VAR_4)) {
  VAR_9 = -VAR_0;
  FUNC_12(&FUNC_0(VAR_7)->i_data_sem);
  goto err_out;
 } else
  FUNC_2(VAR_7, VAR_4);




 FUNC_6(VAR_7, VAR_3);
 FUNC_9(VAR_11->i_data, VAR_12->i_data, sizeof(VAR_11->i_data));
 FUNC_10(&VAR_7->i_lock);
 VAR_7->i_blocks += VAR_8->i_blocks;
 FUNC_11(&VAR_7->i_lock);
 FUNC_12(&FUNC_0(VAR_7)->i_data_sem);





 VAR_9 = FUNC_8(VAR_6, VAR_7, VAR_10);
 FUNC_5(VAR_6, VAR_7);

err_out:
 return VAR_9;
}
