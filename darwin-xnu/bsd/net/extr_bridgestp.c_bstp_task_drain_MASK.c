
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_task {scalar_t__ bt_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bstp_task* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bstp_task**,int ,int ,char*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bstp_task *VAR_4)
{
 FUNC_0(VAR_1);

 while (VAR_4->bt_count != 0 || VAR_3 == VAR_4) {
  FUNC_3(&VAR_2);
  FUNC_2(&VAR_3, VAR_1, VAR_0, "bstp_task_queue", ((void*)0));
 }
 FUNC_1(VAR_1);
}
