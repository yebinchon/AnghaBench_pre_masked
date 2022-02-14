
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran_fh {struct zoran* zr; } ;
struct zoran {unsigned int input; int resource_lock; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct zoran_fh *VAR_3 = VAR_1;
 struct zoran *VAR_4 = VAR_3->zr;

 FUNC_0(&VAR_4->resource_lock);
 *VAR_2 = VAR_4->input;
 FUNC_1(&VAR_4->resource_lock);

 return 0;
}
