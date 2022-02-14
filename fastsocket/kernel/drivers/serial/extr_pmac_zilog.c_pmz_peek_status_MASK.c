
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; } ;
struct uart_pmac_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_pmac_port*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline u8 FUNC_3(struct uart_pmac_port *VAR_1)
{
 unsigned long VAR_2;
 u8 VAR_3;

 FUNC_1(&VAR_1->port.lock, VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 FUNC_2(&VAR_1->port.lock, VAR_2);

 return VAR_3;
}
