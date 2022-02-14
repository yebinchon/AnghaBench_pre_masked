
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct pktq {int hi_prec; TYPE_2__* q; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;
struct TYPE_4__ {TYPE_1__ skblist; } ;



int FUNC_0(struct pktq *VAR_0, uint VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 <= VAR_0->hi_prec; VAR_2++)
  if (VAR_1 & (1 << VAR_2))
   VAR_3 += VAR_0->q[VAR_2].skblist.qlen;

 return VAR_3;
}
