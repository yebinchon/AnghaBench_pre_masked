
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
typedef int get_block_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct inode*,struct page*,unsigned int,unsigned int,int *) ;

int FUNC_2(struct page *VAR_0, unsigned VAR_1, unsigned VAR_2,
   get_block_t *VAR_3)
{
 struct inode *VAR_4 = VAR_0->mapping->host;
 int VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_0(VAR_0);
 return VAR_5;
}
