
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ ppnum_t ;
typedef int pmap_paddr_t ;
typedef scalar_t__ int32_t ;
typedef TYPE_1__* c_slot_mapping_t ;
struct TYPE_5__ {scalar_t__ he_data; } ;
struct TYPE_4__ {scalar_t__ s_cseg; size_t s_cindx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,TYPE_1__*,int,int*) ;
 int VAR_4 ;
 int FUNC_3 (size_t) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(ppnum_t VAR_8, int *VAR_9, int VAR_10)
{
 c_slot_mapping_t VAR_11;
 char *VAR_12;
 int VAR_13 = 1;
 int VAR_14;


 VAR_12 = FUNC_1((uint64_t)VAR_8 << (uint64_t)VAR_2);





 VAR_11 = (c_slot_mapping_t)VAR_9;

 if (VAR_11->s_cseg == VAR_1) {
  int32_t VAR_15;
  int32_t *VAR_16;







  VAR_16 = (int32_t *)(uintptr_t)VAR_12;
  VAR_15 = VAR_5[VAR_11->s_cindx].he_data;

  FUNC_4(VAR_16, VAR_15, VAR_3 / sizeof(int32_t));
  if ( !(VAR_10 & VAR_0)) {
   FUNC_3(VAR_11->s_cindx);

   FUNC_0(-1, &VAR_4);
   *VAR_9 = 0;
  }
  if (VAR_15)
   FUNC_0(1, &VAR_6);
  else
   FUNC_0(1, &VAR_7);

  return (0);
 }

 VAR_14 = FUNC_2(VAR_12, VAR_11, VAR_10, &VAR_13);





 if (VAR_13) {
  *VAR_9 = 0;
 }






 return (VAR_14);
}
