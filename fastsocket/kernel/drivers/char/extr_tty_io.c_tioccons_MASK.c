
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {scalar_t__ write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 struct file* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_6)
{
 if (!FUNC_0(VAR_0))
  return -VAR_2;
 if (VAR_6->f_op->write == VAR_5) {
  struct file *VAR_7;
  FUNC_3(&VAR_4);
  VAR_7 = VAR_3;
  VAR_3 = ((void*)0);
  FUNC_4(&VAR_4);
  if (VAR_7)
   FUNC_1(VAR_7);
  return 0;
 }
 FUNC_3(&VAR_4);
 if (VAR_3) {
  FUNC_4(&VAR_4);
  return -VAR_1;
 }
 FUNC_2(VAR_6);
 VAR_3 = VAR_6;
 FUNC_4(&VAR_4);
 return 0;
}
