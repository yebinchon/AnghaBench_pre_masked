
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct net_device*,int) ;

void FUNC_3(struct net_device *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4=0x1ff;

 FUNC_0(VAR_0, "Dumping NIC register map");

 for(VAR_3=0;VAR_3<=VAR_4;)
 {
  FUNC_1( "\nD: %2x> ", VAR_3);
  for(VAR_2=0;VAR_2<16 && VAR_3<=VAR_4;VAR_2++,VAR_3++)
   FUNC_1("%2x ",FUNC_2(VAR_1,VAR_3));
 }
 FUNC_1("\n");
}
