
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_bh; int bh_running; int bh_requested; int lock; } ;
typedef TYPE_1__ SLMP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(SLMP_INFO *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_0(&VAR_3->lock,VAR_4);

 if (VAR_3->pending_bh & VAR_0) {
  VAR_3->pending_bh &= ~VAR_0;
  VAR_5 = VAR_0;
 } else if (VAR_3->pending_bh & VAR_2) {
  VAR_3->pending_bh &= ~VAR_2;
  VAR_5 = VAR_2;
 } else if (VAR_3->pending_bh & VAR_1) {
  VAR_3->pending_bh &= ~VAR_1;
  VAR_5 = VAR_1;
 }

 if (!VAR_5) {

  VAR_3->bh_running = 0;
  VAR_3->bh_requested = 0;
 }

 FUNC_1(&VAR_3->lock,VAR_4);

 return VAR_5;
}
