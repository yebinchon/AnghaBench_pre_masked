
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {scalar_t__ a_wait_bcon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct musb*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_2 ;

void FUNC_2(struct musb *VAR_3)
{
 if (FUNC_0(VAR_3)) {
  FUNC_1(&VAR_2, VAR_1 + VAR_0);
  VAR_3->a_wait_bcon = VAR_0;
 }
}
