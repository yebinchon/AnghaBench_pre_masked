
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {struct amiga_floppy_struct* private_data; } ;
struct amiga_floppy_struct {int track; scalar_t__ dirty; } ;
struct TYPE_2__ {int pra; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 struct amiga_floppy_struct* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_5(struct gendisk *VAR_5)
{
 struct amiga_floppy_struct *VAR_6 = VAR_5->private_data;
 int VAR_7 = VAR_6 - VAR_2;
 int VAR_8;
 static int VAR_9 = 1;

 if (VAR_9)
  VAR_8 = VAR_9--;
 else {
  FUNC_3(VAR_7);
  FUNC_2 (VAR_7);
  VAR_8 = !(VAR_1.pra & VAR_0);
  FUNC_0 (VAR_7);
  FUNC_4();
 }

 if (VAR_8) {
  FUNC_1(VAR_7);
  VAR_6->track = -1;
  VAR_6->dirty = 0;
  VAR_4 = 0;
  VAR_3 = 0;
  return 1;
 }
 return 0;
}
