
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct eerbuffer {struct eerbuffer* buffer; int buffer_page_count; int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct eerbuffer*,int ) ;
 int FUNC_1 (struct eerbuffer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 struct eerbuffer *VAR_3;
 unsigned long VAR_4;

 VAR_3 = (struct eerbuffer *) VAR_2->private_data;
 FUNC_3(&VAR_0, VAR_4);
 FUNC_2(&VAR_3->list);
 FUNC_4(&VAR_0, VAR_4);
 FUNC_0(VAR_3->buffer, VAR_3->buffer_page_count);
 FUNC_1(VAR_3->buffer);
 FUNC_1(VAR_3);

 return 0;
}
