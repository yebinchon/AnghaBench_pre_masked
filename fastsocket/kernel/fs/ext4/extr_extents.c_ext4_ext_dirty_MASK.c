
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_ext_path {scalar_t__ p_bh; } ;
typedef int handle_t ;


 int FUNC_0 (int *,struct inode*,scalar_t__) ;
 int FUNC_1 (int *,struct inode*) ;

__attribute__((used)) static int FUNC_2(handle_t *VAR_0, struct inode *VAR_1,
    struct ext4_ext_path *VAR_2)
{
 int VAR_3;
 if (VAR_2->p_bh) {

  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2->p_bh);
 } else {

  VAR_3 = FUNC_1(VAR_0, VAR_1);
 }
 return VAR_3;
}
