
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclades_port {int x_break; int xmit_cnt; } ;


 int FUNC_0 (struct cyclades_port*) ;

__attribute__((used)) static void FUNC_1(struct cyclades_port *VAR_0, int VAR_1)
{


 VAR_0->x_break = VAR_1;
 if (!VAR_0->xmit_cnt) {
  FUNC_0(VAR_0);
 }
}
