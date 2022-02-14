
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cm_control {int alg_done_int_en; int alg_go; int cm_control_reg; } ;
struct algoblock {int algoStepCount; int intrVector; int intrHostDest; int amoModType; int amoHostDest; } ;
struct mbcs_soft {int algolock; int algo_done; void* mmr_base; struct algoblock algo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (void*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline int FUNC_6(struct mbcs_soft *VAR_2)
{
 struct algoblock *VAR_3 = &VAR_2->algo;
 void *VAR_4 = VAR_2->mmr_base;
 union cm_control VAR_5;

 if (FUNC_4(&VAR_2->algolock))
  return -VAR_0;

 FUNC_2(&VAR_2->algo_done, 0);

 FUNC_3(VAR_4,
   VAR_3->amoHostDest,
   VAR_3->amoModType,
   VAR_3->intrHostDest,
   VAR_3->intrVector, VAR_3->algoStepCount);


 VAR_5.cm_control_reg = FUNC_0(VAR_4, VAR_1);
 VAR_5.alg_done_int_en = 1;
 VAR_5.alg_go = 1;
 FUNC_1(VAR_4, VAR_1, VAR_5.cm_control_reg);

 FUNC_5(&VAR_2->algolock);

 return 0;
}
