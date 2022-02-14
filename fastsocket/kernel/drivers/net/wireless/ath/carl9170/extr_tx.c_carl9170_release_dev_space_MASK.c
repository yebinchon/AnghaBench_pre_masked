
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_4__ {int mem_blocks; int mem_block_size; } ;
struct ar9170 {int mem_lock; int mem_bitmap; int mem_free_blocks; TYPE_2__ fw; } ;
struct TYPE_3__ {int cookie; } ;
struct _carl9170_tx_superframe {TYPE_1__ s; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ar9170 *VAR_0, struct sk_buff *VAR_1)
{
 struct _carl9170_tx_superframe *VAR_2 = (void *) VAR_1->data;
 int VAR_3;


 VAR_3 = VAR_2->s.cookie;

 VAR_2->s.cookie = 0;
 if (FUNC_6(FUNC_1(VAR_3 == 0) ||
     FUNC_1(VAR_3 > VAR_0->fw.mem_blocks)))
  return;

 FUNC_2(FUNC_0(VAR_1->len, VAR_0->fw.mem_block_size),
     &VAR_0->mem_free_blocks);

 FUNC_4(&VAR_0->mem_lock);
 FUNC_3(VAR_0->mem_bitmap, VAR_3 - 1, 0);
 FUNC_5(&VAR_0->mem_lock);
}
