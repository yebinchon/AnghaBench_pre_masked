
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srmcons_private {int timer; int lock; int * tty; } ;
typedef int DEFINE_SPINLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct srmcons_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct srmcons_private **VAR_2)
{
 static struct srmcons_private *VAR_3 = ((void*)0);
 static DEFINE_SPINLOCK(VAR_4);
 unsigned long VAR_5;
 int VAR_6 = 0;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
  FUNC_3(&VAR_4, VAR_5);

  if (VAR_3 == ((void*)0))
   VAR_6 = -VAR_0;
  else {
   VAR_3->tty = ((void*)0);
   FUNC_2(&VAR_3->lock);
   FUNC_0(&VAR_3->timer);
  }

  FUNC_4(&VAR_4, VAR_5);
 }

 *VAR_2 = VAR_3;
 return VAR_6;
}
