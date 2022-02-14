
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_user_data {struct per_user_data* name; scalar_t__ ring; } ;
struct inode {int dummy; } ;
struct file {struct per_user_data* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct per_user_data*,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct per_user_data*) ;
 struct per_user_data** VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5;
 struct per_user_data *VAR_6 = VAR_4->private_data;

 FUNC_3(&VAR_2);

 FUNC_1((unsigned long)VAR_6->ring);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1[VAR_5] != VAR_6)
   continue;

  FUNC_0(VAR_1[VAR_5], VAR_5);
 }

 FUNC_4(&VAR_2);

 FUNC_2(VAR_6->name);
 FUNC_2(VAR_6);

 return 0;
}
