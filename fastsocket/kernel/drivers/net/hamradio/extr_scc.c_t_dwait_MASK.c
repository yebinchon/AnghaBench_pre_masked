
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fulldup; int persist; int txdelay; int slottime; scalar_t__ group; } ;
struct TYPE_3__ {scalar_t__ tx_state; } ;
struct scc_channel {int* wreg; TYPE_2__ kiss; scalar_t__ dcd; TYPE_1__ stat; int dev; int tx_queue; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct scc_channel*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scc_channel*,int ) ;
 int FUNC_3 (struct scc_channel*) ;
 int FUNC_4 (struct scc_channel*,void (*) (unsigned long),int ) ;
 scalar_t__ FUNC_5 (int *) ;
 void FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_8)
{
 struct scc_channel *VAR_9 = (struct scc_channel *) VAR_8;

 if (VAR_9->stat.tx_state == VAR_6)
 {
  if (FUNC_5(&VAR_9->tx_queue)) {
   VAR_9->stat.tx_state = VAR_5;
   FUNC_1(VAR_9->dev);
   return;
  }

  VAR_9->stat.tx_state = VAR_4;
 }

 if (VAR_9->kiss.fulldup == VAR_0)
 {
  VAR_3 = VAR_3 * 17 + 31;

  if (VAR_9->dcd || (VAR_9->kiss.persist) < VAR_3 || (VAR_9->kiss.group && FUNC_0(VAR_9)) )
  {
   FUNC_3(VAR_9);
   FUNC_4(VAR_9, FUNC_7, VAR_9->kiss.slottime);
   return ;
  }
 }

 if ( !(VAR_9->wreg[VAR_1] & VAR_2) )
 {
  FUNC_2(VAR_9, VAR_7);
  FUNC_4(VAR_9, FUNC_6, VAR_9->kiss.txdelay);
 } else {
  FUNC_4(VAR_9, FUNC_6, 0);
 }
}
