
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iucv_message {scalar_t__ length; } ;
struct iucv_tty_buffer {int list; struct iucv_message msg; } ;
struct iucv_path {struct hvc_iucv_private* private; } ;
struct hvc_iucv_private {scalar_t__ tty_state; int lock; int tty_inqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 struct iucv_tty_buffer* FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct iucv_path*,struct iucv_message*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct iucv_path *VAR_3,
     struct iucv_message *VAR_4)
{
 struct hvc_iucv_private *VAR_5 = VAR_3->private;
 struct iucv_tty_buffer *VAR_6;


 if (VAR_4->length > FUNC_0(VAR_1)) {
  FUNC_3(VAR_3, VAR_4);
  return;
 }

 FUNC_5(&VAR_5->lock);


 if (VAR_5->tty_state == VAR_2) {
  FUNC_3(VAR_3, VAR_4);
  goto unlock_return;
 }


 VAR_6 = FUNC_1(0, VAR_0);
 if (!VAR_6) {
  FUNC_3(VAR_3, VAR_4);
  goto unlock_return;
 }
 VAR_6->msg = *VAR_4;

 FUNC_4(&VAR_6->list, &VAR_5->tty_inqueue);

 FUNC_2();

unlock_return:
 FUNC_6(&VAR_5->lock);
}
