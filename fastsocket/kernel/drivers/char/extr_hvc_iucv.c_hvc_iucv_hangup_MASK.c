
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iucv_path {int dummy; } ;
struct hvc_iucv_private {scalar_t__ iucv_state; scalar_t__ tty_state; int lock; scalar_t__ is_console; struct iucv_path* path; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hvc_iucv_private*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct iucv_path*) ;
 int FUNC_3 (struct iucv_path*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hvc_iucv_private *VAR_4)
{
 struct iucv_path *VAR_5;

 VAR_5 = ((void*)0);
 FUNC_4(&VAR_4->lock);
 if (VAR_4->iucv_state == VAR_0) {
  VAR_5 = VAR_4->path;
  VAR_4->path = ((void*)0);
  VAR_4->iucv_state = VAR_1;
  if (VAR_4->tty_state == VAR_2)
   FUNC_0(VAR_4);
  else

   if (VAR_4->is_console) {
    FUNC_0(VAR_4);
    VAR_4->tty_state = VAR_3;
   } else
    FUNC_1();
 }
 FUNC_5(&VAR_4->lock);


 if (VAR_5) {
  FUNC_3(VAR_5, ((void*)0));
  FUNC_2(VAR_5);
 }
}
