
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_tskim_s {int tsk_status; int dtsk; TYPE_1__* bfa; int itnim; } ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {int bfad; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct bfa_tskim_s*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, bfa_boolean_t VAR_3)
{
 struct bfa_tskim_s *VAR_4 = VAR_2;

 if (!VAR_3) {
  FUNC_1(VAR_4, VAR_0);
  return;
 }

 FUNC_2(VAR_4->itnim, VAR_1);
 FUNC_0(VAR_4->bfa->bfad, VAR_4->dtsk, VAR_4->tsk_status);
}
