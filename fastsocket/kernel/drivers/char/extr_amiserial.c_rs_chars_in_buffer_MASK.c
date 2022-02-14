
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct async_struct* driver_data; } ;
struct TYPE_2__ {int tail; int head; } ;
struct async_struct {TYPE_1__ xmit; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct async_struct*,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1)
{
 struct async_struct *VAR_2 = VAR_1->driver_data;

 if (FUNC_1(VAR_2, VAR_1->name, "rs_chars_in_buffer"))
  return 0;
 return FUNC_0(VAR_2->xmit.head, VAR_2->xmit.tail, VAR_0);
}
