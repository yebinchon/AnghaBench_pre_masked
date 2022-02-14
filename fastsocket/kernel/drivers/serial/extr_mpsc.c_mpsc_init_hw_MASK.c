
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;
struct mpsc_port_info {int brg_clk_src; TYPE_1__ port; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct mpsc_port_info*) ;
 int FUNC_2 (struct mpsc_port_info*,int ) ;
 int FUNC_3 (struct mpsc_port_info*) ;
 int FUNC_4 (struct mpsc_port_info*,int ) ;
 int FUNC_5 (struct mpsc_port_info*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(struct mpsc_port_info *VAR_0)
{
 FUNC_6("mpsc_init_hw[%d]: Initializing\n", VAR_0->port.line);

 FUNC_2(VAR_0, VAR_0->brg_clk_src);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0, FUNC_0());
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
}
