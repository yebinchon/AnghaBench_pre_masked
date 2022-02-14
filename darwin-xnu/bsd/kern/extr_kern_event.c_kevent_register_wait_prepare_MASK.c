
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct TYPE_4__ {struct knote* knote; } ;
struct TYPE_5__ {TYPE_1__ uus_kevent_register; } ;
struct uthread {TYPE_2__ uu_save; } ;
struct knote {scalar_t__ kn_hook; } ;
struct kevent_internal_s {int data; int flags; } ;
struct TYPE_6__ {int f_extended_codes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 struct uthread* FUNC_2 (scalar_t__) ;
 TYPE_3__* FUNC_3 (struct knote*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct knote *VAR_3, struct kevent_internal_s *VAR_4)
{
 thread_t VAR_5 = FUNC_1();
 struct uthread *VAR_6 = FUNC_2(VAR_5);

 FUNC_0(FUNC_3(VAR_3)->f_extended_codes);

 if (VAR_3->kn_hook == ((void*)0)) {
  FUNC_4(VAR_5);
  VAR_3->kn_hook = VAR_5;
 } else if (VAR_3->kn_hook != VAR_5) {




  VAR_4->flags |= VAR_0;
  VAR_4->data = VAR_1;
  return 0;
 }

 VAR_6->uu_save.uus_kevent_register.knote = VAR_3;
 return VAR_2;
}
