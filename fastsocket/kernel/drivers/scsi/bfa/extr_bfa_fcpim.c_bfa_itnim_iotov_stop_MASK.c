
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_itnim_s {int timer; scalar_t__ iotov_active; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct bfa_itnim_s *VAR_1)
{
 if (VAR_1->iotov_active) {
  VAR_1->iotov_active = VAR_0;
  FUNC_0(&VAR_1->timer);
 }
}
