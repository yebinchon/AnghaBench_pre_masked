
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_state {int ca; int entropy; int ctr_drbg; int conf; int ctx; } ;


 int FUNC_0 (struct ssl_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(void *VAR_0)
{
   struct ssl_state *VAR_1 = (struct ssl_state*)VAR_0;

   if (!VAR_1)
      return;

   FUNC_4(&VAR_1->ctx);
   FUNC_3(&VAR_1->conf);
   FUNC_1(&VAR_1->ctr_drbg);
   FUNC_2(&VAR_1->entropy);




   FUNC_0(VAR_1);
}
