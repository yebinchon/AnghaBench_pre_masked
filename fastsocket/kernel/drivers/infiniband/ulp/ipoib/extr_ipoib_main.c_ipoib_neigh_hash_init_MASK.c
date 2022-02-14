
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipoib_neigh_table {int entries; struct ipoib_neigh_hash* htbl; } ;
struct ipoib_neigh_hash {int size; int mask; struct ipoib_neigh_table* ntbl; struct ipoib_neigh** buckets; } ;
struct ipoib_neigh {int dummy; } ;
struct ipoib_dev_priv {int neigh_reap_task; int flags; struct ipoib_neigh_table ntbl; } ;
struct TYPE_2__ {int gc_interval; int gc_thresh3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (struct ipoib_neigh_hash*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct ipoib_dev_priv *VAR_6)
{
 struct ipoib_neigh_table *VAR_7 = &VAR_6->ntbl;
 struct ipoib_neigh_hash *VAR_8;
 struct ipoib_neigh **VAR_9;
 u32 VAR_10;

 FUNC_1(VAR_2, &VAR_6->flags);
 VAR_7->htbl = ((void*)0);
 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 FUNC_6(VAR_3, &VAR_6->flags);
 VAR_10 = FUNC_5(VAR_4.gc_thresh3);
 VAR_9 = FUNC_3(VAR_10 * sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }
 VAR_8->size = VAR_10;
 VAR_8->mask = (VAR_10 - 1);
 VAR_8->buckets = VAR_9;
 VAR_7->htbl = VAR_8;
 VAR_8->ntbl = VAR_7;
 FUNC_0(&VAR_7->entries, 0);


 FUNC_1(VAR_3, &VAR_6->flags);
 FUNC_4(VAR_5, &VAR_6->neigh_reap_task,
      VAR_4.gc_interval);

 return 0;
}
