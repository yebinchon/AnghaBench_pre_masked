
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_map_offset_t ;
typedef TYPE_1__* pv_rooted_entry_t ;
typedef TYPE_2__* pv_hashed_entry_t ;
typedef int pt_entry_t ;
typedef scalar_t__ ppnum_t ;
typedef int pmap_t ;
typedef int boolean_t ;
struct TYPE_6__ {int qlink; int pmap; } ;
struct TYPE_5__ {scalar_t__ pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 () ;
 int* VAR_5 ;
 int* FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int
FUNC_12(
 ppnum_t VAR_8,
 int VAR_9)
{
 pv_rooted_entry_t VAR_10;
 pv_hashed_entry_t VAR_11;
 pt_entry_t *VAR_12;
 int VAR_13;
 pmap_t VAR_14;
 int VAR_15 = 0;
 boolean_t VAR_16;

 FUNC_8();
 FUNC_4(VAR_8 != VAR_6);
 FUNC_4((VAR_9 & ~(VAR_2 | VAR_3)) == 0);
 if (VAR_8 == VAR_7)
  return 0;

 VAR_13 = FUNC_10(VAR_8);

 if (!FUNC_0(VAR_13)) {



  return 0;
 }
 if ((VAR_5[VAR_13] & VAR_9) == VAR_9)
  return VAR_9;

 VAR_10 = FUNC_7(VAR_13);

 FUNC_1(VAR_13);

 VAR_15 = VAR_5[VAR_13] & VAR_9;






 if (VAR_15 != VAR_9 &&
     VAR_10->pmap != VAR_4) {



  VAR_11 = (pv_hashed_entry_t)VAR_10;
  do {
   vm_map_offset_t VAR_17;

   VAR_14 = VAR_11->pmap;
   VAR_16 = FUNC_6(VAR_14);
   VAR_17 = FUNC_2(VAR_11);




   VAR_12 = FUNC_9(VAR_14, VAR_17);
   if (!VAR_16) {
    VAR_15 |= (int)(*VAR_12 & VAR_9);
   } else {
    VAR_15 |= (int)(FUNC_5((*VAR_12 & (VAR_1 | VAR_0))) & (VAR_2 | VAR_3));

   }

   VAR_11 = (pv_hashed_entry_t)FUNC_11(&VAR_11->qlink);

  } while ((VAR_15 != VAR_9) &&
    (VAR_11 != (pv_hashed_entry_t)VAR_10));
 }
 VAR_5[VAR_13] |= VAR_15;

 FUNC_3(VAR_13);
 return (VAR_15);
}
