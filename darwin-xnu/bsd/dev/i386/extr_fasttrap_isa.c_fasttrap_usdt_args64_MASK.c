
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rsp; } ;
struct TYPE_7__ {scalar_t__ rdi; TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int* ftp_argmap; int ftp_nargs; } ;
typedef TYPE_3__ fasttrap_probe_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(fasttrap_probe_t *VAR_0, x86_saved_state64_t *VAR_1, int VAR_2,
    uint64_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = FUNC_0(VAR_2, VAR_0->ftp_nargs);
 user_addr_t VAR_7 = (user_addr_t)VAR_1->isf.rsp;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_5 = VAR_0->ftp_argmap[VAR_4];

  if (VAR_5 < 6) {

   VAR_3[VAR_4] = (&VAR_1->rdi)[VAR_5];
  } else {
   FUNC_1(VAR_7 + (VAR_5 * sizeof(uint64_t)), &VAR_3[VAR_4]);
  }
 }

 for (; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[VAR_4] = 0;
 }
}
