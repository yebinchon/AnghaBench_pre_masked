
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_4__ {int dev_flags; int retry_pio; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(ide_drive_t *VAR_1, struct request *VAR_2, int VAR_3,
        unsigned int VAR_4)
{




 if ((VAR_1->dev_flags & VAR_0) &&
     VAR_1->retry_pio <= 3) {
  VAR_1->dev_flags &= ~VAR_0;
  FUNC_1(VAR_1);
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
