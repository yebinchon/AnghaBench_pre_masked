
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran_fh {struct zoran* zr; } ;
struct zoran {int resource_lock; } ;
struct v4l2_buffer {int index; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zoran_fh*,struct v4l2_buffer*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct zoran_fh *VAR_3 = VAR_1;
 struct zoran *VAR_4 = VAR_3->zr;
 int VAR_5;

 FUNC_0(&VAR_4->resource_lock);
 VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_2->index);
 FUNC_1(&VAR_4->resource_lock);

 return VAR_5;
}
