
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dts_nspeculations; int dts_aggbuffer; int dts_buffer; TYPE_2__* dts_speculations; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_6__ {int dtsp_buffer; } ;
typedef TYPE_2__ dtrace_speculation_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(dtrace_state_t *VAR_3)
{
 dtrace_speculation_t *VAR_4 = VAR_3->dts_speculations;
 int VAR_5, VAR_6;

 if ((VAR_5 = FUNC_0(VAR_3, VAR_3->dts_buffer,
     VAR_1)) != 0)
  return (VAR_5);

 if ((VAR_5 = FUNC_0(VAR_3, VAR_3->dts_aggbuffer,
     VAR_0)) != 0)
  return (VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_3->dts_nspeculations; VAR_6++) {
  if ((VAR_5 = FUNC_0(VAR_3,
      VAR_4[VAR_6].dtsp_buffer, VAR_2)) != 0)
   return (VAR_5);
 }

 return (0);
}
