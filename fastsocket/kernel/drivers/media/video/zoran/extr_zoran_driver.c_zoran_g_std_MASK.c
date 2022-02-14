
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct zoran_fh {struct zoran* zr; } ;
struct zoran {int resource_lock; int norm; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct zoran_fh *VAR_3 = VAR_1;
 struct zoran *VAR_4 = VAR_3->zr;

 FUNC_0(&VAR_4->resource_lock);
 *VAR_2 = VAR_4->norm;
 FUNC_1(&VAR_4->resource_lock);
 return 0;
}
