
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_itnim_s {int ditn; scalar_t__ iotov_active; } ;
typedef scalar_t__ bfa_boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_itnim_s*) ;
 int FUNC_3 (struct bfa_itnim_s*) ;

__attribute__((used)) static void
FUNC_4(struct bfa_itnim_s *VAR_2)
{
 bfa_boolean_t VAR_3 = VAR_0;

 if (VAR_2->iotov_active)
  VAR_3 = VAR_1;

 FUNC_3(VAR_2);
 if (VAR_3)
  FUNC_1(VAR_2->ditn);
 FUNC_2(VAR_2);
 if (VAR_3)
  FUNC_0(VAR_2->ditn);
}
