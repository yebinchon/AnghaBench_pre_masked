
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct knote {int kn_sfflags; } ;
typedef TYPE_1__* ipc_kmsg_t ;
struct TYPE_3__ {int ikm_qos_override; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_1, ipc_kmsg_t VAR_2)
{
 if (VAR_1->kn_sfflags & VAR_0) {
  int VAR_3 = FUNC_1(VAR_2->ikm_qos_override);
  return FUNC_0(VAR_3);
 }
 return 0;
}
