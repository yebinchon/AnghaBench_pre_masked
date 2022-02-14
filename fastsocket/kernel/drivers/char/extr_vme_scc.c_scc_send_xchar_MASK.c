
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct scc_port* driver_data; } ;
struct scc_port {char x_char; } ;


 int FUNC_0 (struct scc_port*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0, char VAR_1)
{
 struct scc_port *VAR_2 = VAR_0->driver_data;

 VAR_2->x_char = VAR_1;
 if (VAR_1)
  FUNC_0(VAR_2);
}
