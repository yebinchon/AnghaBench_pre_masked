
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int changed; int removable; } ;
struct gendisk {struct pd_unit* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct pd_unit*,int ) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_1)
{
 struct pd_unit *VAR_2 = VAR_1->private_data;
 int VAR_3;
 if (!VAR_2->removable)
  return 0;
 FUNC_0(VAR_2, VAR_0);
 VAR_3 = VAR_2->changed;
 VAR_2->changed = 0;
 return VAR_3;
}
