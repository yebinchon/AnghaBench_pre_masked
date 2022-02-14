
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct mxser_port* driver_data; } ;
struct mxser_port {int xmit_cnt; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_1)
{
 struct mxser_port *VAR_2 = VAR_1->driver_data;
 int VAR_3;

 VAR_3 = VAR_0 - VAR_2->xmit_cnt - 1;
 return VAR_3 < 0 ? 0 : VAR_3;
}
