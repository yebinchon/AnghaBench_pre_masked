
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ipc_port_t ;
typedef TYPE_2__* ipc_kmsg_t ;
typedef scalar_t__ ipc_importance_elem_t ;
struct TYPE_6__ {scalar_t__ ikm_importance; TYPE_1__* ikm_header; } ;
struct TYPE_5__ {int msgh_remote_port; int msgh_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,int) ;

void
FUNC_10(
 ipc_kmsg_t VAR_4)
{
 ipc_port_t VAR_5;


 if (VAR_1 != VAR_4->ikm_importance) {
  ipc_importance_elem_t VAR_6;

  FUNC_7();
  VAR_6 = FUNC_6(VAR_4);
  FUNC_2(VAR_1 != VAR_6);
  FUNC_8(VAR_6);

 }


 if (FUNC_1(VAR_4->ikm_header->msgh_bits)) {
  VAR_4->ikm_header->msgh_bits &= ~VAR_3;
  VAR_5 = VAR_4->ikm_header->msgh_remote_port;
  if (FUNC_0(VAR_5)) {
   FUNC_4(VAR_5);

   if (!FUNC_3(VAR_5) ||
       FUNC_9(VAR_5, VAR_2, -1) == VAR_0) {
    FUNC_5(VAR_5);
   }
  }
 }
}
