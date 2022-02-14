
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; int len; } ;
struct TYPE_3__ {int mem_blocks; int mem_block_size; } ;
struct ar9170 {int mem_free_blocks; int mem_lock; TYPE_1__ fw; int mem_bitmap; int mem_allocs; } ;
struct TYPE_4__ {scalar_t__ cookie; } ;
struct _carl9170_tx_superframe {TYPE_2__ s; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ar9170 *VAR_1, struct sk_buff *VAR_2)
{
 struct _carl9170_tx_superframe *VAR_3 = (void *) VAR_2->data;
 unsigned int VAR_4;
 int VAR_5 = -1;

 FUNC_2(&VAR_1->mem_allocs);

 VAR_4 = FUNC_0(VAR_2->len, VAR_1->fw.mem_block_size);
 if (FUNC_7(FUNC_3(VAR_4, &VAR_1->mem_free_blocks) < 0)) {
  FUNC_1(VAR_4, &VAR_1->mem_free_blocks);
  return -VAR_0;
 }

 FUNC_5(&VAR_1->mem_lock);
 VAR_5 = FUNC_4(VAR_1->mem_bitmap, VAR_1->fw.mem_blocks, 0);
 FUNC_6(&VAR_1->mem_lock);

 if (FUNC_7(VAR_5 < 0)) {
  FUNC_1(VAR_4, &VAR_1->mem_free_blocks);
  return -VAR_0;
 }

 VAR_3 = (void *) VAR_2->data;
 VAR_3->s.cookie = (u8) VAR_5 + 1;
 return 0;
}
