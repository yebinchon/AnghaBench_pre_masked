
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scp_struct {scalar_t__ sysbus; int iscp; } ;
struct priv {unsigned long base; char* memtop; struct iscp_struct* iscp; struct scp_struct* scp; } ;
struct net_device {int dummy; } ;
struct iscp_struct {int busy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (struct iscp_struct*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,char *VAR_3,unsigned VAR_4)
{
 struct priv VAR_5;
 struct priv *VAR_6 = &VAR_5;
 char *VAR_7;
 int VAR_8;

 VAR_6->base = (unsigned long) FUNC_1(0);
 VAR_6->memtop = (char *)FUNC_1((unsigned long)VAR_3);
 VAR_6->scp = (struct scp_struct *)(VAR_6->base + VAR_0);
 FUNC_3((char *)VAR_6->scp,0, sizeof(struct scp_struct));
 for(VAR_8=0;VAR_8<sizeof(struct scp_struct);VAR_8++)
  if(((char *)VAR_6->scp)[VAR_8])
   return 0;
 VAR_6->scp->sysbus = VAR_1;
 if(VAR_6->scp->sysbus != VAR_1)
  return 0;

 VAR_7 = (char *)FUNC_1((unsigned long)VAR_3);

 VAR_6->iscp = (struct iscp_struct *) VAR_7;
 FUNC_3((char *)VAR_6->iscp,0, sizeof(struct iscp_struct));

 VAR_6->scp->iscp = FUNC_2(VAR_6->iscp);
 VAR_6->iscp->busy = 1;

 FUNC_5();
 FUNC_4();
 FUNC_0(1);

 if(VAR_6->iscp->busy)
  return 0;

 return 1;
}
