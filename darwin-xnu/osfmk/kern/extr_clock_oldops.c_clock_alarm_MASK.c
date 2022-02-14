
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int spl_t ;
typedef int mach_timespec_t ;
typedef int mach_msg_type_name_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
typedef TYPE_2__* clock_t ;
typedef int alarm_type_t ;
typedef TYPE_3__* alarm_t ;
struct TYPE_11__ {scalar_t__ al_seqno; TYPE_2__* al_clock; int al_port_type; int al_port; int al_type; int al_time; int al_status; struct TYPE_11__* al_next; } ;
struct TYPE_10__ {TYPE_1__* cl_ops; } ;
struct TYPE_9__ {int (* c_gettime ) (int *) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 size_t VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 TYPE_2__* VAR_12 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

kern_return_t
FUNC_8(
 clock_t VAR_13,
 alarm_type_t VAR_14,
 mach_timespec_t VAR_15,
 ipc_port_t VAR_16,
 mach_msg_type_name_t VAR_17)
{
 alarm_t VAR_18;
 mach_timespec_t VAR_19;
 int VAR_20;
 kern_return_t VAR_21;
 spl_t VAR_22;

 if (VAR_13 == VAR_1)
  return (VAR_3);
 if (VAR_13 != &VAR_12[VAR_8])
  return (VAR_2);
 if (FUNC_0(VAR_16) == 0)
  return (VAR_4);





 (*VAR_13->cl_ops->c_gettime)(&VAR_19);
 VAR_20 = FUNC_3(VAR_14, &VAR_15, &VAR_19);
 if (VAR_20 <= 0) {
  VAR_21 = (VAR_20 < 0 ? VAR_5 : VAR_7);
  FUNC_4(VAR_16, VAR_17,
      VAR_21, VAR_14, VAR_19);
  return (VAR_7);
 }





 FUNC_1(VAR_22);
 if ((VAR_18 = VAR_11) == 0) {
  FUNC_2(VAR_22);
  VAR_18 = (alarm_t) FUNC_7(VAR_9);
  if (VAR_18 == 0)
   return (VAR_6);
  FUNC_1(VAR_22);
 }
 else
  VAR_11 = VAR_18->al_next;

 VAR_18->al_status = VAR_0;
 VAR_18->al_time = VAR_15;
 VAR_18->al_type = VAR_14;
 VAR_18->al_port = VAR_16;
 VAR_18->al_port_type = VAR_17;
 VAR_18->al_clock = VAR_13;
 VAR_18->al_seqno = VAR_10++;
 FUNC_5(VAR_18);
 FUNC_2(VAR_22);

 return (VAR_7);
}
