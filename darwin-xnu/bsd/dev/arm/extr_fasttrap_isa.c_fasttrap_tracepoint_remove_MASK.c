
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int proc_t ;
struct TYPE_3__ {scalar_t__ ftt_installed; int ftt_pc; int ftt_instr; scalar_t__ ftt_thumb; } ;
typedef TYPE_1__ fasttrap_tracepoint_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*,int,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int,int ) ;

int
FUNC_2(proc_t *VAR_2, fasttrap_tracepoint_t *VAR_3)
{

 uint32_t VAR_4;
 int VAR_5 = VAR_3->ftt_thumb ? 2 : 4;





 if (FUNC_0(VAR_2, &VAR_4, VAR_5, VAR_3->ftt_pc) != 0)
  goto end;
 if (VAR_3->ftt_thumb) {
  if (*((uint16_t*) &VAR_4) != VAR_1)
   goto end;
 } else {
  if (VAR_4 != VAR_0)
   goto end;
 }
 if (FUNC_1(VAR_2, &VAR_3->ftt_instr, VAR_5, VAR_3->ftt_pc) != 0)
  return (-1);

end:
 VAR_3->ftt_installed = 0;

 return (0);
}
