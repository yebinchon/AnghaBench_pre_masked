
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cyclades_icount {scalar_t__ rng; scalar_t__ dsr; scalar_t__ dcd; scalar_t__ cts; } ;
struct cyclades_port {TYPE_1__* card; struct cyclades_icount icount; } ;
struct TYPE_2__ {int card_lock; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct cyclades_port *VAR_4, unsigned long VAR_5,
  struct cyclades_icount *VAR_6)
{
 struct cyclades_icount VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_0(&VAR_4->card->card_lock, VAR_8);
 VAR_7 = VAR_4->icount;
 FUNC_1(&VAR_4->card->card_lock, VAR_8);

 VAR_9 = ((VAR_5 & VAR_3) && (VAR_7.rng != VAR_6->rng)) ||
  ((VAR_5 & VAR_2) && (VAR_7.dsr != VAR_6->dsr)) ||
  ((VAR_5 & VAR_0) && (VAR_7.dcd != VAR_6->dcd)) ||
  ((VAR_5 & VAR_1) && (VAR_7.cts != VAR_6->cts));

 *VAR_6 = VAR_7;

 return VAR_9;
}
