
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcq_class {int cl_q; int * cl_sfb; TYPE_1__* cl_tif; } ;
typedef int pktsched_pkt_t ;
struct TYPE_2__ {int tif_ifq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 void FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static inline void
FUNC_6(struct tcq_class *VAR_0, pktsched_pkt_t *VAR_1)
{
 FUNC_0(VAR_0->cl_tif->tif_ifq);

 if (FUNC_3(&VAR_0->cl_q) && VAR_0->cl_sfb != ((void*)0)) {
  return (FUNC_5(VAR_0->cl_sfb, &VAR_0->cl_q, VAR_1));
 }

 return (FUNC_2(VAR_1, FUNC_4(&VAR_0->cl_q), FUNC_1(&VAR_0->cl_q)));
}
