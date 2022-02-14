
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct psif* port_data; } ;
struct psif {int open; int pclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct psif*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_5)
{
 struct psif *VAR_6 = VAR_5->port_data;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6->pclk);
 if (VAR_7)
  goto out;

 FUNC_2(VAR_6, VAR_0, FUNC_0(VAR_2) | FUNC_0(VAR_1));
 FUNC_2(VAR_6, VAR_3, FUNC_0(VAR_4));

 VAR_6->open = 1;
out:
 return VAR_7;
}
