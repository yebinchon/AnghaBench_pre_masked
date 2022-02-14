
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_address_t ;
typedef int uint32_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ tt_free_entry_t ;
typedef int tt_entry_t ;
typedef scalar_t__ pmap_t ;
typedef int pmap_paddr_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,unsigned int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int) ;
 int VAR_16 ;

__attribute__((used)) static tt_entry_t *
FUNC_7(
 pmap_t VAR_17,
 vm_size_t VAR_18,
 unsigned VAR_19)
{
 tt_entry_t *VAR_20;
 tt_free_entry_t *VAR_21;
 pmap_paddr_t VAR_22;
 vm_address_t VAR_23;
 vm_address_t VAR_24;
 kern_return_t VAR_25;

 FUNC_4(&VAR_16);
 if ((VAR_18 == VAR_1) && (VAR_6 != 0)) {
   VAR_6--;
   VAR_20 = (tt_entry_t *)VAR_7;
   VAR_7 = ((tt_free_entry_t *)VAR_20)->next;
   FUNC_5(&VAR_16);
   FUNC_6(VAR_17, VAR_18);
   return (tt_entry_t *)VAR_20;
 };
 if ((VAR_18 == 2*VAR_1) && (VAR_11 != 0)) {
   VAR_11--;
   VAR_20 = (tt_entry_t *)VAR_12;
   VAR_12 = ((tt_free_entry_t *)VAR_20)->next;
   FUNC_5(&VAR_16);
   FUNC_6(VAR_17, VAR_18);
   return (tt_entry_t *)VAR_20;
 };
 if (VAR_8 != 0) {
   VAR_8--;
   VAR_20 = (tt_entry_t *)VAR_9;
   VAR_9 = (tt_free_entry_t *)((tt_free_entry_t *)VAR_20)->next;
   FUNC_5(&VAR_16);
   FUNC_6(VAR_17, VAR_18);
   return (tt_entry_t *)VAR_20;
 }

 FUNC_5(&VAR_16);

 VAR_25 = FUNC_3(&VAR_22, (unsigned)((VAR_18 < VAR_1)? VAR_1 : VAR_18), ((VAR_19 & VAR_4)? VAR_2 : 0));

 if(VAR_25 == VAR_0)
  return (tt_entry_t *)0;


 if (VAR_18 < VAR_1) {
  FUNC_4(&VAR_16);

  for (VAR_24 = FUNC_2(VAR_22) + VAR_1, VAR_23 = FUNC_2(VAR_22) + VAR_18; VAR_23 < VAR_24; VAR_23 = VAR_23+VAR_18) {
   VAR_21 = (tt_free_entry_t *)VAR_23;
   VAR_21->next = VAR_9;
   VAR_9 = VAR_21;
   VAR_8++;
  }
  if (VAR_8 > VAR_10)
   VAR_10 = VAR_8;

  FUNC_5(&VAR_16);
 }



 FUNC_0((uint32_t)(VAR_18 / VAR_3), (VAR_17 == VAR_15 ? &VAR_13 : &VAR_14));
 FUNC_1(VAR_18 / VAR_3, &VAR_5);
 FUNC_6(VAR_17, VAR_18);

 return (tt_entry_t *) FUNC_2(VAR_22);
}
