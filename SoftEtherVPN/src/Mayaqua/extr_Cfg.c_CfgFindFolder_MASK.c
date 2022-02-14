
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Name; int Folders; } ;
typedef TYPE_1__ FOLDER ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;

FOLDER *FUNC_5(FOLDER *VAR_0, char *VAR_1)
{
 FOLDER *VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3.Name = FUNC_4(FUNC_3(VAR_1) + 1);
 FUNC_2(VAR_3.Name, 0, VAR_1);
 VAR_2 = FUNC_1(VAR_0->Folders, &VAR_3);
 FUNC_0(VAR_3.Name);

 return VAR_2;
}
