
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dlm_ls {TYPE_1__* ls_dirtbl; } ;
struct dlm_direntry {int list; int length; int name; } ;
struct TYPE_2__ {int list; } ;


 size_t FUNC_0 (struct dlm_ls*,int ,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct dlm_ls *VAR_0, struct dlm_direntry *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->name, VAR_1->length);
 FUNC_1(&VAR_1->list, &VAR_0->ls_dirtbl[VAR_2].list);
}
