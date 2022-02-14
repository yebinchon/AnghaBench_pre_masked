
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_txq {int cidx; int in_use; scalar_t__ size; TYPE_1__* stat; } ;
struct TYPE_2__ {int cidx; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct sge_txq *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->stat->cidx);
 int VAR_2 = VAR_1 - VAR_0->cidx;

 if (VAR_2 < 0)
  VAR_2 += VAR_0->size;

 VAR_0->in_use -= VAR_2;
 VAR_0->cidx = VAR_1;
}
