
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_state {int need_exit; int thread_wait; } ;
struct dst_node {struct dst_state* state; scalar_t__ bdev; TYPE_1__* disk; scalar_t__ queue; } ;
struct TYPE_2__ {int first_minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dst_state*) ;
 int FUNC_3 (struct dst_state*) ;
 int FUNC_4 (struct dst_state*) ;
 int FUNC_5 (struct dst_state*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct dst_node *VAR_4)
{
 struct dst_state *VAR_5 = VAR_4->state;

 if (!VAR_5)
  return;

 if (VAR_4->queue) {
  FUNC_0(VAR_4->queue);

  FUNC_7(&VAR_2);
  FUNC_6(&VAR_3, VAR_4->disk->first_minor);
  FUNC_8(&VAR_2);

  FUNC_9(VAR_4->disk);
 }

 if (VAR_4->bdev) {
  FUNC_10(VAR_4->bdev);
  FUNC_1(VAR_4->bdev, VAR_0|VAR_1);
 }

 FUNC_3(VAR_5);
 VAR_5->need_exit = 1;
 FUNC_2(VAR_5);
 FUNC_5(VAR_5);

 FUNC_11(&VAR_5->thread_wait);

 FUNC_4(VAR_5);
 VAR_4->state = ((void*)0);
}
