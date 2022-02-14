
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lguest {unsigned int nr_cpus; unsigned int num; struct lguest* dead; struct lguest* eventfds; TYPE_2__* map; TYPE_1__* cpus; } ;
struct inode {int dummy; } ;
struct file {struct lguest* private_data; } ;
struct TYPE_4__ {int event; } ;
struct TYPE_3__ {int mm; int regs_page; int hrt; } ;


 int FUNC_0 (struct lguest*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lguest*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct lguest*) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, struct file *VAR_2)
{
 struct lguest *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4;


 if (!VAR_3)
  return 0;





 FUNC_7(&VAR_0);


 FUNC_2(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_cpus; VAR_4++) {

  FUNC_4(&VAR_3->cpus[VAR_4].hrt);

  FUNC_3(VAR_3->cpus[VAR_4].regs_page);




  FUNC_6(VAR_3->cpus[VAR_4].mm);
 }


 for (VAR_4 = 0; VAR_4 < VAR_3->eventfds->num; VAR_4++)
  FUNC_1(VAR_3->eventfds->map[VAR_4].event);
 FUNC_5(VAR_3->eventfds);





 if (!FUNC_0(VAR_3->dead))
  FUNC_5(VAR_3->dead);

 FUNC_5(VAR_3);

 FUNC_8(&VAR_0);

 return 0;
}
