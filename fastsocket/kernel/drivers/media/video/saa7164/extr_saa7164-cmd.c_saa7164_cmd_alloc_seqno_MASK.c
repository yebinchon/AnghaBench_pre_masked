
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7164_dev {int lock; TYPE_1__* cmds; } ;
struct TYPE_2__ {int inuse; int seqno; scalar_t__ timeout; scalar_t__ signalled; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct saa7164_dev *VAR_1)
{
 int VAR_2, VAR_3 = -1;

 FUNC_0(&VAR_1->lock);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->cmds[VAR_2].inuse == 0) {
   VAR_1->cmds[VAR_2].inuse = 1;
   VAR_1->cmds[VAR_2].signalled = 0;
   VAR_1->cmds[VAR_2].timeout = 0;
   VAR_3 = VAR_1->cmds[VAR_2].seqno;
   break;
  }
 }
 FUNC_1(&VAR_1->lock);

 return VAR_3;
}
