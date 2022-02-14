
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct hvc_struct {size_t index; int kref; int lock; int tty; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct tty_struct* FUNC_3 (int ) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;
 int* VAR_2 ;

int FUNC_6(struct hvc_struct *VAR_3)
{
 unsigned long VAR_4;
 struct tty_struct *VAR_5;

 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_3(VAR_3->tty);

 if (VAR_3->index < VAR_0)
  VAR_2[VAR_3->index] = -1;



 FUNC_2(&VAR_3->lock, VAR_4);







 FUNC_0(&VAR_3->kref, VAR_1);




 if (VAR_5) {
  FUNC_5(VAR_5);
  FUNC_4(VAR_5);
 }
 return 0;
}
