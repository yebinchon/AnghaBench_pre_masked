
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {unsigned int processed; unsigned int cleaned; unsigned int in_use; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,struct sge_txq*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct adapter *VAR_0,
      struct sge_txq *VAR_1,
      unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1->processed - VAR_1->cleaned;

 VAR_3 = FUNC_1(VAR_2, VAR_3);
 if (VAR_3) {
  FUNC_0(VAR_0, VAR_1, VAR_3);
  VAR_1->cleaned += VAR_3;
  VAR_1->in_use -= VAR_3;
 }
 return VAR_1->processed - VAR_1->cleaned;
}
