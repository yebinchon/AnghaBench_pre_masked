
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int memory_used; } ;
struct tty_struct {TYPE_1__ buf; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0)
{
 int VAR_1 = 8192 - VAR_0->buf.memory_used;
 if (VAR_1 < 0)
  return 0;
 return VAR_1;
}
