
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_state {int lscsa; } ;
struct spu {int dummy; } ;


 int FUNC_0 (struct spu*) ;
 int FUNC_1 (struct spu*,int ,unsigned int*,int) ;

__attribute__((used)) static inline void FUNC_2(struct spu_state *VAR_0, struct spu *VAR_1,
  unsigned int *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0->lscsa, VAR_2, VAR_3);
}
