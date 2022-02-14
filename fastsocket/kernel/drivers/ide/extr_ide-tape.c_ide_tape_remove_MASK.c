
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev; int disk; int driver; } ;
typedef TYPE_1__ idetape_tape_t ;
struct TYPE_6__ {TYPE_1__* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_1)
{
 idetape_tape_t *VAR_2 = VAR_1->driver_data;

 FUNC_1(VAR_1, VAR_2->driver);
 FUNC_0(&VAR_2->dev);
 FUNC_2(VAR_2->disk);

 FUNC_3(&VAR_0);
 FUNC_5(&VAR_2->dev);
 FUNC_4(&VAR_0);
}
