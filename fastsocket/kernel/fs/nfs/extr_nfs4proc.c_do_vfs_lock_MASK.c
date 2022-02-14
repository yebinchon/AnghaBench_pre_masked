
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_flags; } ;
struct file {int dummy; } ;


 int FUNC_0 () ;


 int FUNC_1 (struct file*,struct file_lock*) ;
 int FUNC_2 (struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, struct file_lock *VAR_1)
{
 int VAR_2 = 0;
 switch (VAR_1->fl_flags & (128|129)) {
  case 128:
   VAR_2 = FUNC_2(VAR_0, VAR_1);
   break;
  case 129:
   VAR_2 = FUNC_1(VAR_0, VAR_1);
   break;
  default:
   FUNC_0();
 }
 return VAR_2;
}
