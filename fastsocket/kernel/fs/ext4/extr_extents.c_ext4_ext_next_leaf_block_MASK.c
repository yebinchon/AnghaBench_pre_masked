
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_ext_path {int p_depth; TYPE_1__* p_idx; int p_hdr; } ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int ei_block; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ext4_lblk_t FUNC_3(struct inode *VAR_1,
     struct ext4_ext_path *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2 == ((void*)0));
 VAR_3 = VAR_2->p_depth;


 if (VAR_3 == 0)
  return VAR_0;


 VAR_3--;

 while (VAR_3 >= 0) {
  if (VAR_2[VAR_3].p_idx !=
    FUNC_1(VAR_2[VAR_3].p_hdr))
   return (ext4_lblk_t)
    FUNC_2(VAR_2[VAR_3].p_idx[1].ei_block);
  VAR_3--;
 }

 return VAR_0;
}
