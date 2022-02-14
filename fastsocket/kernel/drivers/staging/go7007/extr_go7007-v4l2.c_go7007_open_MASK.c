
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_file {scalar_t__ buf_count; int lock; struct go7007* go; } ;
struct go7007 {scalar_t__ status; int ref_count; } ;
struct file {struct go7007_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct go7007_file* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 struct go7007* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4)
{
 struct go7007 *VAR_5 = FUNC_3(FUNC_2(VAR_4));
 struct go7007_file *VAR_6;

 if (VAR_5->status != VAR_3)
  return -VAR_0;
 VAR_6 = FUNC_0(sizeof(struct go7007_file), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;
 ++VAR_5->ref_count;
 VAR_6->go = VAR_5;
 FUNC_1(&VAR_6->lock);
 VAR_6->buf_count = 0;
 VAR_4->private_data = VAR_6;
 return 0;
}
