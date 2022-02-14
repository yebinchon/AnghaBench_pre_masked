
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcom_task {int tasknum; scalar_t__ irq; int num_bd; int bd_size; struct bcom_task* cookie; int bd; int bd_pa; void* priv; } ;
struct TYPE_4__ {TYPE_1__* tdt; int ofnode; int lock; } ;
struct TYPE_3__ {int stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct bcom_task*) ;
 struct bcom_task* FUNC_5 (int,int ) ;
 struct bcom_task* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct bcom_task *
FUNC_10(int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = -1;
 struct bcom_task *VAR_9;


 if (!VAR_3)
  return ((void*)0);


 FUNC_8(&VAR_3->lock);

 for (VAR_7=0; VAR_7<VAR_0; VAR_7++)
  if (!VAR_3->tdt[VAR_7].stop) {
   VAR_3->tdt[VAR_7].stop = 0xfffffffful;
   VAR_8 = VAR_7;
   break;
  }

 FUNC_9(&VAR_3->lock);

 if (VAR_8 < 0)
  return ((void*)0);


 VAR_9 = FUNC_6(sizeof(struct bcom_task) + VAR_6, VAR_1);
 if (!VAR_9)
  goto error;

 VAR_9->tasknum = VAR_8;
 if (VAR_6)
  VAR_9->priv = (void*)VAR_9 + sizeof(struct bcom_task);


 VAR_9->irq = FUNC_3(VAR_3->ofnode, VAR_9->tasknum);
 if (VAR_9->irq == VAR_2)
  goto error;


 if (VAR_4) {
  VAR_9->cookie = FUNC_5(sizeof(void*) * VAR_4, VAR_1);
  if (!VAR_9->cookie)
   goto error;

  VAR_9->bd = FUNC_0(VAR_4 * VAR_5, 4, &VAR_9->bd_pa);
  if (!VAR_9->bd)
   goto error;
  FUNC_7(VAR_9->bd, 0x00, VAR_4 * VAR_5);

  VAR_9->num_bd = VAR_4;
  VAR_9->bd_size = VAR_5;
 }

 return VAR_9;

error:
 if (VAR_9) {
  if (VAR_9->irq != VAR_2)
   FUNC_2(VAR_9->irq);
  FUNC_1(VAR_9->bd);
  FUNC_4(VAR_9->cookie);
  FUNC_4(VAR_9);
 }

 VAR_3->tdt[VAR_8].stop = 0;

 return ((void*)0);
}
