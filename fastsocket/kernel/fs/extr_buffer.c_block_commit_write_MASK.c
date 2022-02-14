
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct inode*,struct page*,unsigned int,unsigned int) ;

int FUNC_1(struct page *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 struct inode *VAR_3 = VAR_0->mapping->host;
 FUNC_0(VAR_3,VAR_0,VAR_1,VAR_2);
 return 0;
}
