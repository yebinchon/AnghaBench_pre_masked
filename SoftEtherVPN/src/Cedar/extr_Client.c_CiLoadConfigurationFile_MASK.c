
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int path ;
struct TYPE_4__ {void* CfgRw; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_1 ;
 void* FUNC_3 (int **,char*) ;

bool FUNC_4(CLIENT *VAR_2)
{
 bool VAR_3;
 FOLDER *VAR_4;
 char VAR_5[VAR_1];

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_1(VAR_5, sizeof(VAR_5)))
 {
  VAR_2->CfgRw = FUNC_3(&VAR_4, VAR_5);
 }
 else
 {
  VAR_2->CfgRw = FUNC_3(&VAR_4, VAR_0);
 }

 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_2, VAR_4);

 FUNC_0(VAR_4);

 return VAR_3;
}
