
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ktstate {int (* fn ) (int ) ;int rendez; int waitq; int lock; int id; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_12(void *VAR_4)
{
 struct ktstate *VAR_5;
 FUNC_0(VAR_3, VAR_2);
 int VAR_6;

 VAR_5 = VAR_4;
 VAR_2->flags |= VAR_0;
 FUNC_8(VAR_2, -10);
 FUNC_3(&VAR_5->rendez);
 do {
  FUNC_9(VAR_5->lock);
  VAR_6 = VAR_5->fn(VAR_5->id);
  if (!VAR_6) {
   FUNC_2(VAR_5->waitq, &VAR_3);
   FUNC_1(VAR_1);
  }
  FUNC_10(VAR_5->lock);
  if (!VAR_6) {
   FUNC_7();
   FUNC_6(VAR_5->waitq, &VAR_3);
  } else
   FUNC_4();
 } while (!FUNC_5());
 FUNC_3(&VAR_5->rendez);
 return 0;
}
