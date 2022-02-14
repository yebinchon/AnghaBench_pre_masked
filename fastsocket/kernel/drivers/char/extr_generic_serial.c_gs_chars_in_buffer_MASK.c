
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gs_port* driver_data; } ;
struct gs_port {int xmit_cnt; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

int FUNC_2(struct tty_struct *VAR_0)
{
 struct gs_port *VAR_1 = VAR_0->driver_data;
 FUNC_0 ();

 FUNC_1 ();
 return VAR_1->xmit_cnt;
}
