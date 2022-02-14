
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _posix_spawnattr {int dummy; } ;
typedef int posix_spawnattr_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
struct TYPE_2__ {int psa_priority; int psa_memlimit_active; int psa_memlimit_inactive; int psa_reserved; scalar_t__ psa_max_addr; int psa_darwin_role; int psa_qos_clamp; int * psa_persona_info; int * psa_coalition_info; int * psa_mac_extensions; scalar_t__ psa_cpumonitor_interval; scalar_t__ psa_cpumonitor_percent; scalar_t__ psa_thread_limit; scalar_t__ psa_jetsam_flags; int psa_apptype; scalar_t__ flags_padding; scalar_t__ short_padding; scalar_t__ psa_pcontrol; int * psa_ports; int psa_binprefs; scalar_t__ psa_pgroup; scalar_t__ psa_sigmask; scalar_t__ psa_sigdefault; scalar_t__ psa_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

int
FUNC_2(posix_spawnattr_t *VAR_4)
{
 _posix_spawnattr_t *VAR_5 = (_posix_spawnattr_t *)VAR_4;
 int VAR_6 = 0;

 if ((*VAR_5 = (_posix_spawnattr_t)FUNC_0(sizeof(struct _posix_spawnattr))) == ((void*)0)) {
  VAR_6 = VAR_0;
 } else {





  (*VAR_5)->psa_flags = 0;





  (*VAR_5)->psa_sigdefault = 0;


  (*VAR_5)->psa_sigmask = 0;


  (*VAR_5)->psa_pgroup = 0;


  FUNC_1((*VAR_5)->psa_binprefs, 0,
    sizeof((*VAR_5)->psa_binprefs));


  (*VAR_5)->psa_ports = ((void*)0);





  (*VAR_5)->psa_pcontrol = 0;





   (*VAR_5)->short_padding = 0;
   (*VAR_5)->flags_padding = 0;


  (*VAR_5)->psa_apptype = VAR_2;


  (*VAR_5)->psa_jetsam_flags = 0;
  (*VAR_5)->psa_priority = -1;
  (*VAR_5)->psa_memlimit_active = -1;
  (*VAR_5)->psa_memlimit_inactive = -1;


  (*VAR_5)->psa_thread_limit = 0;


  (*VAR_5)->psa_cpumonitor_percent = 0;
  (*VAR_5)->psa_cpumonitor_interval = 0;


  (*VAR_5)->psa_mac_extensions = ((void*)0);


  (*VAR_5)->psa_coalition_info = ((void*)0);

  (*VAR_5)->psa_persona_info = ((void*)0);
  (*VAR_5)->psa_reserved = 1;


  (*VAR_5)->psa_qos_clamp = VAR_3;


  (*VAR_5)->psa_darwin_role = VAR_1;

  (*VAR_5)->psa_max_addr = 0;
 }

 return (VAR_6);
}
