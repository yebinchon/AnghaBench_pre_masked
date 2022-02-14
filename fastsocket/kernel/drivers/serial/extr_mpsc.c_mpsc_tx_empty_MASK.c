
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int uint ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct mpsc_port_info {TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mpsc_port_info*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static uint FUNC_3(struct uart_port *VAR_1)
{
 struct mpsc_port_info *VAR_2 = (struct mpsc_port_info *)VAR_1;
 ulong VAR_3;
 uint VAR_4;

 FUNC_1(&VAR_2->port.lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2) ? 0 : VAR_0;
 FUNC_2(&VAR_2->port.lock, VAR_3);

 return VAR_4;
}
