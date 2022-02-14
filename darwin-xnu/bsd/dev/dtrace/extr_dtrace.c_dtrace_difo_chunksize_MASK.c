
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uchar_t ;
struct TYPE_10__ {size_t dtds_chunksize; } ;
struct TYPE_11__ {TYPE_2__ dtvs_dynvars; } ;
typedef TYPE_3__ dtrace_vstate_t ;
struct TYPE_12__ {size_t dttk_size; } ;
typedef TYPE_4__ dtrace_key_t ;
typedef int dtrace_dynvar_t ;
struct TYPE_9__ {scalar_t__ dtdt_size; } ;
struct TYPE_13__ {size_t dtdv_id; scalar_t__ dtdv_scope; TYPE_1__ dtdv_type; } ;
typedef TYPE_5__ dtrace_difv_t ;
struct TYPE_14__ {size_t dtdo_len; scalar_t__* dtdo_inttab; size_t dtdo_varlen; TYPE_5__* dtdo_vartab; int * dtdo_buf; } ;
typedef TYPE_6__ dtrace_difo_t ;
typedef int dif_instr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_5 (size_t,int) ;
 size_t VAR_5 ;

__attribute__((used)) static void
FUNC_6(dtrace_difo_t *VAR_6, dtrace_vstate_t *VAR_7)
{
 uint64_t VAR_8 = 0;
 dtrace_key_t VAR_9[VAR_2 + 2];
 const dif_instr_t *VAR_10 = VAR_6->dtdo_buf;
 uint_t VAR_11, VAR_12 = 0;
 uint_t VAR_13 = 0;
 size_t VAR_14, VAR_15;
 uint_t VAR_16, VAR_17;

 for (VAR_11 = 0; VAR_11 < VAR_6->dtdo_len; VAR_11++) {
  dif_instr_t VAR_18 = VAR_10[VAR_11];
  uint_t VAR_19 = FUNC_1(VAR_18);
  uint_t VAR_20 = FUNC_3(VAR_18);
  uint_t VAR_21 = FUNC_2(VAR_18);
  uint_t VAR_22 = 0;
  uchar_t VAR_23;

  dtrace_key_t *VAR_24 = VAR_9;

  switch (VAR_19) {
  case 131:
   VAR_8 = VAR_6->dtdo_inttab[FUNC_0(VAR_18)];
   VAR_12 = VAR_20;
   continue;

  case 128:
   VAR_24 = &VAR_9[VAR_2];
   VAR_24[0].dttk_size = 0;
   VAR_24[1].dttk_size = 0;
   VAR_22 = 2;
   VAR_23 = VAR_1;
   break;

  case 130:
  case 129:
   VAR_22 = VAR_13;

   if (FUNC_1(VAR_18) == 129)
    VAR_24[VAR_22++].dttk_size = 0;

   VAR_24[VAR_22++].dttk_size = 0;

   if (VAR_19 == 129) {
    VAR_23 = VAR_1;
   } else {
    VAR_23 = VAR_0;
   }

   break;

  case 133:
   if (VAR_13 == VAR_2)
    return;

   if ((VAR_12 == 0 || VAR_8 == 0) && VAR_21 == VAR_3) {






    VAR_9[VAR_13++].dttk_size =
        VAR_5;
   } else {
    if (VAR_12 == 0)
     return;

    if (VAR_8 > VAR_4)
     return;

    VAR_9[VAR_13++].dttk_size = VAR_8;
   }

   break;

  case 132:
   if (VAR_13 == VAR_2)
    return;

   VAR_9[VAR_13++].dttk_size = 0;
   break;

  case 135:
   VAR_13 = 0;
   break;

  case 134:
   if (VAR_13 != 0)
    VAR_13--;
   break;
  }

  VAR_8 = 0;
  VAR_12 = 0;

  if (VAR_22 == 0)
   continue;




  for (VAR_15 = 0, VAR_17 = 0; VAR_17 < VAR_22; VAR_17++)
   VAR_15 += FUNC_5(VAR_24[VAR_17].dttk_size, sizeof (uint64_t));

  VAR_14 = sizeof (dtrace_dynvar_t);
  VAR_14 += sizeof (dtrace_key_t) * (VAR_22 - 1);
  VAR_14 += VAR_15;




  VAR_16 = FUNC_4(VAR_18);

  for (VAR_17 = 0; VAR_17 < VAR_6->dtdo_varlen; VAR_17++) {
   dtrace_difv_t *VAR_25 = &VAR_6->dtdo_vartab[VAR_17];

   if (VAR_25->dtdv_id == VAR_16 && VAR_25->dtdv_scope == VAR_23) {
    VAR_14 += VAR_25->dtdv_type.dtdt_size;
    break;
   }
  }

  if (VAR_17 == VAR_6->dtdo_varlen)
   return;





  VAR_14 = FUNC_5(VAR_14, sizeof (uint64_t));





  if (VAR_14 > VAR_4)
   return;




  if (VAR_14 < VAR_15 || VAR_14 < sizeof (dtrace_dynvar_t))
   return;

  if (VAR_14 > VAR_7->dtvs_dynvars.dtds_chunksize)
   VAR_7->dtvs_dynvars.dtds_chunksize = VAR_14;
 }
}
