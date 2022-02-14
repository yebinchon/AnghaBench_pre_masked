
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct cyclades_port* driver_data; } ;
struct cyclades_port {int xmit_cnt; } ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (struct cyclades_port*,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0)
{
 struct cyclades_port *VAR_1 = VAR_0->driver_data;





 if (FUNC_1(VAR_1, VAR_0->name, "cy_chars_in_buffer"))
  return 0;

 return VAR_1->xmit_cnt;
}
