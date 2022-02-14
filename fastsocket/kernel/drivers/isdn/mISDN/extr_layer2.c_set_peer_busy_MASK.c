
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {int flag; int ui_queue; int i_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct layer2 *VAR_2) {
 FUNC_1(VAR_1, &VAR_2->flag);
 if (FUNC_0(&VAR_2->i_queue) || FUNC_0(&VAR_2->ui_queue))
  FUNC_1(VAR_0, &VAR_2->flag);
}
