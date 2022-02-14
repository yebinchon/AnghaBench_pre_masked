
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int poll_interval; int poll_timer; scalar_t__ poll_cnt; int (* poll_handler ) (struct gameport*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gameport*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct gameport *VAR_2 = (struct gameport *)VAR_1;

 VAR_2->poll_handler(VAR_2);
 if (VAR_2->poll_cnt)
  FUNC_0(&VAR_2->poll_timer, VAR_0 + FUNC_1(VAR_2->poll_interval));
}
