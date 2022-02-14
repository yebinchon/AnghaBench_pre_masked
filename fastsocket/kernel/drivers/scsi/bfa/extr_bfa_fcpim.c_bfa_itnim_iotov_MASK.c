
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_itnim_s {int ditn; int iotov_active; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_itnim_s*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct bfa_itnim_s *VAR_2 = VAR_1;

 VAR_2->iotov_active = VAR_0;

 FUNC_1(VAR_2->ditn);
 FUNC_2(VAR_2);
 FUNC_0(VAR_2->ditn);
}
