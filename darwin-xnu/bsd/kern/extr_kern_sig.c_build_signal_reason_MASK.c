
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef TYPE_2__* os_reason_t ;
typedef int mach_vm_address_t ;
struct TYPE_9__ {int osr_kcd_descriptor; } ;
struct TYPE_8__ {char const* p_pid; char const* p_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *,int ,int,int *) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,int) ;

__attribute__((used)) static os_reason_t
FUNC_9(int VAR_5, const char *VAR_6)
{
 os_reason_t VAR_7 = VAR_3;
 proc_t VAR_8 = FUNC_0();
 uint32_t VAR_9 = 0, VAR_10 = 0;
 const char *VAR_11 = "unknown";
 mach_vm_address_t VAR_12;
 int VAR_13;

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (VAR_7 == VAR_3) {
  FUNC_6("build_signal_reason: unable to allocate signal reason structure.\n");
  return VAR_7;
 }

 VAR_9 = FUNC_1(2, sizeof(VAR_8->p_name) +
          sizeof(VAR_8->p_pid));

 VAR_13 = FUNC_4(VAR_7, VAR_9);
 if (VAR_13 != 0) {
  FUNC_6("build_signal_reason: unable to allocate signal reason buffer.\n");
  return VAR_7;
 }

 if (VAR_2 == FUNC_2(&VAR_7->osr_kcd_descriptor, VAR_0,
       sizeof(VAR_8->p_pid), &VAR_12)) {
  FUNC_3(&VAR_7->osr_kcd_descriptor, VAR_12, &VAR_8->p_pid,
     sizeof(VAR_8->p_pid));
 } else {
  FUNC_6("build_signal_reason: exceeded space in signal reason buf, unable to log PID\n");
 }

 VAR_10 = sizeof(VAR_8->p_name);
 if (VAR_2 == FUNC_2(&VAR_7->osr_kcd_descriptor, VAR_1,
       VAR_10, &VAR_12)) {
  if (VAR_6) {
   char VAR_14[VAR_10];
   FUNC_8((char *) &VAR_14, VAR_6, VAR_10);
   VAR_14[VAR_10 - 1] = '\0';

   FUNC_3(&VAR_7->osr_kcd_descriptor, VAR_12, VAR_14,
     FUNC_7((char *) &VAR_14));
  } else if (*VAR_8->p_name) {
   FUNC_3(&VAR_7->osr_kcd_descriptor, VAR_12, &VAR_8->p_name,
     sizeof(VAR_8->p_name));
  } else {
   FUNC_3(&VAR_7->osr_kcd_descriptor, VAR_12, &VAR_11,
     FUNC_7(VAR_11) + 1);
  }
 } else {
  FUNC_6("build_signal_reason: exceeded space in signal reason buf, unable to log procname\n");
 }

 return VAR_7;
}
