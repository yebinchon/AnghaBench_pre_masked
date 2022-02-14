
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_struct {int dummy; } ;
struct hvc_iucv_private {scalar_t__ iucv_state; int lock; int tty_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hvc_iucv_private*) ;
 int FUNC_1 (struct hvc_iucv_private*) ;
 struct hvc_iucv_private* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hvc_struct *VAR_2, int VAR_3)
{
 struct hvc_iucv_private *VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return;

 FUNC_0(VAR_4);

 FUNC_3(&VAR_4->lock);







 VAR_4->tty_state = VAR_1;

 if (VAR_4->iucv_state == VAR_0)
  FUNC_1(VAR_4);
 FUNC_4(&VAR_4->lock);
}
