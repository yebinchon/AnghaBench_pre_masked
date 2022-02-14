
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct cyclades_port* driver_data; } ;
struct cyclades_port {int xmit_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct cyclades_port*,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1)
{
 struct cyclades_port *VAR_2 = VAR_1->driver_data;
 int VAR_3;





 if (FUNC_1(VAR_2, VAR_1->name, "cy_write_room"))
  return 0;
 VAR_3 = VAR_0 - VAR_2->xmit_cnt - 1;
 if (VAR_3 < 0)
  VAR_3 = 0;
 return VAR_3;
}
