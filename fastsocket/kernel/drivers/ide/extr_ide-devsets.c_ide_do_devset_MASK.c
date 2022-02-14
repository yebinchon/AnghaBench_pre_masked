
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int (* special ) (int *,int) ;int errors; int * cmd; } ;
typedef int ide_startstop_t ;
typedef int ide_drive_t ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_0 ;

ide_startstop_t FUNC_2(ide_drive_t *VAR_1, struct request *VAR_2)
{
 int VAR_3, (*VAR_4)(ide_drive_t *, int) = VAR_2->special;

 VAR_3 = VAR_4(VAR_1, *(int *)&VAR_2->cmd[1]);
 if (VAR_3)
  VAR_2->errors = VAR_3;
 FUNC_1(VAR_1, VAR_3, FUNC_0(VAR_2));
 return VAR_0;
}
