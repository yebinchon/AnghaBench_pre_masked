
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 char* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (char*,int ,scalar_t__) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct file*,char*,int *,scalar_t__,int ) ;
 int FUNC_11 (struct inode*,struct page*) ;
 int FUNC_12 (struct inode*,struct page*) ;
 int FUNC_13 (struct inode*,struct page*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_2, struct page *VAR_3)
{
 int VAR_4;
 loff_t VAR_5;
 char *VAR_6;
 struct inode *VAR_7;

 VAR_7 = VAR_3->mapping->host;
 FUNC_1(VAR_0, "\n");

 FUNC_0(!FUNC_2(VAR_3));

 VAR_4 = FUNC_11(VAR_7, VAR_3);
 if (VAR_4 == 0)
  return VAR_4;

 VAR_6 = FUNC_5(VAR_3);
 VAR_5 = FUNC_8(VAR_3);

 VAR_4 = FUNC_10(VAR_2, VAR_6, ((void*)0), VAR_1, VAR_5);
 if (VAR_4 < 0) {
  FUNC_13(VAR_7, VAR_3);
  goto done;
 }

 FUNC_7(VAR_6 + VAR_4, 0, VAR_1 - VAR_4);
 FUNC_4(VAR_3);
 FUNC_3(VAR_3);

 FUNC_12(VAR_7, VAR_3);
 VAR_4 = 0;

done:
 FUNC_6(VAR_3);
 FUNC_9(VAR_3);
 return VAR_4;
}
