
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct sn_cons_port {TYPE_1__ sc_port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sn_cons_port*,unsigned long) ;
 int FUNC_2 (struct sn_cons_port*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct sn_cons_port *VAR_7 = (struct sn_cons_port *)VAR_6;
 unsigned long VAR_8;
 int VAR_9 = FUNC_0();

 if (!VAR_7)
  return VAR_1;

 FUNC_3(&VAR_7->sc_port.lock, VAR_8);
 if (VAR_9 & VAR_2) {
  FUNC_1(VAR_7, VAR_8);
 }
 if (VAR_9 & VAR_3) {
  FUNC_2(VAR_7, VAR_4);
 }
 FUNC_4(&VAR_7->sc_port.lock, VAR_8);
 return VAR_0;
}
