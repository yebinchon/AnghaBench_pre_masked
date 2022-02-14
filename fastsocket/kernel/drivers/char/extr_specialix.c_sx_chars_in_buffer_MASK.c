
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct specialix_port* driver_data; } ;
struct specialix_port {int xmit_cnt; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct specialix_port*,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0)
{
 struct specialix_port *VAR_1 = VAR_0->driver_data;

 FUNC_0();

 if (FUNC_2(VAR_1, VAR_0->name, "sx_chars_in_buffer")) {
  FUNC_1();
  return 0;
 }
 FUNC_1();
 return VAR_1->xmit_cnt;
}
