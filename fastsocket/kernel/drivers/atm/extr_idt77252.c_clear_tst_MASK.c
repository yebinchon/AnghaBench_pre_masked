
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_map {int dummy; } ;
struct idt77252_dev {int tst_lock; int tst_timer; int tst_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct idt77252_dev*,struct vc_map*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct idt77252_dev *VAR_2, struct vc_map *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_3(&VAR_2->tst_lock, VAR_4);

 VAR_5 = FUNC_0(VAR_2, VAR_3);

 FUNC_2(VAR_0, &VAR_2->tst_state);
 if (!FUNC_5(&VAR_2->tst_timer))
  FUNC_1(&VAR_2->tst_timer, VAR_1 + 1);

 FUNC_4(&VAR_2->tst_lock, VAR_4);
 return VAR_5;
}
