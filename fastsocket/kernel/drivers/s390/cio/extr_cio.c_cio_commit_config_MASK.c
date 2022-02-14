
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int schib; int schid; } ;
struct schib {int dummy; } ;
typedef int schib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct subchannel*,struct schib*) ;
 int FUNC_1 (struct subchannel*,struct schib*) ;
 int FUNC_2 (struct schib*) ;
 int FUNC_3 (int *,struct schib*,int) ;
 int FUNC_4 (int ,struct schib*) ;
 scalar_t__ FUNC_5 (int ,struct schib*) ;
 int FUNC_6 (int) ;

int FUNC_7(struct subchannel *VAR_3)
{
 struct schib VAR_4;
 int VAR_5, VAR_6, VAR_7 = 0;

 if (FUNC_5(VAR_3->schid, &VAR_4) || !FUNC_2(&VAR_4))
  return -VAR_2;

 for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {

  FUNC_0(VAR_3, &VAR_4);
  VAR_5 = FUNC_4(VAR_3->schid, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  switch (VAR_5) {
  case 0:
   if (FUNC_5(VAR_3->schid, &VAR_4) ||
       !FUNC_2(&VAR_4))
    return -VAR_2;
   if (FUNC_1(VAR_3, &VAR_4)) {

    FUNC_3(&VAR_3->schib, &VAR_4, sizeof(VAR_4));
    return 0;
   }
   VAR_7 = -VAR_0;
   break;
  case 1:
   return -VAR_1;
  case 2:
   FUNC_6(100);
   VAR_7 = -VAR_1;
   break;
  case 3:
   return -VAR_2;
  }
 }
 return VAR_7;
}
