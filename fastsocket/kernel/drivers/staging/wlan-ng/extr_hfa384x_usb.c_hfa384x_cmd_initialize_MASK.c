
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int link_status; scalar_t__* port_enabled; } ;
typedef TYPE_2__ hfa384x_t ;
struct TYPE_7__ {int resp2; int resp1; int resp0; int status; } ;
struct TYPE_9__ {TYPE_1__ result; scalar_t__ parm2; scalar_t__ parm1; scalar_t__ parm0; int cmd; } ;
typedef TYPE_3__ hfa384x_metacmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;

int FUNC_2(hfa384x_t *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 hfa384x_metacmd_t VAR_6;

 VAR_6.cmd = VAR_0;
 VAR_6.parm0 = 0;
 VAR_6.parm1 = 0;
 VAR_6.parm2 = 0;

 VAR_4 = FUNC_0(VAR_3, &VAR_6);

 FUNC_1("cmdresp.init: "
   "status=0x%04x, resp0=0x%04x, "
   "resp1=0x%04x, resp2=0x%04x\n",
   VAR_6.result.status,
   VAR_6.result.resp0, VAR_6.result.resp1, VAR_6.result.resp2);
 if (VAR_4 == 0) {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   VAR_3->port_enabled[VAR_5] = 0;
 }

 VAR_3->link_status = VAR_1;

 return VAR_4;
}
