
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct ssb_sprom {int dummy; } ;
struct TYPE_2__ {int revision; void* et1mdcport; void* et0mdcport; void* et1phyaddr; void* et0phyaddr; int et1mac; int et0mac; void* rev; void* type; } ;
struct ssb_init_invariants {TYPE_1__ sprom; TYPE_1__ boardinfo; } ;
struct ssb_bus {int dummy; } ;
struct ssb_boardinfo {int dummy; } ;
typedef int buf ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 void* FUNC_2 (char*,int *,int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct ssb_bus *VAR_0,
       struct ssb_init_invariants *VAR_1)
{
 char VAR_2[100];


 FUNC_1(&(VAR_1->boardinfo), 0 , sizeof(struct ssb_boardinfo));

 if (FUNC_0("boardvendor", VAR_2, sizeof(VAR_2)) >= 0)
  VAR_1->boardinfo.type = (u16)FUNC_2(VAR_2, ((void*)0), 0);
 if (FUNC_0("boardtype", VAR_2, sizeof(VAR_2)) >= 0)
  VAR_1->boardinfo.type = (u16)FUNC_2(VAR_2, ((void*)0), 0);
 if (FUNC_0("boardrev", VAR_2, sizeof(VAR_2)) >= 0)
  VAR_1->boardinfo.rev = (u16)FUNC_2(VAR_2, ((void*)0), 0);


 FUNC_1(&(VAR_1->sprom), 0, sizeof(struct ssb_sprom));
 VAR_1->sprom.revision = 3;

 if (FUNC_0("et0macaddr", VAR_2, sizeof(VAR_2)) >= 0)
  FUNC_3(VAR_2, VAR_1->sprom.et0mac);
 if (FUNC_0("et1macaddr", VAR_2, sizeof(VAR_2)) >= 0)
  FUNC_3(VAR_2, VAR_1->sprom.et1mac);
 if (FUNC_0("et0phyaddr", VAR_2, sizeof(VAR_2)) >= 0)
  VAR_1->sprom.et0phyaddr = FUNC_2(VAR_2, ((void*)0), 10);
 if (FUNC_0("et1phyaddr", VAR_2, sizeof(VAR_2)) >= 0)
  VAR_1->sprom.et1phyaddr = FUNC_2(VAR_2, ((void*)0), 10);
 if (FUNC_0("et0mdcport", VAR_2, sizeof(VAR_2)) >= 0)
  VAR_1->sprom.et0mdcport = FUNC_2(VAR_2, ((void*)0), 10);
 if (FUNC_0("et1mdcport", VAR_2, sizeof(VAR_2)) >= 0)
  VAR_1->sprom.et1mdcport = FUNC_2(VAR_2, ((void*)0), 10);

 return 0;
}
