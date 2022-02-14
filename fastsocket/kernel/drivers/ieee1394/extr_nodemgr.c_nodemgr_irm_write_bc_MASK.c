
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct node_entry {int generation; scalar_t__ nodeid; TYPE_2__* host; } ;
typedef int quadlet_t ;
typedef int bc_remote ;
typedef int bc_local ;
struct TYPE_3__ {int broadcast_channel; } ;
struct TYPE_4__ {scalar_t__ node_id; TYPE_1__ csr; int is_irm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct node_entry*,int const,int*,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int,int const,int*,int) ;

__attribute__((used)) static void FUNC_3(struct node_entry *VAR_2, int VAR_3)
{
 const u64 VAR_4 = (VAR_1 | VAR_0);
 quadlet_t VAR_5, VAR_6;
 int VAR_7;

 if (!VAR_2->host->is_irm || VAR_2->generation != VAR_3 ||
     VAR_2->nodeid == VAR_2->host->node_id)
  return;

 VAR_6 = FUNC_0(VAR_2->host->csr.broadcast_channel);


 VAR_7 = FUNC_2(VAR_2->host, VAR_2->nodeid, VAR_3, VAR_4, &VAR_5,
     sizeof(VAR_5));
 if (!VAR_7 && VAR_5 & FUNC_0(0x80000000) &&
     VAR_5 != VAR_6)
  FUNC_1(VAR_2, VAR_4, &VAR_6, sizeof(VAR_6));
}
