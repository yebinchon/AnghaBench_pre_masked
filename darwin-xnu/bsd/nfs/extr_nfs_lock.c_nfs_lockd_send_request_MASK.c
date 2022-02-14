
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mach_port_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int l_whence; int l_type; int l_pid; int l_len; int l_start; } ;
struct TYPE_5__ {int lm_fh; int lm_fh_len; int lm_cred; int lm_addr; TYPE_1__ lm_fl; int lm_xid; int lm_flags; int lm_version; } ;
typedef TYPE_2__ LOCKD_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int *,int *,int ,int ) ;
 int FUNC_5 (char*,int) ;

int
FUNC_6(LOCKD_MSG *VAR_7, int VAR_8)
{
 kern_return_t VAR_9;
 int VAR_10 = 0;
 mach_port_t VAR_11 = VAR_3;

 VAR_9 = FUNC_1(FUNC_2(), &VAR_11);
 if (VAR_9 != VAR_4 || !FUNC_0(VAR_11))
  return (VAR_2);

 do {

  do {
   VAR_9 = FUNC_4(
    VAR_11,
    VAR_7->lm_version,
    VAR_7->lm_flags,
    VAR_7->lm_xid,
    VAR_7->lm_fl.l_start,
    VAR_7->lm_fl.l_len,
    VAR_7->lm_fl.l_pid,
    VAR_7->lm_fl.l_type,
    VAR_7->lm_fl.l_whence,
    (uint32_t *)&VAR_7->lm_addr,
    (uint32_t *)&VAR_7->lm_cred,
    VAR_7->lm_fh_len,
    VAR_7->lm_fh);
   if (VAR_9 != VAR_4)
    FUNC_5("lockd_request received %d!\n", VAR_9);
  } while (!VAR_8 && VAR_9 == 128);
 } while (VAR_9 == VAR_6 && VAR_10++ < VAR_5);

 FUNC_3(VAR_11);
 switch (VAR_9) {
 case 128:
  return (VAR_1);
 default:





  return (VAR_0);
 }
}
