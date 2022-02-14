
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int machine; int port; } ;
struct auditinfo {int ai_asid; TYPE_2__ ai_termid; int ai_mask; int ai_auid; } ;
struct TYPE_6__ {int * at_addr; int at_type; int at_port; } ;
struct TYPE_8__ {int ai_asid; TYPE_1__ ai_termid; int ai_mask; int ai_auid; } ;
typedef TYPE_3__ auditinfo_addr_t ;
typedef int aia ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;

int
FUNC_2(const struct auditinfo *VAR_1)
{
 int VAR_2;
 struct auditinfo *VAR_3 = (struct auditinfo *)VAR_1;
 auditinfo_addr_t VAR_4;


 if ((VAR_2 = FUNC_0(&VAR_4, sizeof(VAR_4))) != 0)
  return (VAR_2);

 VAR_4.ai_auid = VAR_3->ai_auid;
 VAR_4.ai_mask = VAR_3->ai_mask;
 VAR_4.ai_termid.at_port = VAR_3->ai_termid.port;
 VAR_4.ai_termid.at_type = VAR_0;
 VAR_4.ai_termid.at_addr[0] = VAR_3->ai_termid.machine;
 VAR_4.ai_asid = VAR_3->ai_asid;

 if ((VAR_2 = FUNC_1(&VAR_4, sizeof(VAR_4))) != 0)
  return (VAR_2);


 VAR_3->ai_asid = VAR_4.ai_asid;

 return (0);
}
