
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent_qos_s {int ident; int qos; int udata; int flags; int filter; } ;
typedef int kqueue_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,struct kevent_qos_s*,int,int *,int ,int *,int *,int) ;

__attribute__((used)) static void
FUNC_3(kqueue_id_t VAR_6)
{
 struct kevent_qos_s VAR_7[] = {{
  .filter = VAR_0,
  .ident = 1,
  .flags = VAR_1,
  .qos = (int)FUNC_1(VAR_5, 0, 0),
  .udata = VAR_2
 }};

 int VAR_8 = FUNC_2(VAR_6, VAR_7, 1, ((void*)0), 0, ((void*)0), ((void*)0), VAR_4 | VAR_3);
 FUNC_0(VAR_8, "register event with kevent_id");
}
