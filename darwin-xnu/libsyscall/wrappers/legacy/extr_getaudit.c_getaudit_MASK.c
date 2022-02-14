
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int machine; int port; } ;
struct auditinfo {int ai_asid; TYPE_1__ ai_termid; int ai_mask; int ai_auid; } ;
struct TYPE_6__ {int * at_addr; int at_port; } ;
struct TYPE_7__ {int ai_asid; TYPE_2__ ai_termid; int ai_mask; int ai_auid; } ;
typedef TYPE_3__ auditinfo_addr_t ;
typedef int aia ;


 int FUNC_0 (TYPE_3__*,int) ;

int
FUNC_1(struct auditinfo *VAR_0)
{
 int VAR_1;
 auditinfo_addr_t VAR_2;

 if ((VAR_1 = FUNC_0(&VAR_2, sizeof(VAR_2))) != 0)
  return (VAR_1);

 VAR_0->ai_auid = VAR_2.ai_auid;
 VAR_0->ai_mask = VAR_2.ai_mask;
 VAR_0->ai_termid.port = VAR_2.ai_termid.at_port;
 VAR_0->ai_termid.machine = VAR_2.ai_termid.at_addr[0];
 VAR_0->ai_asid = VAR_2.ai_asid;

 return (0);
}
