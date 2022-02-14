
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_page_t ;
typedef scalar_t__ pmap_paddr_t ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ page_free_entry_t ;


 int FUNC_0 (unsigned int,int *) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(
 pmap_paddr_t VAR_9,
 unsigned VAR_10)
{
 FUNC_4(&VAR_6);

 if (VAR_8 != 0) {
  page_free_entry_t *VAR_11;

  VAR_8--;
  VAR_11 = (page_free_entry_t *)FUNC_3(VAR_9);
  VAR_11->next = VAR_7;
  VAR_7 = VAR_11;
  FUNC_5(&VAR_6);

  return;
 }

 FUNC_5(&VAR_6);

 vm_page_t VAR_12;
 pmap_paddr_t VAR_13;

 FUNC_0(-(VAR_10>>VAR_0), &VAR_4);

 for (VAR_13 = VAR_9 + VAR_10; VAR_9 < VAR_13; VAR_9 = VAR_9 + VAR_1) {
  FUNC_6(VAR_5);
  VAR_12 = FUNC_10(VAR_5, (VAR_9 - VAR_3));
  FUNC_2(VAR_12 != VAR_2);
  FUNC_2(FUNC_1(VAR_12));
  FUNC_9();
  FUNC_8(VAR_12);
  FUNC_11();
  FUNC_7(VAR_5);
 }
}
