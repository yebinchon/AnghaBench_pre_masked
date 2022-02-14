
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct raw3270_view {int dummy; } ;
struct fs3270 {TYPE_1__* init; TYPE_4__* rdbuf; scalar_t__ active; } ;
struct TYPE_9__ {int* data; int size; } ;
struct TYPE_8__ {int (* callback ) (TYPE_1__*,int *) ;scalar_t__ rc; scalar_t__ rescnt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (struct raw3270_view*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_6(struct raw3270_view *VAR_1)
{
 struct fs3270 *VAR_2;

 VAR_2 = (struct fs3270 *) VAR_1;
 VAR_2->active = 0;


 if (!FUNC_1(VAR_2->init))
  return;


 FUNC_2(VAR_2->init, VAR_0);





 VAR_2->rdbuf->data[0] += 5;
 VAR_2->rdbuf->size -= 5;
 FUNC_3(VAR_2->init, VAR_2->rdbuf);
 VAR_2->init->rescnt = 0;
 VAR_2->init->callback = FUNC_0;


 VAR_2->init->rc = FUNC_4(VAR_1, VAR_2->init);
 if (VAR_2->init->rc)
  VAR_2->init->callback(VAR_2->init, ((void*)0));
}
