
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zilog_channel {int dummy; } ;
struct uart_ip22zilog_port {int flags; TYPE_1__* next; int port; } ;
struct TYPE_2__ {int flags; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct zilog_channel* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct uart_ip22zilog_port*) ;
 unsigned char FUNC_3 (struct zilog_channel*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct zilog_channel*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct uart_ip22zilog_port *VAR_6)
{
 struct zilog_channel *VAR_7;
 int VAR_8;

 if (VAR_6->flags & VAR_2)
  return;


 VAR_7 = FUNC_0(&VAR_6->port);
 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  unsigned char VAR_9 = FUNC_3(VAR_7, VAR_4);
  if (VAR_9 & VAR_0)
   break;
  FUNC_4(100);
 }

 if (!FUNC_2(VAR_6)) {
  VAR_6++;
  VAR_7 = FUNC_0(&VAR_6->port);
 }
 FUNC_5(VAR_7, VAR_5, VAR_1);
 FUNC_1();
 (void) FUNC_3(VAR_7, VAR_3);

 VAR_6->flags |= VAR_2;
 VAR_6->next->flags |= VAR_2;
}
