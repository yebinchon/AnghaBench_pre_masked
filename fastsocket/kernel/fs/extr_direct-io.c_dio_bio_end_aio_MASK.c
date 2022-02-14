
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio {unsigned long refcount; TYPE_1__* iocb; int bio_lock; scalar_t__ waiter; } ;
struct bio {struct dio* bi_private; } ;
struct TYPE_2__ {int ki_pos; } ;


 int FUNC_0 (struct dio*,struct bio*) ;
 int VAR_0 ;
 int FUNC_1 (struct dio*,int ,int ,int) ;
 int FUNC_2 (int ,struct dio*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_1, int VAR_2)
{
 struct dio *VAR_3 = VAR_1->bi_private;
 unsigned long VAR_4;
 unsigned long VAR_5;


 FUNC_0(VAR_3, VAR_1);

 FUNC_3(&VAR_3->bio_lock, VAR_5);
 VAR_4 = --VAR_3->refcount;
 if (VAR_4 == 1 && VAR_3->waiter)
  FUNC_5(VAR_3->waiter);
 FUNC_4(&VAR_3->bio_lock, VAR_5);

 if (VAR_4 == 0) {
  FUNC_1(VAR_3, VAR_3->iocb->ki_pos, 0, 1);
  FUNC_2(VAR_0, VAR_3);
 }
}
