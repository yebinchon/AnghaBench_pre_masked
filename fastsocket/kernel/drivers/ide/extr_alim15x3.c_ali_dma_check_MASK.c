
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ide_cmd {int tf_flags; } ;
struct TYPE_3__ {scalar_t__ media; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(ide_drive_t *VAR_3, struct ide_cmd *VAR_4)
{
 if (VAR_2 < 0xC2 && VAR_3->media != VAR_1) {
  if (VAR_4->tf_flags & VAR_0)
   return 1;
 }
 return 0;
}
