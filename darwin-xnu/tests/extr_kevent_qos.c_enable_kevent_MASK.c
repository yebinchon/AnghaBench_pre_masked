
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kevent_qos_s {int member_0; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct kevent_qos_s*,int,struct kevent_qos_s*,int,int *,int *,int) ;
 int FUNC_2 (struct kevent_qos_s*,unsigned long long) ;

__attribute__((used)) static void
FUNC_3(uint64_t *VAR_4, unsigned long long VAR_5)
{
 kern_return_t VAR_6;
 struct kevent_qos_s VAR_7;

 FUNC_2(&VAR_7, VAR_5);
 struct kevent_qos_s VAR_8[] = {{ 0 }};

 VAR_6 = FUNC_1(*VAR_4, &VAR_7, 1, VAR_8, 1, ((void*)0),
   ((void*)0), VAR_2 | VAR_1 | VAR_0);
 VAR_3; FUNC_0(VAR_6, "kevent_id");
}
