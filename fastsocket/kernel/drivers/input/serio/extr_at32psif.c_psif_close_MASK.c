
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct psif* port_data; } ;
struct psif {int pclk; scalar_t__ open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct psif*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct serio *VAR_4)
{
 struct psif *VAR_5 = VAR_4->port_data;

 VAR_5->open = 0;

 FUNC_2(VAR_5, VAR_3, ~0UL);
 FUNC_2(VAR_5, VAR_0, FUNC_0(VAR_2) | FUNC_0(VAR_1));

 FUNC_1(VAR_5->pclk);
}
