
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_4__ {scalar_t__ dtdv_scope; int dtdv_id; } ;
typedef TYPE_1__ dtrace_difv_t ;
struct TYPE_5__ {size_t dtdo_varlen; size_t dtdo_len; int * dtdo_buf; TYPE_1__* dtdo_vartab; } ;
typedef TYPE_2__ dtrace_difo_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;






__attribute__((used)) static int
FUNC_1(dtrace_difo_t *VAR_9)
{
 uint_t VAR_10;

 if (VAR_9 == ((void*)0))
  return (0);

 for (VAR_10 = 0; VAR_10 < VAR_9->dtdo_varlen; VAR_10++) {
  dtrace_difv_t *VAR_11 = &VAR_9->dtdo_vartab[VAR_10];

  if (VAR_11->dtdv_scope != VAR_0)
   continue;

  switch (VAR_11->dtdv_id) {
  case 132:
  case 130:
  case 129:
  case 131:
  case 128:
   break;

  default:
   return (0);
  }
 }






 for (VAR_10 = 0; VAR_10 < VAR_9->dtdo_len; VAR_10++) {
  uint_t VAR_12 = FUNC_0(VAR_9->dtdo_buf[VAR_10]);

  if ((VAR_12 >= VAR_2 && VAR_12 <= VAR_3) ||
      (VAR_12 >= VAR_7 && VAR_12 <= VAR_8) ||
      (VAR_12 >= VAR_4 && VAR_12 <= VAR_5) ||
      VAR_12 == VAR_1 || VAR_12 == VAR_6)
   return (0);
 }

 return (1);
}
