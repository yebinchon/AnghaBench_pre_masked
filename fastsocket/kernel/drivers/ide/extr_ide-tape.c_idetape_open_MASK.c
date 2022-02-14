
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_tape_obj {int dummy; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 struct ide_tape_obj* FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct ide_tape_obj *VAR_3 = FUNC_0(VAR_1->bd_disk, 0, 0);

 if (!VAR_3)
  return -VAR_0;

 return 0;
}
