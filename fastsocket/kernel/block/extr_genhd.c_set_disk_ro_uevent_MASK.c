
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {int dummy; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct gendisk*) ;
 int FUNC_1 (int *,int ,char**) ;

__attribute__((used)) static void FUNC_2(struct gendisk *VAR_1, int VAR_2)
{
 char VAR_3[] = "DISK_RO=1";
 char *VAR_4[] = { VAR_3, ((void*)0) };

 if (!VAR_2)
  VAR_3[8] = '0';
 FUNC_1(&FUNC_0(VAR_1)->kobj, VAR_0, VAR_4);
}
