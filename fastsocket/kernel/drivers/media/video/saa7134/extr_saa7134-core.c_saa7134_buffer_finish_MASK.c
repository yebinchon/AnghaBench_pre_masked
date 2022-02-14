
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7134_dmaqueue {TYPE_2__* curr; } ;
struct saa7134_dev {int slock; } ;
struct TYPE_3__ {unsigned int state; int done; int ts; } ;
struct TYPE_4__ {TYPE_1__ vb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,TYPE_2__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct saa7134_dev *VAR_0,
      struct saa7134_dmaqueue *VAR_1,
      unsigned int VAR_2)
{
 FUNC_0(&VAR_0->slock);
 FUNC_2("buffer_finish %p\n",VAR_1->curr);


 VAR_1->curr->vb.state = VAR_2;
 FUNC_1(&VAR_1->curr->vb.ts);
 FUNC_3(&VAR_1->curr->vb.done);
 VAR_1->curr = ((void*)0);
}
