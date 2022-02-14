
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; int busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct inode * VAR_3, struct file * VAR_4)
{
 FUNC_0();
 if (VAR_2 == 0) {
  FUNC_2();
  return -VAR_1;
 }
 if (FUNC_1(0, (void *)&VAR_2) != 0) {
  FUNC_2();
  return -VAR_0;
 }

 FUNC_2();
 return 0;
}
