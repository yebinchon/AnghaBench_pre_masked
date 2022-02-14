
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entropy_store {int entropy_count; int lock; TYPE_1__* poolinfo; int name; } ;
struct TYPE_2__ {int POOLBITS; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct entropy_store VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct entropy_store *VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_7)
  return;

 FUNC_2(&VAR_6->lock, VAR_8);

 FUNC_0("added %d entropy credits to %s\n", VAR_7, VAR_6->name);
 VAR_9 = VAR_6->entropy_count;
 VAR_9 += VAR_7;
 if (VAR_9 < 0) {
  FUNC_0("negative entropy/overflow\n");
  VAR_9 = 0;
 } else if (VAR_9 > VAR_6->poolinfo->POOLBITS)
  VAR_9 = VAR_6->poolinfo->POOLBITS;
 VAR_6->entropy_count = VAR_9;


 if (VAR_6 == &VAR_3 && VAR_9 >= VAR_5) {
  FUNC_4(&VAR_4);
  FUNC_1(&VAR_2, VAR_1, VAR_0);
 }
 FUNC_3(&VAR_6->lock, VAR_8);
}
