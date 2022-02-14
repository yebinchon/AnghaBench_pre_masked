
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scp_struct {int sysbus; void* iscp; } ;
struct scb_struct {int dummy; } ;
struct priv {struct scb_struct* scb; scalar_t__ reseted; struct iscp_struct* iscp; struct scp_struct* scp; scalar_t__ base; } ;
struct net_device {int name; int mem_start; } ;
struct iscp_struct {int busy; void* scb_base; int scb_offset; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct iscp_struct* FUNC_1 (int ) ;
 int FUNC_2 (struct scb_struct*) ;
 void* FUNC_3 (struct iscp_struct*) ;
 int FUNC_4 (char*,int ,int) ;
 struct priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2)
{
 struct priv *VAR_3 = FUNC_5(VAR_2);

 FUNC_8();
 FUNC_0(1);

 VAR_3->scp = (struct scp_struct *) (VAR_3->base + VAR_0);
 VAR_3->iscp = (struct iscp_struct *) FUNC_1(VAR_2->mem_start);
 VAR_3->scb = (struct scb_struct *) ((char *)VAR_3->iscp + sizeof(struct iscp_struct));

 FUNC_4((char *) VAR_3->iscp,0,sizeof(struct iscp_struct));
 FUNC_4((char *) VAR_3->scp ,0,sizeof(struct scp_struct));

 VAR_3->scp->iscp = FUNC_3(VAR_3->iscp);
 VAR_3->scp->sysbus = VAR_1;
 VAR_3->iscp->scb_offset = FUNC_2(VAR_3->scb);
 VAR_3->iscp->scb_base = FUNC_3(FUNC_1(VAR_2->mem_start));

 VAR_3->iscp->busy = 1;
 FUNC_8();
 FUNC_7();

 FUNC_0(1);

 if(VAR_3->iscp->busy)
  FUNC_6("%s: Init-Problems (alloc).\n",VAR_2->name);

 VAR_3->reseted = 0;

 FUNC_4((char *)VAR_3->scb,0,sizeof(struct scb_struct));
}
