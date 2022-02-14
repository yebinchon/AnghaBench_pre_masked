
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int (* readlink ) (struct inode*,struct page*,int ,int ) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*,struct page*,int ,int ) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct page *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2)->readlink(VAR_2, VAR_3, 0, VAR_1);
 if (VAR_4 < 0)
  goto error;
 FUNC_2(VAR_3);
 FUNC_4(VAR_3);
 return 0;

error:
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 return -VAR_0;
}
