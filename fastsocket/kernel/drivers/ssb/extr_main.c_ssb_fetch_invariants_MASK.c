
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_init_invariants {int has_cardbus_slot; int sprom; int boardinfo; } ;
struct ssb_bus {int has_cardbus_slot; int sprom; int boardinfo; } ;
typedef int (* ssb_invariants_func_t ) (struct ssb_bus*,struct ssb_init_invariants*) ;
typedef int iv ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct ssb_init_invariants*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ssb_bus *VAR_0,
    ssb_invariants_func_t VAR_1)
{
 struct ssb_init_invariants VAR_2;
 int VAR_3;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_3 = VAR_1(VAR_0, &VAR_2);
 if (VAR_3)
  goto out;
 FUNC_0(&VAR_0->boardinfo, &VAR_2.boardinfo, sizeof(VAR_2.boardinfo));
 FUNC_0(&VAR_0->sprom, &VAR_2.sprom, sizeof(VAR_2.sprom));
 VAR_0->has_cardbus_slot = VAR_2.has_cardbus_slot;
out:
 return VAR_3;
}
