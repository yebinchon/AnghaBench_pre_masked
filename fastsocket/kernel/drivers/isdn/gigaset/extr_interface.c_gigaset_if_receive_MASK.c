
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct cardstate {int lock; struct tty_struct* tty; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,unsigned char*,size_t) ;

void FUNC_5(struct cardstate *VAR_1,
   unsigned char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4;
 struct tty_struct *VAR_5;

 FUNC_1(&VAR_1->lock, VAR_4);
 if ((VAR_5 = VAR_1->tty) == ((void*)0))
  FUNC_0(VAR_0, "receive on closed device");
 else {
  FUNC_4(VAR_5, VAR_2, VAR_3);
  FUNC_3(VAR_5);
 }
 FUNC_2(&VAR_1->lock, VAR_4);
}
