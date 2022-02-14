
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int * sock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct connectdata*,int) ;
 scalar_t__ FUNC_1 (struct connectdata*,int) ;
 int FUNC_2 (int ,int ) ;

bool FUNC_3(struct connectdata *VAR_1, int VAR_2)
{
  int VAR_3;

  if(FUNC_1(VAR_1, VAR_2) ||
     FUNC_0(VAR_1, VAR_2))
    return 1;

  VAR_3 = FUNC_2(VAR_1->sock[VAR_2], 0);
  return (VAR_3 > 0 && (VAR_3 & VAR_0));
}
