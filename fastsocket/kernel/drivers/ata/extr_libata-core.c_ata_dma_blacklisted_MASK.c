
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_device {int flags; int horkage; TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct ata_device *VAR_3)
{




 if ((VAR_3->link->ap->flags & VAR_1) &&
     (VAR_3->flags & VAR_0))
  return 1;
 return (VAR_3->horkage & VAR_2) ? 1 : 0;
}
