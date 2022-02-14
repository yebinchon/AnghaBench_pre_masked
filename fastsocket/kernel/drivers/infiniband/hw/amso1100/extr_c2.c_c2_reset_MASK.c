
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_port {struct c2_dev* c2dev; } ;
struct c2_dev {unsigned int cur_rx; } ;


 unsigned int FUNC_0 (struct c2_dev*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct c2_dev*,unsigned int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct c2_port *VAR_1)
{
 struct c2_dev *VAR_2 = VAR_1->c2dev;
 unsigned int VAR_3 = VAR_2->cur_rx;


 FUNC_1(VAR_2, VAR_3 | VAR_0);





 FUNC_3(2);

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 & VAR_0)
  FUNC_2("c2_reset: failed to quiesce the hardware!\n");

 VAR_3 &= ~VAR_0;

 VAR_2->cur_rx = VAR_3;

 FUNC_2("Current RX: %u\n", VAR_2->cur_rx);
}
