
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int tt_entry_t ;
typedef scalar_t__ pt_entry_t ;
typedef scalar_t__ ppnum_t ;
typedef TYPE_1__* pmap_t ;
typedef int addr64_t ;
struct TYPE_9__ {int min; int max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,TYPE_1__*,int,scalar_t__*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int* FUNC_4 (TYPE_1__*,int) ;
 int* FUNC_5 (TYPE_1__*,int) ;
 int* FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 size_t FUNC_11 (TYPE_1__*,int) ;
 size_t FUNC_12 (TYPE_1__*,int) ;
 scalar_t__ FUNC_13 (int) ;

ppnum_t
FUNC_14(
 pmap_t VAR_13,
 addr64_t VAR_14)
{
 if ((VAR_14 < VAR_13->min) || (VAR_14 >= VAR_13->max)) {
  return 0;
 }
 tt_entry_t *VAR_15;
 tt_entry_t VAR_16;
 ppnum_t VAR_17=0;
 VAR_15 = FUNC_4(VAR_13, VAR_14);
 VAR_16 = *VAR_15;
 if ((VAR_16 & (VAR_6 | VAR_8)) != (VAR_7 | VAR_8))
  return (VAR_17);

 VAR_16 = ((tt_entry_t*) FUNC_3(VAR_16 & VAR_4))[FUNC_11(VAR_13, VAR_14)];

 if ((VAR_16 & VAR_8) != (VAR_8))
  return (VAR_17);

 if ((VAR_16 & VAR_6) == VAR_5) {
  VAR_17 = (ppnum_t) FUNC_1((VAR_16 & VAR_2)| (VAR_14 & VAR_11));
  return(VAR_17);
 }
 VAR_16 = ((tt_entry_t*) FUNC_3(VAR_16 & VAR_4))[FUNC_12(VAR_13, VAR_14)];
 VAR_17 = (ppnum_t) FUNC_1((VAR_16 & VAR_1)| (VAR_14 & VAR_12));


 return VAR_17;
}
