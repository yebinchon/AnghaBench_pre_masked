
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; } ;
struct cardstate {int write_tasklet; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct cardstate* FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct tty_struct *VAR_1)
{
 struct cardstate *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, &VAR_1->flags);
 if (!VAR_2)
  return;
 FUNC_3(&VAR_2->write_tasklet);
 FUNC_2(VAR_2);
}
