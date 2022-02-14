
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfsbuf {int nb_validoff; int nb_bufsize; int nb_validend; } ;
typedef scalar_t__ off_t ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_3__ {int n_size; } ;


 scalar_t__ FUNC_0 (struct nfsbuf*) ;
 scalar_t__ FUNC_1 (struct nfsbuf*,int) ;
 int VAR_0 ;

void
FUNC_2(nfsnode_t VAR_1, struct nfsbuf *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = VAR_2->nb_validoff/VAR_0;
 while (VAR_3 >= 0 && FUNC_1(VAR_2,VAR_3))
  VAR_3--;
 VAR_2->nb_validoff = (VAR_3+1) * VAR_0;

 VAR_4 = VAR_2->nb_bufsize/VAR_0;
 VAR_3 = VAR_2->nb_validend/VAR_0;
 while (VAR_3 < VAR_4 && FUNC_1(VAR_2,VAR_3))
  VAR_3++;
 VAR_2->nb_validend = VAR_3 * VAR_0;

 if (FUNC_0(VAR_2) + VAR_2->nb_validend > (off_t)VAR_1->n_size)
  VAR_2->nb_validend = VAR_1->n_size % VAR_2->nb_bufsize;
}
