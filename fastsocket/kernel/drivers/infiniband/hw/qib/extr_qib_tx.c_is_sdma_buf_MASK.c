
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int first_sendbuf; unsigned int last_sendbuf; } ;
struct qib_pportdata {TYPE_1__ sdma_state; } ;
struct qib_devdata {unsigned int num_pports; struct qib_pportdata* pport; } ;



__attribute__((used)) static struct qib_pportdata *FUNC_0(struct qib_devdata *VAR_0, unsigned VAR_1)
{
 struct qib_pportdata *VAR_2;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_pports; VAR_3++) {
  VAR_2 = VAR_0->pport + VAR_3;
  if (VAR_1 >= VAR_2->sdma_state.first_sendbuf &&
      VAR_1 < VAR_2->sdma_state.last_sendbuf)
   return VAR_2;
 }
 return ((void*)0);
}
