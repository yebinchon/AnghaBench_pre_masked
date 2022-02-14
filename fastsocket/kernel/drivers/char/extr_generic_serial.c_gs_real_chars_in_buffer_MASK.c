
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct gs_port* driver_data; } ;
struct gs_port {int xmit_cnt; TYPE_1__* rd; } ;
struct TYPE_2__ {int (* chars_in_buffer ) (struct gs_port*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct gs_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0)
{
 struct gs_port *VAR_1;
 FUNC_0 ();

 VAR_1 = VAR_0->driver_data;

 if (!VAR_1->rd) return 0;
 if (!VAR_1->rd->chars_in_buffer) return 0;

 FUNC_1 ();
 return VAR_1->xmit_cnt + VAR_1->rd->chars_in_buffer (VAR_1);
}
