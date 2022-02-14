
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; } ;
struct moxa_port {int statusflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_2)
{
 struct moxa_port *VAR_3 = VAR_2->driver_data;

 FUNC_0(&VAR_1);
 VAR_3->statusflags |= VAR_0;
 FUNC_1(&VAR_1);
}
