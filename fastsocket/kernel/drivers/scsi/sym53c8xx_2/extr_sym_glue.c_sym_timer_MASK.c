
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_3__ {int lasttime; scalar_t__ settle_time_valid; int settle_time; TYPE_2__ timer; } ;
struct sym_hcb {TYPE_1__ s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 unsigned long VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct sym_hcb*) ;
 int VAR_3 ;
 int FUNC_3 (struct sym_hcb*) ;
 scalar_t__ FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct sym_hcb *VAR_4)
{
 unsigned long VAR_5 = VAR_2;




 VAR_4->s.timer.expires = VAR_5 + VAR_1;
 FUNC_0(&VAR_4->s.timer);





 if (VAR_4->s.settle_time_valid) {
  if (FUNC_4(VAR_4->s.settle_time, VAR_5)) {
   if (VAR_3 >= 2 )
    FUNC_1("%s: command processing resumed\n",
           FUNC_2(VAR_4));
   VAR_4->s.settle_time_valid = 0;
  }
  return;
 }




 if (VAR_4->s.lasttime + 4*VAR_0 < VAR_5) {
  VAR_4->s.lasttime = VAR_5;
 }
}
