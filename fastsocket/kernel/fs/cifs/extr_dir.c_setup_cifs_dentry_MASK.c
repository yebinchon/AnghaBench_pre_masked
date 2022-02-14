
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int * d_op; } ;
struct cifs_tcon {scalar_t__ nocase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*) ;

__attribute__((used)) static void FUNC_1(struct cifs_tcon *VAR_2,
         struct dentry *VAR_3,
         struct inode *VAR_4)
{
 if (VAR_2->nocase)
  VAR_3->d_op = &VAR_0;
 else
  VAR_3->d_op = &VAR_1;
 FUNC_0(VAR_3, VAR_4);
}
