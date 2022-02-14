
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
struct cadet {scalar_t__ rdsin; scalar_t__ rdsout; int read_queue; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 struct cadet* FUNC_1 (struct file*) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_2, struct poll_table_struct *VAR_3)
{
 struct cadet *VAR_4 = FUNC_1(VAR_2);

 FUNC_0(VAR_2, &VAR_4->read_queue, VAR_3);
 if (VAR_4->rdsin != VAR_4->rdsout)
  return VAR_0 | VAR_1;
 return 0;
}
