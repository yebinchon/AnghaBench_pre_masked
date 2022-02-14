
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent {void* ee_len; int ee_block; } ;
struct ext4_ext_path {TYPE_1__* p_ext; } ;
typedef scalar_t__ ext4_lblk_t ;
struct TYPE_2__ {int ee_block; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (struct ext4_extent*) ;
 scalar_t__ FUNC_2 (struct ext4_ext_path*) ;
 unsigned int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int ) ;

unsigned int FUNC_5(struct inode *VAR_1,
        struct ext4_extent *VAR_2,
        struct ext4_ext_path *VAR_3)
{
 ext4_lblk_t VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8 = 0;

 VAR_4 = FUNC_4(VAR_2->ee_block);
 VAR_7 = FUNC_1(VAR_2);
 VAR_6 = FUNC_3(VAR_1);
 if (!VAR_3[VAR_6].p_ext)
  goto out;
 VAR_5 = FUNC_4(VAR_3[VAR_6].p_ext->ee_block);





 if (VAR_5 < VAR_4) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 == VAR_0)
   goto out;
 }


 if (VAR_4 + VAR_7 < VAR_4) {
  VAR_7 = VAR_0 - VAR_4;
  VAR_2->ee_len = FUNC_0(VAR_7);
  VAR_8 = 1;
 }


 if (VAR_4 + VAR_7 > VAR_5) {
  VAR_2->ee_len = FUNC_0(VAR_5 - VAR_4);
  VAR_8 = 1;
 }
out:
 return VAR_8;
}
