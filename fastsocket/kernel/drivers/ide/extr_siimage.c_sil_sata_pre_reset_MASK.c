
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ media; int special_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(ide_drive_t *VAR_3)
{
 if (VAR_3->media == VAR_2) {
  VAR_3->special_flags &=
   ~(VAR_1 | VAR_0);
 }
}
