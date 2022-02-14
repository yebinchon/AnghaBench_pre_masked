
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; scalar_t__ low_latency; int * driver_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ) ;
 struct tty_struct* VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct tty_struct *VAR_4, struct file *VAR_5)
{
 if (VAR_4->count == 1) {
  VAR_3 = VAR_4;
  VAR_4->driver_data = FUNC_0(VAR_2, VAR_1);
  if (VAR_4->driver_data == ((void*)0))
   return -VAR_0;
  VAR_4->low_latency = 0;
 }
 return 0;
}
