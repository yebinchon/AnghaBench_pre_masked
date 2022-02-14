
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int dummy; } ;
struct console {size_t index; } ;


 struct tty_driver* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static struct tty_driver *FUNC_0(struct console *VAR_2, int *VAR_3)
{
 if (VAR_1[VAR_2->index] == -1)
  return ((void*)0);

 *VAR_3 = VAR_2->index;
 return VAR_0;
}
