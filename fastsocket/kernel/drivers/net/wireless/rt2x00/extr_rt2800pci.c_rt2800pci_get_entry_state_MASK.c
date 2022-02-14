
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct queue_entry_priv_mmio {int desc; } ;
struct queue_entry {TYPE_1__* queue; struct queue_entry_priv_mmio* priv_data; } ;
struct TYPE_2__ {scalar_t__ qid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct queue_entry *VAR_3)
{
 struct queue_entry_priv_mmio *VAR_4 = VAR_3->priv_data;
 u32 VAR_5;

 if (VAR_3->queue->qid == VAR_0) {
  FUNC_0(VAR_4->desc, 1, &VAR_5);

  return (!FUNC_1(VAR_5, VAR_1));
 } else {
  FUNC_0(VAR_4->desc, 1, &VAR_5);

  return (!FUNC_1(VAR_5, VAR_2));
 }
}
