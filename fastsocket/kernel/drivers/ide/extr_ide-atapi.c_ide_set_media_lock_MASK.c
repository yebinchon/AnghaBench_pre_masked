
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ide_atapi_pc {int* c; } ;
struct gendisk {int dummy; } ;
struct TYPE_4__ {int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ide_atapi_pc*) ;
 int FUNC_1 (TYPE_1__*,struct gendisk*,struct ide_atapi_pc*,int *,int ) ;

int FUNC_2(ide_drive_t *VAR_2, struct gendisk *VAR_3, int VAR_4)
{
 struct ide_atapi_pc VAR_5;

 if ((VAR_2->dev_flags & VAR_1) == 0)
  return 0;

 FUNC_0(&VAR_5);
 VAR_5.c[0] = VAR_0;
 VAR_5.c[4] = VAR_4;

 return FUNC_1(VAR_2, VAR_3, &VAR_5, ((void*)0), 0);
}
