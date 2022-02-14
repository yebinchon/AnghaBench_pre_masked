
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bteinfo_s {int dummy; } ;
struct TYPE_3__ {struct bteinfo_s* bte_if; } ;
typedef TYPE_1__ nodepda_t ;
typedef int nasid_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct bteinfo_s *FUNC_2(nasid_t VAR_0, int VAR_1)
{
 nodepda_t *VAR_2;

 if (FUNC_1(VAR_0) == -1)
  return (struct bteinfo_s *)((void*)0);

 VAR_2 = FUNC_0(FUNC_1(VAR_0));
 return &VAR_2->bte_if[VAR_1];

}
