
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zs_scc {int zlock; } ;
struct zs_port {struct zs_scc* scc; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct zs_port*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct zs_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_4(struct uart_port *VAR_3)
{
 struct zs_port *VAR_4 = FUNC_3(VAR_3);
 struct zs_scc *VAR_5 = VAR_4->scc;
 unsigned long VAR_6;
 u8 VAR_7;

 FUNC_1(&VAR_5->zlock, VAR_6);
 VAR_7 = FUNC_0(VAR_4, VAR_1);
 FUNC_2(&VAR_5->zlock, VAR_6);

 return VAR_7 & VAR_0 ? VAR_2 : 0;
}
