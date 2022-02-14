
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_6__ {int num; int setup; int length; } ;
struct TYPE_8__ {int command; int arg; int driver; TYPE_1__ parm; } ;
typedef TYPE_3__ isdn_ctrl ;
struct TYPE_9__ {TYPE_2__* card; int driverId; int devicename; } ;
struct TYPE_7__ {int (* statcallb ) (TYPE_3__*) ;} ;




 int * VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int ,char*,...) ;
 TYPE_5__** VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(int VAR_2, int VAR_3,ulong VAR_4,char *VAR_5)
{
 isdn_ctrl VAR_6;





 if (VAR_5 != ((void*)0)){
  FUNC_1("%s: Event data: %s\n", VAR_1[VAR_2]->devicename,
   VAR_5);
  switch (VAR_3) {
   case 129:
    FUNC_0(&VAR_6.parm.length, VAR_5, sizeof(VAR_6.parm.length));
    break;
   case 128:
    FUNC_0(&VAR_6.parm.setup, VAR_5, sizeof(VAR_6.parm.setup));
    break;
   default:
    FUNC_2(VAR_6.parm.num, VAR_5);
  }
 }

 VAR_6.command = VAR_3;
 VAR_6.driver = VAR_1[VAR_2]->driverId;
 VAR_6.arg = VAR_4;
 return VAR_1[VAR_2]->card->statcallb(&VAR_6);
}
