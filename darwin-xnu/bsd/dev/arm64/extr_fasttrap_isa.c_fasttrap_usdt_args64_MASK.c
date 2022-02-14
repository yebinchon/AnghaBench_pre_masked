
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int* ftp_argmap; int ftp_nargs; } ;
typedef TYPE_1__ fasttrap_probe_t ;
struct TYPE_6__ {scalar_t__ sp; scalar_t__* x; } ;
typedef TYPE_2__ arm_saved_state64_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(fasttrap_probe_t *VAR_0, arm_saved_state64_t *VAR_1, int VAR_2,
    uint64_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = FUNC_0(VAR_2, VAR_0->ftp_nargs);

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_5 = VAR_0->ftp_argmap[VAR_4];


  if (VAR_5 < 8) {
   VAR_3[VAR_4] = VAR_1->x[VAR_5];
  } else {
   FUNC_1(VAR_1->sp + (VAR_5 - 8) * sizeof(uint64_t), &VAR_3[VAR_4]);
  }
 }

 for (; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[VAR_4] = 0;
 }
}
