
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_address_t ;
typedef int ppnum_t ;
typedef int pmap_paddr_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int * VAR_12 ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int * VAR_13 ;

vm_map_address_t
FUNC_9(
         void
)
{
 kern_return_t VAR_14;
 pmap_paddr_t VAR_15 = 0;


 (void) FUNC_7(&VAR_15, VAR_3, 0);

 FUNC_3((char *) FUNC_4(VAR_15), 0, VAR_3);
 VAR_13 = FUNC_5(((void*)0), 0x0, VAR_1);
 FUNC_0(VAR_13 != ((void*)0));


 VAR_14 = FUNC_6(VAR_13, VAR_11, (ppnum_t)FUNC_1(VAR_15), VAR_7, VAR_6, VAR_8, VAR_5);
 FUNC_0(VAR_14 == VAR_2);
 FUNC_8(VAR_13, VAR_11, VAR_4);


 VAR_14 = FUNC_6(VAR_13, VAR_10, (ppnum_t)FUNC_1(VAR_15), VAR_7, VAR_6, VAR_8, VAR_5);
 FUNC_0(VAR_14 == VAR_2);
 FUNC_8(VAR_13, VAR_10, VAR_4);


 return ((vm_map_address_t)FUNC_4(VAR_15));
}
