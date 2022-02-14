
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dev; TYPE_1__* local; } ;
typedef TYPE_2__ isdn_net_dev ;
struct TYPE_5__ {scalar_t__ master; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

char *
FUNC_6(char *VAR_0)
{
 char *VAR_1 = FUNC_3(VAR_0, ',');
 isdn_net_dev *VAR_2;
 char VAR_3[10];

 if (VAR_1) {

  if (!FUNC_5(VAR_1 + 1))
   return ((void*)0);
  FUNC_4(VAR_3, VAR_1 + 1);
  *VAR_1 = 0;

  if (!(VAR_2 = FUNC_1(VAR_0)))
   return ((void*)0);

  if (VAR_2->local->master)
   return ((void*)0);

  if (FUNC_0(VAR_2))
   return ((void*)0);
  return (FUNC_2(VAR_3, VAR_2->dev));
 }
 return ((void*)0);
}
