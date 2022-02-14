
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*,int,int) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_1, unsigned int VAR_2)
{
 struct inode *VAR_3 = VAR_1->mapping->host;
 int VAR_4;

 if ((FUNC_0(VAR_3) / VAR_0) != VAR_1->index)
  goto out;
 VAR_4 = FUNC_0(VAR_3) % VAR_0;
 if (VAR_2 > VAR_4)
  VAR_4 = VAR_2;
 FUNC_1(VAR_1, VAR_4, VAR_0);
out:
 return 0;
}
