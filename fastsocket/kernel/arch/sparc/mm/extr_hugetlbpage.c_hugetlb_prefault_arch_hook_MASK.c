
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsb_config {int * tsb; } ;
struct TYPE_2__ {unsigned long sparc64_ctx_val; struct tsb_config* tsb_block; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mm_struct*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct mm_struct*,int ) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct mm_struct*,size_t,int ) ;

void FUNC_8(struct mm_struct *VAR_10)
{
 struct tsb_config *VAR_11 = &VAR_10->context.tsb_block[VAR_5];

 if (FUNC_1(VAR_11->tsb != ((void*)0)))
  return;

 FUNC_7(VAR_10, VAR_5, 0);
 FUNC_6(VAR_10);
 FUNC_3(VAR_10);




 if (VAR_9 == VAR_6) {
  unsigned long VAR_12;

  FUNC_4(&VAR_8);
  VAR_12 = VAR_10->context.sparc64_ctx_val;
  VAR_12 &= ~VAR_4;
  VAR_12 |= VAR_2 << VAR_0;
  VAR_12 |= VAR_3 << VAR_1;

  if (VAR_12 != VAR_10->context.sparc64_ctx_val) {






   FUNC_0(VAR_10);




   VAR_10->context.sparc64_ctx_val = VAR_12;
   FUNC_2(VAR_7, VAR_10, 0);
  }
  FUNC_5(&VAR_8);
 }
}
