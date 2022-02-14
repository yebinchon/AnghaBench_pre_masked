
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {int line; int lock; } ;
struct mpsc_port_info {TYPE_1__ port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mpsc_port_info*) ;
 int FUNC_1 (struct mpsc_port_info*) ;
 scalar_t__ FUNC_2 (struct mpsc_port_info*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct mpsc_port_info *VAR_4 = VAR_3;
 ulong VAR_5;
 int VAR_6 = VAR_1;

 FUNC_3("mpsc_sdma_intr[%d]: SDMA Interrupt Received\n",VAR_4->port.line);

 FUNC_4(&VAR_4->port.lock, VAR_5);
 FUNC_1(VAR_4);
 if (FUNC_0(VAR_4))
  VAR_6 = VAR_0;
 if (FUNC_2(VAR_4))
  VAR_6 = VAR_0;
 FUNC_5(&VAR_4->port.lock, VAR_5);

 FUNC_3("mpsc_sdma_intr[%d]: SDMA Interrupt Handled\n", VAR_4->port.line);
 return VAR_6;
}
