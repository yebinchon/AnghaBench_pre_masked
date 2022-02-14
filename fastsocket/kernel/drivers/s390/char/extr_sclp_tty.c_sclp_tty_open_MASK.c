
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ low_latency; int * driver_data; } ;
struct file {int dummy; } ;


 struct tty_struct* VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct tty_struct *VAR_1, struct file *VAR_2)
{
 VAR_0 = VAR_1;
 VAR_1->driver_data = ((void*)0);
 VAR_1->low_latency = 0;
 return 0;
}
