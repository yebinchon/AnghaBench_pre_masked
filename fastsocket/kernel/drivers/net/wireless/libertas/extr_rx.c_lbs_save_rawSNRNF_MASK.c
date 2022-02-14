
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxpd {int nf; int snr; } ;
struct lbs_private {size_t numSNRNF; size_t nextSNRNF; int * rawNF; int * rawSNR; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct lbs_private *VAR_1, struct rxpd *VAR_2)
{
 if (VAR_1->numSNRNF < VAR_0)
  VAR_1->numSNRNF++;
 VAR_1->rawSNR[VAR_1->nextSNRNF] = VAR_2->snr;
 VAR_1->rawNF[VAR_1->nextSNRNF] = VAR_2->nf;
 VAR_1->nextSNRNF++;
 if (VAR_1->nextSNRNF >= VAR_0)
  VAR_1->nextSNRNF = 0;
 return;
}
