
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * fd_stdin; } ;
struct TYPE_4__ {int (* v2_dev_read ) (int ,char*,int) ;} ;
struct TYPE_6__ {int (* pv_nbgetchar ) () ;TYPE_2__ pv_v2bootargs; TYPE_1__ pv_v2devops; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;

int
FUNC_5(void)
{
 static char VAR_3;
 int VAR_4 = -1;
 unsigned long VAR_5;

 FUNC_1(&VAR_0, VAR_5);
 switch(VAR_1) {
 case 130:
  VAR_4 = (*(VAR_2->pv_nbgetchar))();
  break;
 case 129:
 case 128:
  if( (*(VAR_2->pv_v2devops).v2_dev_read)(*VAR_2->pv_v2bootargs.fd_stdin , &VAR_3, 0x1) == 1) {
   VAR_4 = VAR_3;
  } else {
   VAR_4 = -1;
  }
  break;
 default:
  VAR_4 = -1;
  break;
 };
 FUNC_0();
 FUNC_2(&VAR_0, VAR_5);
 return VAR_4;
}
