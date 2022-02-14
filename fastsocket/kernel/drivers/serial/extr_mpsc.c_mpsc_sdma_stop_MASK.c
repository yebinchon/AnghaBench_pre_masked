
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;
struct mpsc_port_info {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mpsc_port_info*,int) ;
 int FUNC_1 (struct mpsc_port_info*) ;
 int FUNC_2 (struct mpsc_port_info*,int) ;
 int FUNC_3 (struct mpsc_port_info*,int *) ;
 int FUNC_4 (struct mpsc_port_info*,int *) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(struct mpsc_port_info *VAR_2)
{
 FUNC_5("mpsc_sdma_stop[%d]: Stopping SDMA\n", VAR_2->port.line);


 FUNC_0(VAR_2, 0);
 FUNC_0(VAR_2, VAR_0 | VAR_1);


 FUNC_4(VAR_2, ((void*)0));
 FUNC_3(VAR_2, ((void*)0));


 FUNC_2(VAR_2, 0xf);
 FUNC_1(VAR_2);
}
