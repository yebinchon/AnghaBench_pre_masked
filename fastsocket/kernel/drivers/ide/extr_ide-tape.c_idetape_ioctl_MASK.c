
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_tape_obj {int * drive; } ;
struct block_device {int bd_disk; } ;
typedef int ide_drive_t ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct block_device*,unsigned int,unsigned long) ;
 struct ide_tape_obj* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_2, fmode_t VAR_3,
   unsigned int VAR_4, unsigned long VAR_5)
{
 struct ide_tape_obj *VAR_6 = FUNC_1(VAR_2->bd_disk, VAR_1);
 ide_drive_t *VAR_7 = VAR_6->drive;
 int VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_4, VAR_5);
 if (VAR_8 == -VAR_0)
  VAR_8 = FUNC_2(VAR_7, VAR_4, VAR_5);
 return VAR_8;
}
