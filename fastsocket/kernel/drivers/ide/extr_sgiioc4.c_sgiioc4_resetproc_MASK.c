
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ide_cmd {int dummy; } ;
struct TYPE_8__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_7__ {struct ide_cmd cmd; } ;


 int FUNC_0 (TYPE_2__*,struct ide_cmd*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_0)
{
 struct ide_cmd *VAR_1 = &VAR_0->hwif->cmd;

 FUNC_2(VAR_0);
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0);
}
