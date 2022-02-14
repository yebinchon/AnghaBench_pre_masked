
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {TYPE_10__* dev; int list; } ;
typedef TYPE_1__ slave_t ;
struct TYPE_13__ {int num_slaves; int all_slaves; } ;
typedef TYPE_2__ slave_queue_t ;
struct TYPE_11__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_10__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(slave_queue_t *VAR_2, slave_t *VAR_3)
{
 if (!FUNC_1(VAR_2)) {
  slave_t *VAR_4 = ((void*)0);

  VAR_4 = FUNC_0(VAR_2, VAR_3->dev);
  if (VAR_4)
   FUNC_2(VAR_2, VAR_4);

  FUNC_3(&VAR_3->list, &VAR_2->all_slaves);
  VAR_2->num_slaves++;
  VAR_3->dev->flags |= VAR_1;

  return 0;
 }

 return -VAR_0;
}
