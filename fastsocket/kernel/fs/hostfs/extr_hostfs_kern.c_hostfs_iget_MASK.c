
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; } ;


 long VAR_0 ;
 struct inode* FUNC_0 (long) ;
 int VAR_1 ;
 long FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_2)
{
 struct inode *VAR_3;
 long VAR_4;

 VAR_3 = FUNC_3(VAR_2, 0);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 if (VAR_3->i_state & VAR_1) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 < 0) {
   FUNC_2(VAR_3);
   return FUNC_0(VAR_4);
  }
  FUNC_4(VAR_3);
 }
 return VAR_3;
}
