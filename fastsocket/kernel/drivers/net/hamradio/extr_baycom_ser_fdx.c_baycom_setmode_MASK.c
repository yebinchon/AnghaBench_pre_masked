
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct baycom_state {unsigned int baud; int opt_dcd; } ;


 unsigned int FUNC_0 (char const*,int *,int) ;
 scalar_t__ FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct baycom_state *VAR_0, const char *VAR_1)
{
 unsigned int VAR_2;

 if (!FUNC_2(VAR_1, "ser", 3)) {
  VAR_2 = FUNC_0(VAR_1+3, ((void*)0), 10);
  if (VAR_2 >= 3 && VAR_2 <= 48)
   VAR_0->baud = VAR_2*100;
 }
 if (FUNC_1(VAR_1, '*'))
  VAR_0->opt_dcd = 0;
 else if (FUNC_1(VAR_1, '+'))
  VAR_0->opt_dcd = -1;
 else
  VAR_0->opt_dcd = 1;
 return 0;
}
