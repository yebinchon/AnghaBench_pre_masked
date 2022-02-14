
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ __le32 ;
struct TYPE_4__ {int flags; int file_handle; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int,int ) ;
 char* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (int ,int ,int ,int,char*,int*) ;
 int FUNC_12 (int ,char*,int*,char*,int,int ) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_9, struct page *VAR_10)
{
 struct inode *VAR_11 = VAR_10->mapping->host;
 int VAR_12, VAR_13, VAR_14;
 char *VAR_15, *VAR_16;
 char *VAR_17 = FUNC_6(VAR_10);

 VAR_12 = -VAR_1;
 VAR_16 = FUNC_5(VAR_4, VAR_2);
 if (!VAR_16)
  goto fail;

 if (FUNC_10(VAR_11,VAR_8))
  goto failEIO;

 VAR_12=FUNC_11(FUNC_1(VAR_11),FUNC_0(VAR_11)->file_handle,
                         0,VAR_4,VAR_16,&VAR_13);

 FUNC_8(VAR_11);

 FUNC_9(VAR_11);
 if (VAR_12)
  goto failEIO;

 if (FUNC_0(VAR_11)->flags & VAR_3) {
  if (VAR_13<VAR_5 ||
      ((__le32 *)VAR_16)[0]!=VAR_6 ||
      ((__le32 *)VAR_16)[1]!=VAR_7)
       goto failEIO;
  VAR_15 = VAR_16 + 8;
  VAR_13 -= 8;
 } else {
  VAR_15 = VAR_16;
 }

 VAR_14 = VAR_4;
 VAR_12 = FUNC_12(FUNC_1(VAR_11), VAR_17, &VAR_14, VAR_15, VAR_13, 0);
 FUNC_4(VAR_16);
 if (VAR_12)
  goto fail;
 FUNC_3(VAR_10);
 FUNC_7(VAR_10);
 FUNC_13(VAR_10);
 return 0;

failEIO:
 VAR_12 = -VAR_0;
 FUNC_4(VAR_16);
fail:
 FUNC_2(VAR_10);
 FUNC_7(VAR_10);
 FUNC_13(VAR_10);
 return VAR_12;
}
