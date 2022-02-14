
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_4, poll_table * VAR_5)
{
 FUNC_0(VAR_4, &VAR_3, VAR_5);
 if (VAR_2)
  return VAR_0 | VAR_1;
 return 0;
}
