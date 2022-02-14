
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mps_pset; int mps_srights; int mps_pdrequest; int mps_nsrequest; int mps_flags; int mps_sorights; int mps_mscount; int mps_msgcount; int mps_qlimit; int mps_seqno; } ;
typedef TYPE_1__ mach_port_status_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_9__ {int imq_msgcount; int imq_qlimit; int imq_seqno; } ;
struct TYPE_8__ {scalar_t__ ip_srights; scalar_t__ ip_pdrequest; scalar_t__ ip_nsrequest; scalar_t__ ip_imp_task; scalar_t__ ip_strict_guard; scalar_t__ ip_guarded; scalar_t__ ip_tempowner; scalar_t__ ip_impdonation; int ip_sorights; int ip_mscount; TYPE_5__ ip_messages; int ip_in_pset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;

void FUNC_2(
 ipc_port_t VAR_7,
 mach_port_status_t *VAR_8)
{
 FUNC_0(&VAR_7->ip_messages);

 VAR_8->mps_pset = !!(VAR_7->ip_in_pset);
 VAR_8->mps_seqno = VAR_7->ip_messages.imq_seqno;
 VAR_8->mps_qlimit = VAR_7->ip_messages.imq_qlimit;
 VAR_8->mps_msgcount = VAR_7->ip_messages.imq_msgcount;
 FUNC_1(&VAR_7->ip_messages);

 VAR_8->mps_mscount = VAR_7->ip_mscount;
 VAR_8->mps_sorights = VAR_7->ip_sorights;
 VAR_8->mps_srights = VAR_7->ip_srights > 0;
 VAR_8->mps_pdrequest = VAR_7->ip_pdrequest != VAR_1;
 VAR_8->mps_nsrequest = VAR_7->ip_nsrequest != VAR_1;
 VAR_8->mps_flags = 0;
 if (VAR_7->ip_impdonation) {
  VAR_8->mps_flags |= VAR_3;
  if (VAR_7->ip_tempowner) {
   VAR_8->mps_flags |= VAR_6;
   if (VAR_0 != VAR_7->ip_imp_task) {
    VAR_8->mps_flags |= VAR_5;
   }
  }
 }
 if (VAR_7->ip_guarded) {
  VAR_8->mps_flags |= VAR_2;
  if (VAR_7->ip_strict_guard) {
   VAR_8->mps_flags |= VAR_4;
  }
 }
 return;
}
