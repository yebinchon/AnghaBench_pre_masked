
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct aoetgt {int dummy; } ;
struct aoedev {int ntargets; struct aoetgt** targets; struct aoetgt** tgt; } ;


 int VAR_0 ;
 struct aoetgt** FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct aoetgt**) ;
 int FUNC_2 (struct aoetgt**,struct aoetgt**,int) ;

__attribute__((used)) static struct aoetgt **
FUNC_3(struct aoedev *VAR_1)
{
 ulong VAR_2, VAR_3;
 struct aoetgt **VAR_4;

 VAR_2 = VAR_1->ntargets;
 VAR_3 = VAR_2 * 2;
 VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_1->targets), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 FUNC_2(VAR_4, VAR_1->targets, sizeof(*VAR_1->targets) * VAR_2);
 VAR_1->tgt = VAR_4 + (VAR_1->tgt - VAR_1->targets);
 FUNC_1(VAR_1->targets);
 VAR_1->targets = VAR_4;
 VAR_1->ntargets = VAR_3;

 return &VAR_1->targets[VAR_2];
}
