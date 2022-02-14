
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {scalar_t__ port_data; } ;
struct maceps2_data {struct mace_ps2port* port; } ;
struct mace_ps2port {int status; unsigned long rx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct serio*,unsigned long,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct serio *VAR_4 = VAR_3;
 struct mace_ps2port *VAR_5 = ((struct maceps2_data *)VAR_4->port_data)->port;
 unsigned long VAR_6;

 if (VAR_5->status & VAR_1) {
  VAR_6 = VAR_5->rx;
  FUNC_0(VAR_4, VAR_6 & 0xff, 0);
        }

 return VAR_0;
}
