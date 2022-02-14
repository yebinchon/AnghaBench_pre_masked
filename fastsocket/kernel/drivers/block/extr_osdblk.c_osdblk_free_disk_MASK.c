
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osdblk_device {struct gendisk* disk; } ;
struct gendisk {int flags; scalar_t__ queue; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (struct gendisk*) ;

__attribute__((used)) static void FUNC_3(struct osdblk_device *VAR_1)
{
 struct gendisk *VAR_2 = VAR_1->disk;

 if (!VAR_2)
  return;

 if (VAR_2->flags & VAR_0)
  FUNC_1(VAR_2);
 if (VAR_2->queue)
  FUNC_0(VAR_2->queue);
 FUNC_2(VAR_2);
}
