
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct line {int task; int chan_list; struct tty_struct* tty; } ;
struct chan {struct line* line; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct tty_struct*,int) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct chan *VAR_3 = VAR_2;
 struct line *VAR_4 = VAR_3->line;
 struct tty_struct *VAR_5 = VAR_4->tty;

 if (VAR_4)
  FUNC_0(&VAR_4->chan_list, &VAR_4->task, VAR_5, VAR_1);
 return VAR_0;
}
