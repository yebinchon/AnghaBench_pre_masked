
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* num; } ;
struct TYPE_5__ {int driver; int arg; TYPE_1__ parm; int command; } ;
typedef TYPE_2__ isdn_ctrl ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(int VAR_1, int VAR_2)
{
 isdn_ctrl VAR_3;

 if (VAR_1 < 0)
  return;
 VAR_3.driver = VAR_1;
 VAR_3.arg = VAR_2;
 VAR_3.command = VAR_0;
 VAR_3.parm.num[0] = '\0';
 FUNC_0(&VAR_3);
}
