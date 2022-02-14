
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rubin_state {int rec_q; int pp; scalar_t__ bit_number; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rubin_state*,int,int*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rubin_state *VAR_1, int VAR_2, int *VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_3);


 VAR_1->rec_q = 0;

 for (VAR_1->bit_number = 0; VAR_1->bit_number++ < VAR_0;
      VAR_1->rec_q = VAR_1->rec_q * 2 + (long) (FUNC_1(&VAR_1->pp)))
  ;
}
