
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_continue_t ;
struct turnstile {int dummy; } ;
struct knote_lock_ctx {int dummy; } ;
struct _kevent_register {int handoff_thread; int knote; int kq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct knote_lock_ctx*,int ) ;
 int FUNC_1 (int ,int ,struct _kevent_register*) ;
 int FUNC_2 (struct turnstile*,int ) ;

__attribute__((used)) static void
FUNC_3(struct turnstile *VAR_2, thread_t VAR_3,
  struct knote_lock_ctx *VAR_4, thread_continue_t VAR_5,
  struct _kevent_register *VAR_6)
{
 FUNC_0(VAR_6->kq, VAR_6->knote, VAR_4, VAR_0);
 FUNC_2(VAR_2, VAR_1);
 VAR_6->handoff_thread = VAR_3;
 FUNC_1(VAR_3, VAR_5, VAR_6);
}
