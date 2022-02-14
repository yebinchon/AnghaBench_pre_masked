
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {TYPE_1__* phba; } ;
struct TYPE_2__ {char* ModelName; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 char* VAR_1 ;
 int FUNC_1 (char*,size_t,char*,char*,char*,char*) ;

int
FUNC_2(struct lpfc_vport *VAR_2, char *VAR_3,
 size_t VAR_4)
{
 char VAR_5[VAR_0];
 int VAR_6;

 FUNC_0(VAR_2->phba, VAR_5, 0);

 VAR_6 = FUNC_1(VAR_3, VAR_4, "Emulex %s FV%s DV%s",
  VAR_2->phba->ModelName, VAR_5, VAR_1);
 return VAR_6;
}
