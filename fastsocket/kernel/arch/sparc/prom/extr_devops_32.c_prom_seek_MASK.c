
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* v2_dev_seek ) (int,unsigned int,unsigned int) ;} ;
struct TYPE_4__ {int (* v0_seekdev ) (int,unsigned int,unsigned int) ;} ;
struct TYPE_6__ {TYPE_2__ pv_v2devops; TYPE_1__ pv_v0devops; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,unsigned int,unsigned int) ;
 int FUNC_4 (int,unsigned int,unsigned int) ;

void
FUNC_5(int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 FUNC_1(&VAR_0, VAR_6);
 switch(VAR_1) {
 case 130:
  (*(VAR_2->pv_v0devops.v0_seekdev))(VAR_3, VAR_4, VAR_5);
  break;
 case 129:
 case 128:
  (*(VAR_2->pv_v2devops.v2_dev_seek))(VAR_3, VAR_4, VAR_5);
  break;
 default:
  break;
 };
 FUNC_0();
 FUNC_2(&VAR_0, VAR_6);

 return;
}
