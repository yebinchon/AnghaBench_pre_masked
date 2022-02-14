
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct turnstile {int dummy; } ;
struct knote {int kn_status; scalar_t__* kn_ext; scalar_t__ kn_hook; } ;
typedef scalar_t__ mach_msg_type_name_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_3__ {scalar_t__ ip_specialreply; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct turnstile* VAR_7 ;
 int FUNC_0 (int) ;
 struct turnstile* FUNC_1 (struct knote*) ;
 struct turnstile* FUNC_2 () ;
 int FUNC_3 () ;
 struct turnstile* FUNC_4 (uintptr_t,struct turnstile**,struct turnstile*,int ) ;
 int FUNC_5 (struct turnstile*,struct turnstile*,int) ;

void
FUNC_6(
  struct knote *VAR_8,
  mach_msg_type_name_t VAR_9,
  ipc_port_t VAR_10)
{

 FUNC_0((VAR_8->kn_status & VAR_1) && (VAR_8->kn_status & VAR_0));

 struct turnstile *VAR_11 = FUNC_1(VAR_8);
 if (VAR_11 == VAR_7 || VAR_8->kn_ext[3] == 0 || VAR_8->kn_hook)
  return;

 if ((VAR_9 == VAR_3 && VAR_10->ip_specialreply) ||
   (VAR_9 == VAR_2)) {
  struct turnstile *VAR_12 = FUNC_2();
  VAR_12 = FUNC_4((uintptr_t)VAR_8,
    (struct turnstile **)&VAR_8->kn_hook, VAR_12, VAR_6);
  FUNC_5(VAR_12, VAR_11,
    VAR_4 | VAR_5);
  FUNC_3();
 }
}
