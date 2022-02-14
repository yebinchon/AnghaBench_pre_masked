
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_ext_path {int * p_ext; } ;
typedef int ext4_lblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ext4_ext_path*) ;
 int FUNC_1 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_2 (struct inode*,int ,struct ext4_ext_path*) ;
 size_t FUNC_3 (struct inode*) ;

__attribute__((used)) static inline int
FUNC_4(struct inode *VAR_1, ext4_lblk_t VAR_2,
  struct ext4_ext_path **VAR_3)
{
 int VAR_4 = 0;

 *VAR_3 = FUNC_2(VAR_1, VAR_2, *VAR_3);
 if (FUNC_0(*VAR_3)) {
  VAR_4 = FUNC_1(*VAR_3);
  *VAR_3 = ((void*)0);
 } else if ((*VAR_3)[FUNC_3(VAR_1)].p_ext == ((void*)0))
  VAR_4 = -VAR_0;

 return VAR_4;
}
