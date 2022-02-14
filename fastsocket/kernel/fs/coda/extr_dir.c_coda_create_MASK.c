
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct coda_vattr {int dummy; } ;
struct CodaFid {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int ,struct CodaFid*,struct coda_vattr*) ;
 scalar_t__ FUNC_5 (char const*,int) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*,struct inode*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ,char const*,int,int ,int,struct CodaFid*,struct coda_vattr*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3, struct nameidata *VAR_4)
{
        int VAR_5=0;
 const char *VAR_6=VAR_2->d_name.name;
 int VAR_7=VAR_2->d_name.len;
 struct inode *VAR_8;
 struct CodaFid VAR_9;
 struct coda_vattr VAR_10;

 FUNC_9();

 if (FUNC_6(VAR_1) && FUNC_5(VAR_6, VAR_7)) {
  FUNC_10();
  return -VAR_0;
 }

 VAR_5 = FUNC_11(VAR_1->i_sb, FUNC_3(VAR_1), VAR_6, VAR_7,
    0, VAR_3, &VAR_9, &VAR_10);

        if ( VAR_5 ) {
  FUNC_10();
  FUNC_7(VAR_2);
  return VAR_5;
 }

 VAR_8 = FUNC_4(VAR_1->i_sb, &VAR_9, &VAR_10);
 if ( FUNC_0(VAR_8) ) {
  FUNC_10();
  FUNC_7(VAR_2);
  return FUNC_1(VAR_8);
 }


 FUNC_2(VAR_1);
 FUNC_10();
 FUNC_8(VAR_2, VAR_8);
 return 0;
}
