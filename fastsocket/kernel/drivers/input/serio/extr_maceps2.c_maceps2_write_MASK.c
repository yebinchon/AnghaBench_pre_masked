
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {scalar_t__ port_data; } ;
struct maceps2_data {struct mace_ps2port* port; } ;
struct mace_ps2port {int status; unsigned char tx; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_2, unsigned char VAR_3)
{
 struct mace_ps2port *VAR_4 = ((struct maceps2_data *)VAR_2->port_data)->port;
 unsigned int VAR_5 = VAR_0;

 do {
  if (VAR_4->status & VAR_1) {
   VAR_4->tx = VAR_3;
   return 0;
  }
  FUNC_0(50);
 } while (VAR_5--);

 return -1;
}
