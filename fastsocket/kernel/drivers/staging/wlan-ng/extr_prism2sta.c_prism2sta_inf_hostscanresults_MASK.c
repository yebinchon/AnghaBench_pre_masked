
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ priv; } ;
typedef TYPE_1__ wlandevice_t ;
struct TYPE_8__ {int scanflag; int cmdq; int scanresults; } ;
typedef TYPE_2__ hfa384x_t ;
struct TYPE_9__ {int framelen; } ;
typedef TYPE_3__ hfa384x_InfFrame_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(wlandevice_t *VAR_1,
       hfa384x_InfFrame_t *VAR_2)
{
 hfa384x_t *VAR_3 = (hfa384x_t *) VAR_1->priv;
 int VAR_4;

 VAR_4 = (VAR_2->framelen - 3) / 32;
 FUNC_3("Received %d hostscan results\n", VAR_4);

 if (VAR_4 > 32)
  VAR_4 = 32;

 FUNC_0(VAR_3->scanresults);

 VAR_3->scanresults = FUNC_1(sizeof(hfa384x_InfFrame_t), VAR_0);
 FUNC_2(VAR_3->scanresults, VAR_2, sizeof(hfa384x_InfFrame_t));

 if (VAR_4 == 0)
  VAR_4 = -1;


 VAR_3->scanflag = VAR_4;
 FUNC_4(&VAR_3->cmdq);
}
