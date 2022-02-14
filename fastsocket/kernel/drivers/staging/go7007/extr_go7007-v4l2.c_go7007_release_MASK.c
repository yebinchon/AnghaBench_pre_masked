
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_file {scalar_t__ buf_count; scalar_t__ ref_count; struct go7007_file* bufs; scalar_t__ in_use; struct go7007_file* go; } ;
struct go7007 {scalar_t__ buf_count; scalar_t__ ref_count; struct go7007* bufs; scalar_t__ in_use; struct go7007* go; } ;
struct file {struct go7007_file* private_data; } ;


 int FUNC_0 (struct go7007_file*) ;
 int FUNC_1 (struct go7007_file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0)
{
 struct go7007_file *VAR_1 = VAR_0->private_data;
 struct go7007 *VAR_2 = VAR_1->go;

 if (VAR_1->buf_count > 0) {
  FUNC_0(VAR_2);
  VAR_2->in_use = 0;
  FUNC_1(VAR_1->bufs);
  VAR_1->buf_count = 0;
 }
 FUNC_1(VAR_1);
 if (--VAR_2->ref_count == 0)
  FUNC_1(VAR_2);
 VAR_0->private_data = ((void*)0);
 return 0;
}
