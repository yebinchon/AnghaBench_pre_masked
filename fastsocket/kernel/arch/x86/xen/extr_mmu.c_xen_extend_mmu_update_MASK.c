
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multicall_space {struct mmu_update* args; TYPE_1__* mc; } ;
struct mmu_update {int dummy; } ;
struct TYPE_2__ {size_t* args; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*,struct mmu_update*,int,int *,int ) ;
 int VAR_2 ;
 struct multicall_space FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 struct multicall_space FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(const struct mmu_update *VAR_6)
{
 struct multicall_space VAR_7;
 struct mmu_update *VAR_8;

 VAR_7 = FUNC_3(VAR_2, sizeof(*VAR_8));

 if (VAR_7.mc != ((void*)0)) {
  FUNC_0(VAR_4, 1);
  FUNC_0(VAR_5[VAR_7.mc->args[1]], -1);

  VAR_7.mc->args[1]++;

  if (VAR_7.mc->args[1] < VAR_1)
   FUNC_0(VAR_5[VAR_7.mc->args[1]], 1);
  else
   FUNC_0(VAR_5[0], 1);
 } else {
  FUNC_0(VAR_3, 1);
  VAR_7 = FUNC_2(sizeof(*VAR_8));
  FUNC_1(VAR_7.mc, VAR_7.args, 1, ((void*)0), VAR_0);
  FUNC_0(VAR_5[1], 1);
 }

 VAR_8 = VAR_7.args;
 *VAR_8 = *VAR_6;
}
