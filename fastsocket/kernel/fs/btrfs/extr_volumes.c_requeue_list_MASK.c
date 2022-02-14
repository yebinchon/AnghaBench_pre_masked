
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_pending_bios {struct bio* tail; struct bio* head; } ;
struct bio {struct bio* bi_next; } ;



__attribute__((used)) static void FUNC_0(struct btrfs_pending_bios *VAR_0,
   struct bio *VAR_1, struct bio *VAR_2)
{

 struct bio *VAR_3;

 VAR_3 = VAR_0->head;
 VAR_0->head = VAR_1;
 if (VAR_0->tail)
  VAR_2->bi_next = VAR_3;
 else
  VAR_0->tail = VAR_2;
}
