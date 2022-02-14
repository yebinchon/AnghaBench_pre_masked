
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gs_port* driver_data; } ;
struct gs_port {int xmit_cnt; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int FUNC_2(struct tty_struct * VAR_1)
{
 struct gs_port *VAR_2 = VAR_1->driver_data;
 int VAR_3;

 FUNC_0 ();
 VAR_3 = VAR_0 - VAR_2->xmit_cnt - 1;
 if (VAR_3 < 0)
  VAR_3 = 0;
 FUNC_1 ();
 return VAR_3;
}
