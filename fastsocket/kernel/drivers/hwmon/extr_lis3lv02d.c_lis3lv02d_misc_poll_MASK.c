
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_2__ {int count; int misc_wait; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_3, poll_table *VAR_4)
{
 FUNC_1(VAR_3, &VAR_2.misc_wait, VAR_4);
 if (FUNC_0(&VAR_2.count))
  return VAR_0 | VAR_1;
 return 0;
}
