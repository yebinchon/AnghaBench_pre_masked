
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct inode {scalar_t__ i_size; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct page *VAR_2,
          unsigned VAR_3, unsigned VAR_4)
{
 struct inode *VAR_5 = VAR_2->mapping->host;
 loff_t VAR_6 = ((loff_t)VAR_2->index << VAR_0) + VAR_4;

 if (!FUNC_0(VAR_2))
  FUNC_1(VAR_2);




 if (VAR_6 > VAR_5->i_size)
  FUNC_2(VAR_5, VAR_6);
 FUNC_3(VAR_2);
 return 0;
}
