
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_txq {int size; scalar_t__ cidx; TYPE_1__* stat; } ;
struct TYPE_2__ {int cidx; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(const struct sge_txq *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->stat->cidx);
 VAR_1 -= VAR_0->cidx;
 return VAR_1 < 0 ? VAR_1 + VAR_0->size : VAR_1;
}
