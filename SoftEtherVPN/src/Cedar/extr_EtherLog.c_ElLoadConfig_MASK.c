
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int AutoDeleteCheckDiskFreeSpaceMin; int HashedPassword; int CfgRw; int Port; } ;
typedef int FOLDER ;
typedef TYPE_1__ EL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*) ;

bool FUNC_5(EL *VAR_3)
{
 FOLDER *VAR_4;
 bool VAR_5 = 0;

 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_3->Port = VAR_1;

 VAR_3->CfgRw = FUNC_2(&VAR_4, VAR_2);

 if (VAR_4 != ((void*)0))
 {
  FUNC_1(VAR_3, VAR_4);

  FUNC_0(VAR_4);
 }
 else
 {
  char *VAR_6 = "";
  FUNC_3(VAR_3->HashedPassword, VAR_6, FUNC_4(VAR_6));
  VAR_3->AutoDeleteCheckDiskFreeSpaceMin = VAR_0;
 }

 return VAR_5;
}
