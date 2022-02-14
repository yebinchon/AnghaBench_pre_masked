
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int fd; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 char* FUNC_4 (struct dentry*,int ) ;
 int FUNC_5 (char*,int,int,int,int,int,int,int,int,int) ;
 struct inode* FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct dentry*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct inode*,char*) ;

int FUNC_11(struct inode *VAR_12, struct dentry *VAR_13, int VAR_14,
    struct nameidata *VAR_15)
{
 struct inode *VAR_16;
 char *VAR_17;
 int VAR_18, VAR_19;

 VAR_16 = FUNC_6(VAR_12->i_sb);
 if (FUNC_1(VAR_16)) {
  VAR_18 = FUNC_2(VAR_16);
  goto out;
 }

 VAR_18 = FUNC_7(VAR_16, VAR_13);
 if (VAR_18)
  goto out_put;

 VAR_18 = -VAR_0;
 VAR_17 = FUNC_4(VAR_13, 0);
 if (VAR_17 == ((void*)0))
  goto out_put;

 VAR_19 = FUNC_5(VAR_17,
    VAR_14 & VAR_5, VAR_14 & VAR_8, VAR_14 & VAR_11,
    VAR_14 & VAR_3, VAR_14 & VAR_6, VAR_14 & VAR_9,
    VAR_14 & VAR_4, VAR_14 & VAR_7, VAR_14 & VAR_10);
 if (VAR_19 < 0)
  VAR_18 = VAR_19;
 else VAR_18 = FUNC_10(VAR_16, VAR_17);

 FUNC_9(VAR_17);
 if (VAR_18)
  goto out_put;

 FUNC_0(VAR_16)->fd = VAR_19;
 FUNC_0(VAR_16)->mode = VAR_1 | VAR_2;
 FUNC_3(VAR_13, VAR_16);
 return 0;

 out_put:
 FUNC_8(VAR_16);
 out:
 return VAR_18;
}
