
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct l2t_entry {scalar_t__ state; int vlan; int lock; TYPE_2__* neigh; int refcnt; int lport; int dmac; int idx; scalar_t__ v6; int addr; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {char* name; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct l2t_entry*) ;
 int FUNC_2 (struct seq_file*,char*,int ,char*,int ,int,int ,int ,int ,int ,char*) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (struct l2t_entry*) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_3, void *VAR_4)
{
 if (VAR_4 == VAR_1)
  FUNC_3(VAR_3, " Idx IP address                "
    "Ethernet address  VLAN/P LP State Users Port\n");
 else {
  char VAR_5[60];
  struct l2t_entry *VAR_6 = VAR_4;

  FUNC_4(&VAR_6->lock);
  if (VAR_6->state == VAR_0)
   VAR_5[0] = '\0';
  else
   FUNC_6(VAR_5, VAR_6->v6 ? "%pI6c" : "%pI4", VAR_6->addr);
  FUNC_2(VAR_3, "%4u %-25s %17pM %4d %u %2u   %c   %5u %s\n",
      VAR_6->idx, VAR_5, VAR_6->dmac,
      VAR_6->vlan & VAR_2, FUNC_7(VAR_6), VAR_6->lport,
      FUNC_1(VAR_6), FUNC_0(&VAR_6->refcnt),
      VAR_6->neigh ? VAR_6->neigh->dev->name : "");
  FUNC_5(&VAR_6->lock);
 }
 return 0;
}
