
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mce {int finished; } ;
struct TYPE_4__ {TYPE_1__* entry; int next; int flags; } ;
struct TYPE_3__ {int finished; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,struct mce*) ;
 unsigned int FUNC_1 (int *,unsigned int,unsigned int) ;
 unsigned long VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (TYPE_1__*,struct mce*,int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct mce*) ;
 int FUNC_7 () ;
 int VAR_5 ;

void FUNC_8(struct mce *VAR_6)
{
 unsigned VAR_7, VAR_8;
 int VAR_9 = 0;


 FUNC_6(VAR_6);

 VAR_9 = FUNC_0(&VAR_5, 0, VAR_6);
 if (VAR_9 == VAR_2)
  return;

 VAR_6->finished = 0;
 FUNC_7();
 for (;;) {
  VAR_8 = FUNC_3(VAR_4.next);
  for (;;) {






   if (VAR_8 >= VAR_0) {
    FUNC_4(VAR_1,
     (unsigned long *)&VAR_4.flags);
    return;
   }

   if (VAR_4.entry[VAR_8].finished) {
    VAR_8++;
    continue;
   }
   break;
  }
  FUNC_5();
  VAR_7 = VAR_8 + 1;
  if (FUNC_1(&VAR_4.next, VAR_8, VAR_7) == VAR_8)
   break;
 }
 FUNC_2(VAR_4.entry + VAR_8, VAR_6, sizeof(struct mce));
 FUNC_7();
 VAR_4.entry[VAR_8].finished = 1;
 FUNC_7();

 VAR_6->finished = 1;
 FUNC_4(0, &VAR_3);
}
