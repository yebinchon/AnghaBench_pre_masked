
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;
struct mpsc_port_info {int ready; TYPE_1__ port; } ;


 int FUNC_0 (struct mpsc_port_info*) ;
 int FUNC_1 (struct mpsc_port_info*) ;
 int FUNC_2 (struct mpsc_port_info*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct mpsc_port_info *VAR_0)
{
 int VAR_1;

 FUNC_3("mpsc_make_ready[%d]: Making cltr ready\n", VAR_0->port.line);

 if (!VAR_0->ready) {
  FUNC_1(VAR_0);
  if ((VAR_1 = FUNC_0(VAR_0)))
   return VAR_1;
  FUNC_2(VAR_0);
  VAR_0->ready = 1;
 }

 return 0;
}
