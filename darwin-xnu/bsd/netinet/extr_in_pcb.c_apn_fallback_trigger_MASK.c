
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct socket {int so_flags; int last_uuid; int last_pid; int e_uuid; int e_pid; } ;
struct kev_netevent_apnfallbk_data {TYPE_1__* dv; int euuid; int epid; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct kev_msg {TYPE_1__* dv; int euuid; int epid; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
typedef int proc_t ;
typedef int pid_t ;
typedef int application_uuid ;
typedef int apnfallbk_data ;
struct TYPE_2__ {int data_length; struct kev_netevent_apnfallbk_data* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kev_netevent_apnfallbk_data*,int) ;
 int FUNC_2 (struct kev_netevent_apnfallbk_data*) ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(proc_t VAR_7, struct socket *VAR_8)
{
 pid_t VAR_9 = 0;
 struct kev_msg VAR_10;
 struct kev_netevent_apnfallbk_data VAR_11;

 VAR_6 = FUNC_3();
 VAR_9 = FUNC_5(VAR_7);
 uuid_t VAR_12;
 FUNC_6(VAR_12);
 FUNC_4(VAR_7, VAR_12,
     sizeof(VAR_12));

 FUNC_1(&VAR_10, sizeof (struct kev_msg));
 VAR_10.vendor_code = VAR_3;
 VAR_10.kev_class = VAR_2;
 VAR_10.kev_subclass = VAR_1;
 VAR_10.event_code = VAR_0;

 FUNC_1(&VAR_11, sizeof(VAR_11));

 if (VAR_8->so_flags & VAR_5) {
  VAR_11.epid = VAR_8->e_pid;
  FUNC_7(VAR_11.euuid, VAR_8->e_uuid);
 } else {
  VAR_11.epid = VAR_8->last_pid;
  FUNC_7(VAR_11.euuid, VAR_8->last_uuid);
 }

 VAR_10.dv[0].data_ptr = &VAR_11;
 VAR_10.dv[0].data_length = sizeof(VAR_11);
 FUNC_2(&VAR_10);
 FUNC_0((VAR_4, "APN fallback notification issued.\n"));
}
