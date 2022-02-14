
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {struct a3d* port_data; } ;
struct a3d {int gameport; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct gameport *VAR_0)
{
 struct a3d *VAR_1 = VAR_0->port_data;

 FUNC_0(VAR_1->gameport);
}
