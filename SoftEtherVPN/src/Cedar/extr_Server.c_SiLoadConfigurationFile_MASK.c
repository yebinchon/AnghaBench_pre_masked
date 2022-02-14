
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Cedar; int CfgRw; } ;
struct TYPE_5__ {int Bridge; } ;
typedef TYPE_2__ SERVER ;
typedef int FOLDER ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char*,int,int ) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int VAR_4 ;

bool FUNC_3(SERVER *VAR_5)
{

 bool VAR_6 = 0;
 FOLDER *VAR_7;
 char *VAR_8 = VAR_2;
 if (VAR_5 == ((void*)0))
 {
  return 0;
 }


 VAR_5->CfgRw = FUNC_1(&VAR_7,
  VAR_5->Cedar->Bridge == 0 ? VAR_8 : VAR_0, 0,
  VAR_5->Cedar->Bridge == 0 ? VAR_3 : VAR_1);

 if (VAR_4)
 {
  FUNC_0(VAR_7);
  VAR_7 = ((void*)0);
  VAR_4 = 0;
 }

 if (VAR_7 == ((void*)0))
 {
  return 0;
 }

 VAR_6 = FUNC_2(VAR_5, VAR_7);

 FUNC_0(VAR_7);

 return VAR_6;
}
