
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran_fh {struct zoran* zr; } ;
struct zoran {int resource_lock; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zoran*) ;
 int FUNC_3 (struct zoran*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 struct zoran_fh *VAR_3 = VAR_1;
 struct zoran *VAR_4 = VAR_3->zr;
 int VAR_5;

 FUNC_0(&VAR_4->resource_lock);
 VAR_5 = FUNC_3(VAR_4, VAR_2);
 if (VAR_5)
  goto sinput_unlock_and_return;


 VAR_5 = FUNC_2(VAR_4);
sinput_unlock_and_return:
 FUNC_1(&VAR_4->resource_lock);
 return VAR_5;
}
