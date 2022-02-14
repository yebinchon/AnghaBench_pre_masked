
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * Parent; int Folders; } ;
typedef TYPE_1__ FOLDER ;
typedef int BUF ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_0 ;

FOLDER *FUNC_5(BUF *VAR_1)
{
 FOLDER *VAR_2, *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_3 = FUNC_0(((void*)0), "tmp");

 while (1)
 {

  if (FUNC_3(VAR_1, VAR_3) == 0)
  {
   break;
  }
 }


 VAR_2 = FUNC_2(VAR_3, VAR_0);
 if (VAR_2 == ((void*)0))
 {

  FUNC_1(VAR_3);
  return ((void*)0);
 }


 FUNC_4(VAR_3->Folders, VAR_2);
 VAR_2->Parent = ((void*)0);


 FUNC_1(VAR_3);


 return VAR_2;
}
