
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {int (* init ) (TYPE_2__*) ;} ;
struct tiger_hw {int irq; int lock; int * bc; TYPE_2__ isac; int name; TYPE_1__* pdev; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tiger_hw*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct tiger_hw*) ;
 int VAR_3 ;
 int FUNC_3 (struct tiger_hw*) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (int,int ,int ,int ,struct tiger_hw*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_9(struct tiger_hw *VAR_4)
{
 u_long VAR_5;
 int VAR_6;

 FUNC_6(&VAR_4->lock, VAR_5);
 FUNC_2(VAR_4);
 FUNC_7(&VAR_4->lock, VAR_5);

 VAR_4->irq = VAR_4->pdev->irq;
 if (FUNC_5(VAR_4->irq, VAR_3, VAR_1, VAR_4->name, VAR_4)) {
  FUNC_4("%s: couldn't get interrupt %d\n",
   VAR_4->name, VAR_4->irq);
  VAR_4->irq = -1;
  return -VAR_0;
 }

 FUNC_6(&VAR_4->lock, VAR_5);
 FUNC_3(VAR_4);
 VAR_6 = VAR_4->isac.init(&VAR_4->isac);
 if (VAR_6)
  goto error;
 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  goto error;
 FUNC_1(&VAR_4->bc[0], VAR_2);
 FUNC_1(&VAR_4->bc[1], VAR_2);
error:
 FUNC_7(&VAR_4->lock, VAR_5);
 return VAR_6;
}
