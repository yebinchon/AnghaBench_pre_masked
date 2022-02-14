
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {scalar_t__ removable; int access; } ;
struct gendisk {struct pd_unit* private_data; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (struct pd_unit*,int ) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct pd_unit *VAR_3 = VAR_1->private_data;

 if (!--VAR_3->access && VAR_3->removable)
  FUNC_0(VAR_3, VAR_0);

 return 0;
}
