
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vattr ;
struct inode {int i_sb; int i_ctime; } ;
struct iattr {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct coda_vattr {int va_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct iattr*,struct coda_vattr*) ;
 int FUNC_3 (struct inode*,struct coda_vattr*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct coda_vattr*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,struct coda_vattr*) ;

int FUNC_8(struct dentry *VAR_2, struct iattr *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 struct coda_vattr VAR_5;
 int VAR_6;

 FUNC_4();

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));

 VAR_4->i_ctime = VAR_0;
 FUNC_2(VAR_3, &VAR_5);
 VAR_5.va_type = VAR_1;


 VAR_6 = FUNC_7(VAR_4->i_sb, FUNC_1(VAR_4), &VAR_5);

 if ( !VAR_6 ) {
         FUNC_3(VAR_4, &VAR_5);
  FUNC_0(VAR_4);
 }

 FUNC_6();

 return VAR_6;
}
