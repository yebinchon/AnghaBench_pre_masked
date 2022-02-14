
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rubin_state {int q; int pp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct rubin_state *VAR_3)
{

 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(&VAR_3->pp, (VAR_2 & VAR_3->q) ? 1 : 0, 1);
  VAR_3->q &= VAR_0;
  VAR_3->q <<= 1;
 }
}
