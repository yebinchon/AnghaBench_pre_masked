
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ strip; } ;
struct TYPE_12__ {int sizelineinfo; int sizelocvars; int sizeupvalues; TYPE_2__* upvalues; TYPE_1__* locvars; int lineinfo; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {int startpc; int endpc; int varname; } ;
typedef TYPE_3__ Proto ;
typedef TYPE_4__ DumpState ;


 int FUNC_0 (int,TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,int,TYPE_4__*) ;

__attribute__((used)) static void FUNC_3 (const Proto *VAR_0, DumpState *VAR_1) {
  int VAR_2, VAR_3;
  VAR_3 = (VAR_1->strip) ? 0 : VAR_0->sizelineinfo;
  FUNC_0(VAR_3, VAR_1);
  FUNC_2(VAR_0->lineinfo, VAR_3, VAR_1);
  VAR_3 = (VAR_1->strip) ? 0 : VAR_0->sizelocvars;
  FUNC_0(VAR_3, VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
    FUNC_1(VAR_0->locvars[VAR_2].varname, VAR_1);
    FUNC_0(VAR_0->locvars[VAR_2].startpc, VAR_1);
    FUNC_0(VAR_0->locvars[VAR_2].endpc, VAR_1);
  }
  VAR_3 = (VAR_1->strip) ? 0 : VAR_0->sizeupvalues;
  FUNC_0(VAR_3, VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
    FUNC_1(VAR_0->upvalues[VAR_2].name, VAR_1);
}
