
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct file*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_5, poll_table *VAR_6)
{
 unsigned int VAR_7 = 0;

 FUNC_1(VAR_5, &VAR_4, VAR_6);

 FUNC_2(&VAR_2);
 if (!FUNC_0(&VAR_3))
  VAR_7 = VAR_0 | VAR_1;
 FUNC_3(&VAR_2);

 return VAR_7;
}
