
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;
struct mpsc_port_info {scalar_t__ rcv_data; TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpsc_port_info*) ;
 int FUNC_1 (struct mpsc_port_info*,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct mpsc_port_info *VAR_1)
{
 FUNC_2("mpsc_start_rx[%d]: Starting...\n", VAR_1->port.line);

 if (VAR_1->rcv_data) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_0);
 }
}
