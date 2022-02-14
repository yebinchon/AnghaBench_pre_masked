
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_page_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ pmap_paddr_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned int,scalar_t__*,int ,int,int ,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (scalar_t__,int ,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (scalar_t__,int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_17(
 pmap_paddr_t *VAR_13,
 unsigned VAR_14,
 unsigned VAR_15)
{
 vm_page_t VAR_16 = VAR_8, VAR_17;

 if(VAR_15 & VAR_5) {
  FUNC_6(VAR_14 == VAR_3);
  *VAR_13 = FUNC_8();
  return VAR_1;
 }
 if (VAR_14 == VAR_3) {
  while ((VAR_16 = FUNC_12()) == VAR_8) {
   if(VAR_15 & VAR_4) {
    return VAR_0;
   }

   FUNC_5();
  }
  FUNC_14();
  FUNC_16(VAR_16, VAR_7, VAR_6);
  FUNC_15();
 }
 if (VAR_14 == 2*VAR_3) {
  while (FUNC_7(VAR_14, &VAR_16, 0, 1, VAR_6, 0) != VAR_1) {
   if(VAR_15 & VAR_4)
    return VAR_0;

   FUNC_5();
  }
 }

 *VAR_13 = (pmap_paddr_t)FUNC_9(FUNC_4(VAR_16));

 FUNC_10(VAR_12);
 while (VAR_16 != VAR_8) {
  FUNC_13(VAR_16, VAR_12, (vm_object_offset_t) ((FUNC_9(FUNC_4(VAR_16))) - VAR_10), VAR_7);
  VAR_17 = VAR_16;
  VAR_16 = FUNC_0(VAR_17);
  *(FUNC_1(VAR_17)) = VAR_8;
 }
 FUNC_11(VAR_12);

 FUNC_2(VAR_14>>VAR_2, &VAR_11);
 FUNC_3(VAR_14>>VAR_2, &VAR_9);

 return VAR_1;
}
