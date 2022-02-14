
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct gscps2port* port_data; } ;
struct gscps2port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gscps2port*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct gscps2port*) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_1)
{
 struct gscps2port *VAR_2 = VAR_1->port_data;

 FUNC_2(VAR_2);


 FUNC_0(VAR_2, VAR_0);

 FUNC_1(0, ((void*)0));

 return 0;
}
