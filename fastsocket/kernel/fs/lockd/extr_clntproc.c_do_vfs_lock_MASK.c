
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_flags; int fl_file; } ;


 int FUNC_0 () ;


 int FUNC_1 (int ,struct file_lock*) ;
 int FUNC_2 (int ,struct file_lock*) ;

__attribute__((used)) static int FUNC_3(struct file_lock *VAR_0)
{
 int VAR_1 = 0;
 switch (VAR_0->fl_flags & (128|129)) {
  case 128:
   VAR_1 = FUNC_2(VAR_0->fl_file, VAR_0);
   break;
  case 129:
   VAR_1 = FUNC_1(VAR_0->fl_file, VAR_0);
   break;
  default:
   FUNC_0();
 }
 return VAR_1;
}
