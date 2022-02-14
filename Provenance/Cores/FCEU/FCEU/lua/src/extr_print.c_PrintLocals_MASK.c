
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sizelocvars; TYPE_1__* locvars; } ;
struct TYPE_5__ {int startpc; int endpc; int varname; } ;
typedef TYPE_2__ Proto ;


 int FUNC_0 (TYPE_2__ const*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_3(const Proto* VAR_0)
{
 int VAR_1,VAR_2=VAR_0->sizelocvars;
 FUNC_2("locals (%d) for %p:\n",VAR_2,FUNC_0(VAR_0));
 for (VAR_1=0; VAR_1<VAR_2; VAR_1++)
 {
  FUNC_2("\t%d\t%s\t%d\t%d\n",
  VAR_1,FUNC_1(VAR_0->locvars[VAR_1].varname),VAR_0->locvars[VAR_1].startpc+1,VAR_0->locvars[VAR_1].endpc+1);
 }
}
