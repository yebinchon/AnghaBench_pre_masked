
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int t ;
typedef int UINT ;
struct TYPE_8__ {int Value; int Name; } ;
struct TYPE_7__ {int AdminOptionList; } ;
typedef TYPE_1__ HUB ;
typedef TYPE_2__ ADMIN_OPTION ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;

UINT FUNC_6(HUB *VAR_0, char *VAR_1, UINT VAR_2)
{
 UINT VAR_3 = VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_0->AdminOptionList);
 {
  ADMIN_OPTION *VAR_4, VAR_5;

  FUNC_5(&VAR_5, sizeof(VAR_5));
  FUNC_2(VAR_5.Name, sizeof(VAR_5.Name), VAR_1);
  FUNC_3(VAR_5.Name);

  VAR_4 = FUNC_1(VAR_0->AdminOptionList, &VAR_5);

  if (VAR_4 != ((void*)0))
  {
   VAR_3 = VAR_4->Value;
  }
 }
 FUNC_4(VAR_0->AdminOptionList);

 return VAR_3;
}
