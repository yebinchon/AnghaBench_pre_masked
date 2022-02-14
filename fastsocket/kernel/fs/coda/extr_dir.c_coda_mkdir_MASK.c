
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct coda_vattr {int va_mode; } ;
struct CodaFid {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (int ,struct CodaFid*,struct coda_vattr*) ;
 scalar_t__ FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*,struct inode*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,char const*,int,struct CodaFid*,struct coda_vattr*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 struct inode *VAR_4;
 struct coda_vattr VAR_5;
 const char *VAR_6 = VAR_2->d_name.name;
 int VAR_7 = VAR_2->d_name.len;
 int VAR_8;
 struct CodaFid VAR_9;

 FUNC_10();

 if (FUNC_7(VAR_1) && FUNC_6(VAR_6, VAR_7)) {
  FUNC_11();
  return -VAR_0;
 }

 VAR_5.va_mode = VAR_3;
 VAR_8 = FUNC_12(VAR_1->i_sb, FUNC_4(VAR_1),
          VAR_6, VAR_7, &VAR_9, &VAR_5);

        if ( VAR_8 ) {
  FUNC_11();
  FUNC_8(VAR_2);
  return VAR_8;
        }

 VAR_4 = FUNC_5(VAR_1->i_sb, &VAR_9, &VAR_5);
 if ( FUNC_0(VAR_4) ) {
  FUNC_11();
  FUNC_8(VAR_2);
  return FUNC_1(VAR_4);
 }


 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_11();
 FUNC_9(VAR_2, VAR_4);
 return 0;
}
