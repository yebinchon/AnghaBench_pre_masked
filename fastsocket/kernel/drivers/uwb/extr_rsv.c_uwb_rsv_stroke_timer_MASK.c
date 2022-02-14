
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv {scalar_t__ state; int timer; scalar_t__ is_multicast; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct uwb_rsv *VAR_8)
{
 int VAR_9 = VAR_0;






 if (VAR_8->is_multicast) {
  if (VAR_8->state == VAR_2
      || VAR_8->state == VAR_4
      || VAR_8->state == VAR_3
      || VAR_8->state == VAR_5)
   VAR_9 = 1;
  if (VAR_8->state == VAR_1)
   VAR_9 = 0;

 }

 if (VAR_9 > 0) {




  unsigned VAR_10 = (VAR_9 + 2) * VAR_6;
  FUNC_1(&VAR_8->timer, VAR_7 + FUNC_2(VAR_10));
 } else
  FUNC_0(&VAR_8->timer);
}
