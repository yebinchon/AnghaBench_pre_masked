
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {scalar_t__ state; int lock; scalar_t__ bcc; int tmr; int flags; scalar_t__ nRetry; int * tx_first; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct r3964_info*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct r3964_info*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct r3964_info *VAR_6)
{
 unsigned long VAR_7;

 FUNC_4(&VAR_6->lock, VAR_7);

 if ((VAR_6->state == VAR_1) && (VAR_6->tx_first != ((void*)0))) {
  VAR_6->state = VAR_3;
  VAR_6->nRetry = 0;
  VAR_6->flags &= ~VAR_0;
  FUNC_2(&VAR_6->tmr, VAR_5 + VAR_2);

  FUNC_5(&VAR_6->lock, VAR_7);

  FUNC_0("trigger_transmit - sent STX");

  FUNC_3(VAR_6, VAR_4);
  FUNC_1(VAR_6);

  VAR_6->bcc = 0;
 } else {
  FUNC_5(&VAR_6->lock, VAR_7);
 }
}
