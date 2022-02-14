
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_5, poll_table *VAR_6)
{
 unsigned int VAR_7 = 0;

 FUNC_0(VAR_5, &VAR_4, VAR_6);

 FUNC_1(&VAR_3);
 if (VAR_2)
  VAR_7 |= (VAR_0 | VAR_1);
 FUNC_2(&VAR_3);

 return VAR_7;
}
