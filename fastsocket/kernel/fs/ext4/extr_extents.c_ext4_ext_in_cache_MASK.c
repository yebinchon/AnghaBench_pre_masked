
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_len; int ee_block; } ;
struct ext4_ext_cache {int ec_len; int ec_start; int ec_block; } ;
typedef int ext4_lblk_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ,struct ext4_ext_cache*) ;
 int FUNC_3 (struct ext4_extent*,int ) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_0, ext4_lblk_t VAR_1,
   struct ext4_extent *VAR_2)
{
 struct ext4_ext_cache VAR_3;
 int VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3);
 if (VAR_4) {
  VAR_2->ee_block = FUNC_1(VAR_3.ec_block);
  FUNC_3(VAR_2, VAR_3.ec_start);
  VAR_2->ee_len = FUNC_0(VAR_3.ec_len);
 }

 return VAR_4;
}
