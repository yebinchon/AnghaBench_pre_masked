
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ tt_free_entry_t ;
typedef int tt_entry_t ;
typedef scalar_t__ pmap_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int) ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_6(
 pmap_t VAR_19,
 tt_entry_t *VAR_20,
 vm_size_t VAR_21,
 unsigned VAR_22)
{
 tt_free_entry_t *VAR_23;

 VAR_23 = (tt_free_entry_t *)VAR_20;
 if (VAR_17)
  FUNC_3(&VAR_18);

 if (VAR_21 < VAR_2) {
  VAR_8++;
  if (VAR_8 > VAR_10)
   VAR_10 = VAR_8;
  VAR_23->next = VAR_9;
  VAR_9 = VAR_23;
 }

 if (VAR_21 == VAR_2) {
  VAR_5++;
  if (VAR_5 > VAR_7)
   VAR_7 = VAR_5;
  VAR_23->next = VAR_6;
  VAR_6 = VAR_23;
 }

 if (VAR_21 == 2*VAR_2) {
  VAR_11++;
  if (VAR_11 > VAR_13)
   VAR_13 = VAR_11;
  VAR_23->next = VAR_12;
  VAR_12 = VAR_23;
 }

 if ((VAR_22 & VAR_4) || (!VAR_17)) {
  if (VAR_17)
   FUNC_4(&VAR_18);
  FUNC_5(VAR_19, VAR_21);
  return;
 }

 while (VAR_5 > VAR_0) {

  VAR_5--;
  VAR_20 = (tt_entry_t *)VAR_6;
  VAR_6 = ((tt_free_entry_t *)VAR_20)->next;

  FUNC_4(&VAR_18);

  FUNC_2(FUNC_1((vm_offset_t)VAR_20), VAR_2);

  FUNC_0(-(int32_t)(VAR_2 / VAR_3), (VAR_19 == VAR_16 ? &VAR_14 : &VAR_15));

  FUNC_3(&VAR_18);
 }

 while (VAR_11 > VAR_1) {
  VAR_11--;
  VAR_20 = (tt_entry_t *)VAR_12;
  VAR_12 = ((tt_free_entry_t *)VAR_20)->next;

  FUNC_4(&VAR_18);

  FUNC_2(FUNC_1((vm_offset_t)VAR_20), 2*VAR_2);

  FUNC_0(-2 * (int32_t)(VAR_2 / VAR_3), (VAR_19 == VAR_16 ? &VAR_14 : &VAR_15));

  FUNC_3(&VAR_18);
 }
 FUNC_4(&VAR_18);
 FUNC_5(VAR_19, VAR_21);
}
