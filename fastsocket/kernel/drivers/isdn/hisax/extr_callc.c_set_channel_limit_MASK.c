
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* statcallb ) (TYPE_3__*) ;} ;
struct IsdnCardState {scalar_t__ chanlimit; TYPE_2__ iif; int myid; } ;
struct TYPE_5__ {int* num; } ;
struct TYPE_7__ {int arg; TYPE_1__ parm; int command; int driver; } ;
typedef TYPE_3__ isdn_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_1(struct IsdnCardState *VAR_2, int VAR_3)
{
 isdn_ctrl VAR_4;
 int VAR_5, VAR_6;

 if ((VAR_3 < 0) || (VAR_3 > 2))
  return(-VAR_0);
 VAR_2->chanlimit = 0;
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_4.driver = VAR_2->myid;
  VAR_4.command = VAR_1;
  VAR_4.arg = VAR_6;
  if (VAR_6 >= VAR_3)
   VAR_4.parm.num[0] = 0;
  else
   VAR_4.parm.num[0] = 1;
  VAR_5 = VAR_2->iif.statcallb(&VAR_4);
  if (VAR_5) return(-VAR_0);
  if (VAR_6 < VAR_3)
   VAR_2->chanlimit++;
 }
 return(0);
}
