
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; int * driver_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct tty_struct *VAR_1, struct file *VAR_2)
{
 if (VAR_1->count == 1) {
  VAR_0 = ((void*)0);
  FUNC_0(VAR_1->driver_data);
  VAR_1->driver_data = ((void*)0);
 }
}
