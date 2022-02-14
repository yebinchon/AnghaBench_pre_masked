
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ frame_irq; } ;
struct bttv {unsigned int input; unsigned int new_input; scalar_t__ tuner_type; int s_lock; TYPE_1__ curr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bttv*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bttv*,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct bttv*,unsigned int) ;

__attribute__((used)) static void
FUNC_5(struct bttv *VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7;

 VAR_4->input = VAR_5;
 if (VAR_3) {
  FUNC_2(&VAR_4->s_lock,VAR_7);
  if (VAR_4->curr.frame_irq) {

   VAR_4->new_input = VAR_5;
  } else {
   FUNC_4(VAR_4,VAR_5);
  }
  FUNC_3(&VAR_4->s_lock,VAR_7);
 } else {
  FUNC_4(VAR_4,VAR_5);
 }
 FUNC_0(VAR_4, (VAR_4->tuner_type != VAR_0 && VAR_5 == 0) ?
    VAR_2 : VAR_1);
 FUNC_1(VAR_4, VAR_6);
}
