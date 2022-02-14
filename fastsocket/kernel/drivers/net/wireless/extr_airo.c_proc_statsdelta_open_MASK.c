
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,struct file*,int ) ;

__attribute__((used)) static int FUNC_1( struct inode *VAR_3,
     struct file *VAR_4 ) {
 if (VAR_4->f_mode&VAR_0) {
  return FUNC_0(VAR_3, VAR_4, VAR_2);
 }
 return FUNC_0(VAR_3, VAR_4, VAR_1);
}
