
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etr_eacr {scalar_t__ e0; scalar_t__ e1; int dp; } ;
typedef int eacr ;


 struct etr_eacr VAR_0 ;
 int FUNC_0 (struct etr_eacr*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct etr_eacr*,struct etr_eacr*,int) ;

__attribute__((used)) static void FUNC_3(struct etr_eacr VAR_2)
{
 int VAR_3;

 if (FUNC_2(&VAR_0, &VAR_2, sizeof(VAR_2)) == 0)

  return;




 VAR_3 = VAR_0.e0 > VAR_2.e0 || VAR_0.e1 > VAR_2.e1 ||
  (VAR_0.dp ^ VAR_2.dp) != 0;
 VAR_0 = VAR_2;
 FUNC_0(&VAR_0);
 if (VAR_3)
  VAR_1 = FUNC_1();
}
