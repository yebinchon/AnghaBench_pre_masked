
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int drive; struct gendisk* gd; int name; } ;
struct gendisk {int first_minor; int queue; struct pd_unit* private_data; int major; int * fops; int disk_name; } ;


 int VAR_0 ;
 struct gendisk* FUNC_0 (int) ;
 int VAR_1 ;
 struct pd_unit* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct pd_unit*,int ) ;
 int FUNC_2 (struct gendisk*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pd_unit *VAR_6)
{
 struct gendisk *VAR_7 = FUNC_0(1 << VAR_0);
 if (!VAR_7)
  return;
 FUNC_3(VAR_7->disk_name, VAR_6->name);
 VAR_7->fops = &VAR_3;
 VAR_7->major = VAR_1;
 VAR_7->first_minor = (VAR_6 - VAR_2) << VAR_0;
 VAR_6->gd = VAR_7;
 VAR_7->private_data = VAR_6;
 VAR_7->queue = VAR_5;

 if (VAR_6->drive == -1) {
  for (VAR_6->drive = 0; VAR_6->drive <= 1; VAR_6->drive++)
   if (FUNC_1(VAR_6, VAR_4) == 0)
    return;
 } else if (FUNC_1(VAR_6, VAR_4) == 0)
  return;
 VAR_6->gd = ((void*)0);
 FUNC_2(VAR_7);
}
