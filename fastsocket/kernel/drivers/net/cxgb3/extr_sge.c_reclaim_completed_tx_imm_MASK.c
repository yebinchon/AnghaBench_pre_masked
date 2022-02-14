
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {unsigned int processed; unsigned int cleaned; unsigned int in_use; } ;



__attribute__((used)) static inline void FUNC_0(struct sge_txq *VAR_0)
{
 unsigned int VAR_1 = VAR_0->processed - VAR_0->cleaned;

 VAR_0->in_use -= VAR_1;
 VAR_0->cleaned += VAR_1;
}
