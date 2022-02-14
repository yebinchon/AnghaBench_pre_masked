
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_2__ {int next; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (struct file*,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_5, poll_table *VAR_6)
{
 FUNC_1(VAR_5, &VAR_3, VAR_6);
 if (FUNC_2(VAR_4.next))
  return VAR_0 | VAR_1;
 if (!VAR_2 && FUNC_0())
  return VAR_0 | VAR_1;
 return 0;
}
