
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ uesp; } ;
typedef TYPE_1__ x86_saved_state32_t ;
typedef int user_addr_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int* ftp_argmap; int ftp_nargs; } ;
typedef TYPE_2__ fasttrap_probe_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(fasttrap_probe_t *VAR_0, x86_saved_state32_t *VAR_1, int VAR_2,
    uint32_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = FUNC_0(VAR_2, VAR_0->ftp_nargs);
 uint32_t *VAR_7 = (uint32_t *)(uintptr_t)(VAR_1->uesp);

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_5 = VAR_0->ftp_argmap[VAR_4];

  FUNC_1((user_addr_t)(unsigned long)&VAR_7[VAR_5], &VAR_3[VAR_4]);
 }

 for (; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[VAR_4] = 0;
 }
}
