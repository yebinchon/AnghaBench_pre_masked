
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int ext4_lblk_t ;
typedef int ext4_fsblk_t ;
typedef int Indirect ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int *) ;

__attribute__((used)) static ext4_fsblk_t FUNC_1(struct inode *VAR_1, ext4_lblk_t VAR_2,
       Indirect *VAR_3)
{
 ext4_fsblk_t VAR_4;





 VAR_4 = FUNC_0(VAR_1, VAR_3);
 VAR_4 = VAR_4 & VAR_0;
 return VAR_4;
}
