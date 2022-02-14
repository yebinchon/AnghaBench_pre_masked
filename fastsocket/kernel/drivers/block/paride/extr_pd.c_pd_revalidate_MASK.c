
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int capacity; } ;
struct gendisk {struct pd_unit* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pd_unit*,int ) ;
 int FUNC_1 (struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_2(struct gendisk *VAR_1)
{
 struct pd_unit *VAR_2 = VAR_1->private_data;
 if (FUNC_0(VAR_2, VAR_0) == 0)
  FUNC_1(VAR_1, VAR_2->capacity);
 else
  FUNC_1(VAR_1, 0);
 return 0;
}
