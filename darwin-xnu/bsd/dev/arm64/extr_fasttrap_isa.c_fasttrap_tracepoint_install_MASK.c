
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int proc_t ;
struct TYPE_3__ {int ftt_installed; int ftt_pc; scalar_t__ ftt_thumb; } ;
typedef TYPE_1__ fasttrap_tracepoint_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,int,int ) ;

int
FUNC_2(proc_t *VAR_3, fasttrap_tracepoint_t *VAR_4)
{

 uint32_t VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_3)) {
  VAR_6 = 4;
  VAR_5 = VAR_1;
 }
 else {
  VAR_6 = VAR_4->ftt_thumb ? 2 : 4;
  if (VAR_4->ftt_thumb) {
   *((uint16_t*) &VAR_5) = VAR_2;
  } else {
   VAR_5 = VAR_0;
  }
 }

 if (FUNC_1(VAR_3, &VAR_5, VAR_6, VAR_4->ftt_pc) != 0)
  return (-1);

 VAR_4->ftt_installed = 1;

 return (0);
}
