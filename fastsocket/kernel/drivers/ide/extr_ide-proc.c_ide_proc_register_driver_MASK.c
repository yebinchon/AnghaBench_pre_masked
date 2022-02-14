
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ide_driver {int (* proc_entries ) (TYPE_1__*) ;int (* proc_devsets ) (TYPE_1__*) ;} ;
struct TYPE_6__ {int proc; int settings; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(ide_drive_t *VAR_1, struct ide_driver *VAR_2)
{
 FUNC_1(&VAR_0);
 VAR_1->settings = VAR_2->proc_devsets(VAR_1);
 FUNC_2(&VAR_0);

 FUNC_0(VAR_1->proc, VAR_2->proc_entries(VAR_1), VAR_1);
}
