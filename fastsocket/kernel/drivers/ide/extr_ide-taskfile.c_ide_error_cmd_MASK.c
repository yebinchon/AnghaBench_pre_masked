
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ide_cmd {int tf_flags; int nbytes; int nleft; scalar_t__ protocol; } ;
struct TYPE_4__ {int mult_count; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(ide_drive_t *VAR_5, struct ide_cmd *VAR_6)
{
 if (VAR_6->tf_flags & VAR_1) {
  int VAR_7 = VAR_6->nbytes - VAR_6->nleft;

  if (VAR_6->protocol == VAR_0 &&
      ((VAR_6->tf_flags & VAR_3) || VAR_6->nleft == 0)) {
   if (VAR_6->tf_flags & VAR_2)
    VAR_7 -= VAR_5->mult_count << 9;
   else
    VAR_7 -= VAR_4;
  }

  if (VAR_7 > 0)
   FUNC_0(VAR_5, 0, VAR_7);
 }
}
