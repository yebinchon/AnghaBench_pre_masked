
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* st; } ;
struct layer2 {TYPE_3__ ch; int flag; int down_queue; int ui_queue; int i_queue; int t203; int t200; } ;
struct TYPE_8__ {int (* ctrl ) (TYPE_4__*,int ,int *) ;} ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {TYPE_4__ D; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct layer2*) ;
 int FUNC_1 (struct layer2*) ;
 int FUNC_2 (struct layer2*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct layer2 *VAR_2)
{
 FUNC_3(&VAR_2->t200, 21);
 FUNC_3(&VAR_2->t203, 16);
 FUNC_4(&VAR_2->i_queue);
 FUNC_4(&VAR_2->ui_queue);
 FUNC_4(&VAR_2->down_queue);
 FUNC_0(VAR_2);
 if (FUNC_6(VAR_1, &VAR_2->flag)) {
  FUNC_1(VAR_2);
  if (VAR_2->ch.st)
   VAR_2->ch.st->dev->D.ctrl(&VAR_2->ch.st->dev->D,
       VAR_0, ((void*)0));
 }
 FUNC_2(VAR_2);
}
