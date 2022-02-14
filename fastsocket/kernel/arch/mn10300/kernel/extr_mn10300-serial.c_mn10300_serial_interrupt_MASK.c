
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; } ;
struct mn10300_serial_port {scalar_t__ type; int* _status; int tx_cts; TYPE_1__ uart; scalar_t__ intr_flags; int name; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (struct mn10300_serial_port*,int) ;
 int FUNC_3 (struct mn10300_serial_port*) ;
 int FUNC_4 (struct mn10300_serial_port*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct mn10300_serial_port *VAR_8 = VAR_7;
 u8 VAR_9;

 FUNC_5(&VAR_8->uart.lock);

 if (VAR_8->intr_flags) {
  FUNC_0("INT %s: %x", VAR_8->name, VAR_8->intr_flags);

  if (FUNC_1(&VAR_8->intr_flags, VAR_1))
   FUNC_3(VAR_8);

  if (FUNC_1(&VAR_8->intr_flags,
     VAR_3 | VAR_2))
   FUNC_4(VAR_8);
 }



 if (VAR_8->type == VAR_4) {
  VAR_9 = *VAR_8->_status;
  if ((VAR_8->tx_cts ^ VAR_9) & VAR_5)
   FUNC_2(VAR_8, VAR_9);
 }

 FUNC_6(&VAR_8->uart.lock);

 return VAR_0;
}
