
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_task {int bt_count; } ;


 int FUNC_0 (int *,struct bstp_task*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bstp_task *VAR_3)
{
 FUNC_1(VAR_0);

 if (VAR_3->bt_count) {
  VAR_3->bt_count++;
  FUNC_2(VAR_0);
  FUNC_3(&VAR_1);
  return;
 }

 VAR_3->bt_count = 1;
 FUNC_0(&VAR_1, VAR_3, VAR_2);

 FUNC_2(VAR_0);

 FUNC_3(&VAR_1);
}
