
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; int closing; scalar_t__ driver_data; } ;
struct raw3215_info {int tlet; int * tty; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct raw3215_info*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0, struct file * VAR_1)
{
 struct raw3215_info *VAR_2;

 VAR_2 = (struct raw3215_info *) VAR_0->driver_data;
 if (VAR_2 == ((void*)0) || VAR_0->count > 1)
  return;
 VAR_0->closing = 1;

 FUNC_0(VAR_2);
 VAR_2->tty = ((void*)0);
 FUNC_1(&VAR_2->tlet);
 VAR_0->closing = 0;
}
