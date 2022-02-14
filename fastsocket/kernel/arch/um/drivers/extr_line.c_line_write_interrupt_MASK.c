
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct line {int lock; int buffer; int tail; int head; struct tty_struct* tty; } ;
struct chan {struct line* line; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct line*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct chan *VAR_4 = VAR_3;
 struct line *VAR_5 = VAR_4->line;
 struct tty_struct *VAR_6 = VAR_5->tty;
 int VAR_7;






 FUNC_1(&VAR_5->lock);
 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 == 0) {
  return VAR_1;
 } else if (VAR_7 < 0) {
  VAR_5->head = VAR_5->buffer;
  VAR_5->tail = VAR_5->buffer;
 }
 FUNC_2(&VAR_5->lock);

 if (VAR_6 == ((void*)0))
  return VAR_1;

 FUNC_3(VAR_6);
 return VAR_0;
}
