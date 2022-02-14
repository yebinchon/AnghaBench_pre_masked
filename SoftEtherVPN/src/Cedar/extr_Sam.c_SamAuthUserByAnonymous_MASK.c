
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ AuthType; int lock; } ;
typedef TYPE_1__ USER ;
typedef int HUB ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

bool FUNC_6(HUB *VAR_1, char *VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_1);
 {
  USER *VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4)
  {
   FUNC_3(VAR_4->lock);
   {
    if (VAR_4->AuthType == VAR_0)
    {
     VAR_3 = 1;
    }
   }
   FUNC_5(VAR_4->lock);
  }
  FUNC_4(VAR_4);
 }
 FUNC_2(VAR_1);

 return VAR_3;
}
