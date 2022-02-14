
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ screen; scalar_t__ plan; int eazmsn; void* si2; void* si1; int phone; } ;
struct TYPE_6__ {TYPE_1__ setup; } ;
struct TYPE_7__ {TYPE_2__ parm; } ;
typedef TYPE_3__ isdn_ctrl ;


 void* FUNC_0 (char*,int *,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_0, isdn_ctrl * VAR_1)
{
 char *VAR_2 = VAR_0;
 char *VAR_3 = FUNC_1(VAR_2, ',');

 *VAR_3++ = '\0';
 FUNC_2(VAR_1->parm.setup.phone, VAR_2, sizeof(VAR_1->parm.setup.phone));
 VAR_3 = FUNC_1(VAR_2 = VAR_3, ',');
 *VAR_3++ = '\0';
 if (!FUNC_3(VAR_2))
  VAR_1->parm.setup.si1 = 0;
 else
  VAR_1->parm.setup.si1 = FUNC_0(VAR_2, ((void*)0), 10);
 VAR_3 = FUNC_1(VAR_2 = VAR_3, ',');
 *VAR_3++ = '\0';
 if (!FUNC_3(VAR_2))
  VAR_1->parm.setup.si2 = 0;
 else
  VAR_1->parm.setup.si2 =
      FUNC_0(VAR_2, ((void*)0), 10);
 FUNC_2(VAR_1->parm.setup.eazmsn, VAR_3, sizeof(VAR_1->parm.setup.eazmsn));
 VAR_1->parm.setup.plan = 0;
 VAR_1->parm.setup.screen = 0;
}
