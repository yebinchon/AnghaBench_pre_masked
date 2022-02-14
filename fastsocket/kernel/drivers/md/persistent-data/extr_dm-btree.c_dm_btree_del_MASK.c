
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct frame {scalar_t__ current_child; scalar_t__ nr_children; TYPE_3__* n; scalar_t__ level; } ;
struct TYPE_6__ {int context; int (* dec ) (int ,int ) ;} ;
struct dm_btree_info {TYPE_2__ value_type; int tm; } ;
struct del_stack {int top; int tm; struct dm_btree_info* info; } ;
typedef int dm_block_t ;
struct TYPE_5__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dm_btree_info*,struct frame*) ;
 int FUNC_1 (struct del_stack*) ;
 struct del_stack* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct del_stack*) ;
 int FUNC_5 (struct del_stack*,int ,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct del_stack*,struct frame**) ;
 scalar_t__ FUNC_8 (struct del_stack*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,unsigned int) ;

int FUNC_11(struct dm_btree_info *VAR_3, dm_block_t VAR_4)
{
 int VAR_5;
 struct del_stack *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->info = VAR_3;
 VAR_6->tm = VAR_3->tm;
 VAR_6->top = -1;

 VAR_5 = FUNC_5(VAR_6, VAR_4, 0);
 if (VAR_5)
  goto out;

 while (FUNC_8(VAR_6)) {
  uint32_t VAR_7;
  struct frame *VAR_8;
  dm_block_t VAR_9;

  VAR_5 = FUNC_7(VAR_6, &VAR_8);
  if (VAR_5)
   goto out;

  if (VAR_8->current_child >= VAR_8->nr_children) {
   FUNC_4(VAR_6);
   continue;
  }

  VAR_7 = FUNC_3(VAR_8->n->header.flags);
  if (VAR_7 & VAR_2) {
   VAR_9 = FUNC_9(VAR_8->n, VAR_8->current_child);
   VAR_8->current_child++;
   VAR_5 = FUNC_5(VAR_6, VAR_9, VAR_8->level);
   if (VAR_5)
    goto out;

  } else if (FUNC_0(VAR_3, VAR_8)) {
   VAR_9 = FUNC_9(VAR_8->n, VAR_8->current_child);
   VAR_8->current_child++;
   VAR_5 = FUNC_5(VAR_6, VAR_9, VAR_8->level + 1);
   if (VAR_5)
    goto out;

  } else {
   if (VAR_3->value_type.dec) {
    unsigned VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_8->nr_children; VAR_10++)
     VAR_3->value_type.dec(VAR_3->value_type.context,
            FUNC_10(VAR_8->n, VAR_10));
   }
   FUNC_4(VAR_6);
  }
 }

out:
 FUNC_1(VAR_6);
 return VAR_5;
}
