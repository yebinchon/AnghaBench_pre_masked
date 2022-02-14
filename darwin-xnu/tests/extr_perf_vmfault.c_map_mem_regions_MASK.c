
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_address_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 () ;
 char* VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int *,int,int,int,int,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int ,int *,int,int ,int ,int ,int ,int ,int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 char *VAR_15;
 volatile char VAR_16;
 vm_prot_t VAR_17, VAR_18;

 VAR_11 = (char *)FUNC_3(((void*)0), VAR_4, VAR_5 | VAR_6, VAR_1 | VAR_3, -1, 0);
 VAR_8; FUNC_1((void *)VAR_11, VAR_2, "mmap");

 if (VAR_14 == VAR_7) {


  for(VAR_15 = VAR_11; VAR_15 < VAR_11 + VAR_4; VAR_15 += VAR_13) {
   VAR_16 = *VAR_15;
  }

  VAR_8; FUNC_0(FUNC_4(FUNC_2(), (vm_address_t *)&VAR_12,
     VAR_4, 0, VAR_9, FUNC_2(), (vm_address_t)VAR_11, VAR_0,
     &VAR_17, &VAR_18, VAR_10), "vm_remap");
 }
}
