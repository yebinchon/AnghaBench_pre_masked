
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct ldc_channel {unsigned long chan_state; int lock; int hs_state; TYPE_1__ cfg; int tx_tail; int tx_head; int id; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ldc_channel*,int ) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long,int ,int ) ;
 int FUNC_2 (struct ldc_channel*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned long FUNC_5 (int ,int *,int *,unsigned long*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct ldc_channel *VAR_9 = VAR_8;
 unsigned long VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13 = 0;

 FUNC_3(&VAR_9->lock, VAR_10);

 VAR_12 = VAR_9->chan_state;
 VAR_11 = FUNC_5(VAR_9->id,
     &VAR_9->tx_head,
     &VAR_9->tx_tail,
     &VAR_9->chan_state);

 FUNC_1(VAR_6, " TX state[0x%02lx:0x%02lx] head[0x%04lx] tail[0x%04lx]\n",
        VAR_12, VAR_9->chan_state, VAR_9->tx_head, VAR_9->tx_tail);

 if (VAR_9->cfg.mode == VAR_4 &&
     VAR_9->chan_state == VAR_1) {
  VAR_9->hs_state = VAR_3;
  FUNC_0(VAR_9, VAR_5);

  VAR_13 |= VAR_2;
 }

 FUNC_4(&VAR_9->lock, VAR_10);

 FUNC_2(VAR_9, VAR_13);

 return VAR_0;
}
