
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef int __le32 ;
struct TYPE_9__ {int file_handle; int volNumber; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ m; } ;


 int FUNC_0 (char*,struct inode*,struct dentry*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_1 (struct inode*) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct inode*,struct dentry*,int,int ,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (TYPE_2__*,char*,int*,char const*,int,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int ,int,char*,int*) ;
 int FUNC_12 (char const*) ;

int FUNC_13(struct inode *VAR_13, struct dentry *VAR_14, const char *VAR_15) {
 struct inode *VAR_16;
 char *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;
 int VAR_23;
 __le32 VAR_24;
 unsigned int VAR_25;

 FUNC_0("ncp_symlink(dir=%p,dentry=%p,symname=%s)\n",VAR_13,VAR_14,VAR_15);

 if (FUNC_8(FUNC_2(VAR_13), FUNC_1(VAR_13)->volNumber))
  VAR_22 = 0;
 else






  return -VAR_2;

 VAR_17 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_17)
  return -VAR_1;

 if (VAR_22) {
  VAR_23 = 0;
  VAR_24 = VAR_12 | VAR_11;
  ((__le32 *)VAR_17)[0]=VAR_6;
  ((__le32 *)VAR_17)[1]=VAR_7;
  VAR_25 = 8;
 } else {
  VAR_23 = VAR_9 | VAR_10;
  VAR_24 = 0;
  VAR_25 = 0;
 }

 VAR_18 = FUNC_12(VAR_15);


 VAR_21 = VAR_4 - VAR_25;
 VAR_19 = FUNC_7(FUNC_2(VAR_13), VAR_17 + VAR_25, &VAR_21, VAR_15, VAR_18, 0);
 if (VAR_19)
  goto failfree;

 VAR_21 += VAR_25;

 VAR_19 = -VAR_0;
 if (FUNC_5(VAR_13,VAR_14,VAR_23,0,VAR_24)) {
  goto failfree;
 }

 VAR_16=VAR_14->d_inode;

 if (FUNC_10(VAR_16, VAR_8))
  goto failfree;

 if (FUNC_11(FUNC_2(VAR_16), FUNC_1(VAR_16)->file_handle,
        0, VAR_21, VAR_17, &VAR_20) || VAR_20!=VAR_21) {
  goto fail;
 }

 FUNC_6(VAR_16);
 FUNC_9(VAR_16);
 FUNC_3(VAR_17);
 return 0;
fail:;
 FUNC_6(VAR_16);
 FUNC_9(VAR_16);
failfree:;
 FUNC_3(VAR_17);
 return VAR_19;
}
