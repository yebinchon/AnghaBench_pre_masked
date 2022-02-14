
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int processorid_t ;
struct TYPE_7__ {int* dts_options; scalar_t__ dts_activity; int dts_reserve; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_optval_t ;
struct TYPE_8__ {size_t dtb_size; } ;
typedef TYPE_2__ dtrace_buffer_t ;
struct TYPE_9__ {TYPE_1__* dta_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_6__ VAR_21 ;
 int FUNC_2 (TYPE_2__*,size_t,int,int,int) ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_3(dtrace_state_t *VAR_23, dtrace_buffer_t *VAR_24, int VAR_25)
{
 dtrace_optval_t *VAR_26 = VAR_23->dts_options, VAR_27;
 processorid_t VAR_28 = 0;
 size_t VAR_29 = VAR_24->dtb_size;
 int VAR_30 = 0, VAR_31;

 FUNC_1(&VAR_22, VAR_19);
 FUNC_1(&VAR_20, VAR_19);
 FUNC_0(VAR_25 < VAR_12);
 FUNC_0(VAR_23->dts_activity == VAR_16 ||
     (VAR_23 == VAR_21.dta_state &&
     VAR_23->dts_activity == VAR_15));

 if (VAR_26[VAR_25] == VAR_14 || VAR_26[VAR_25] == 0)
  return (0);

 if (VAR_26[VAR_11] != VAR_14)
  VAR_28 = VAR_26[VAR_11];

 if (VAR_25 == VAR_13)
  VAR_30 |= VAR_2;

 if (VAR_25 == VAR_10) {
  if (VAR_26[VAR_5] == VAR_7)
   VAR_30 |= VAR_3;

  if (VAR_26[VAR_5] == VAR_6)
   VAR_30 |= VAR_0;

  if (VAR_23 != VAR_21.dta_state ||
      VAR_23->dts_activity != VAR_15)
   VAR_30 |= VAR_1;
 }

 for (VAR_27 = VAR_26[VAR_25]; (size_t)VAR_27 >= sizeof (uint64_t); VAR_27 >>= 1) {




  if (VAR_27 & (sizeof (uint64_t) - 1))
   VAR_27 -= VAR_27 & (sizeof (uint64_t) - 1);

  if (VAR_27 < VAR_23->dts_reserve) {






   return (VAR_17);
  }
  VAR_29 = VAR_26[VAR_4] * VAR_27 / 100;
  VAR_31 = FUNC_2(VAR_24, VAR_29, VAR_27, VAR_30, VAR_28);

  if (VAR_31 != VAR_18) {
   VAR_26[VAR_25] = VAR_27;
   return (VAR_31);
  }

  if (VAR_26[VAR_8] == VAR_9)
   return (VAR_31);
 }

 return (VAR_18);
}
