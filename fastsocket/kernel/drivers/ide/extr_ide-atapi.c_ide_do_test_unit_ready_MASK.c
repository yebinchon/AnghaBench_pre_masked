
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_atapi_pc {int * c; } ;
struct gendisk {int dummy; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (struct ide_atapi_pc*) ;
 int FUNC_1 (int *,struct gendisk*,struct ide_atapi_pc*,int *,int ) ;

int FUNC_2(ide_drive_t *VAR_1, struct gendisk *VAR_2)
{
 struct ide_atapi_pc VAR_3;

 FUNC_0(&VAR_3);
 VAR_3.c[0] = VAR_0;

 return FUNC_1(VAR_1, VAR_2, &VAR_3, ((void*)0), 0);
}
