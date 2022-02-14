
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct dm_dev* private; } ;
struct dm_dev {int dummy; } ;


 int FUNC_0 (struct dm_target*,struct dm_dev*) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0)
{
 struct dm_dev *VAR_1 = VAR_0->private;
 FUNC_0(VAR_0, VAR_1);
}
