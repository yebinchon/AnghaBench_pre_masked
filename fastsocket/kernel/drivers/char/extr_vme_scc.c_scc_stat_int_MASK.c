
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ tty; int open_wait; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct scc_port {unsigned int channel; int c_dcd; TYPE_2__ gs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scc_port*) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 unsigned char* VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct scc_port *VAR_10 = VAR_9;
 unsigned VAR_11 = VAR_10->channel;
 unsigned char VAR_12, VAR_13, VAR_14;
 FUNC_0(VAR_10);

 VAR_12 = VAR_7[VAR_11];
 VAR_13 = VAR_7[VAR_11] = FUNC_1(VAR_6);
 VAR_14 = VAR_12 ^ VAR_13;

 if (VAR_14 & VAR_5) {
  VAR_10->c_dcd = !!(VAR_13 & VAR_5);
  if (!(VAR_10->gs.port.flags & VAR_0))
   ;
  else if (VAR_10->c_dcd) {
   FUNC_5(&VAR_10->gs.port.open_wait);
  }
  else {
   if (VAR_10->gs.port.tty)
    FUNC_4 (VAR_10->gs.port.tty);
  }
 }
 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_3);
 return VAR_4;
}
