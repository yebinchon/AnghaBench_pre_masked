
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__*,int ,int) ;

boolean_t
FUNC_6() {
 int VAR_6, VAR_7;

 VAR_4 = 0;
 VAR_5 = VAR_0;

 VAR_6 = FUNC_5(FUNC_4(), &VAR_4, VAR_5, VAR_2 | VAR_3);
 if (!(VAR_7 = FUNC_2(VAR_6, "mach_vm_allocate"))) return VAR_7;
 if (!(VAR_7 = FUNC_0(VAR_4, "mach_vm_allocate"))) return VAR_7;
 if (!(VAR_7 = FUNC_1(VAR_4))) return VAR_7;
 if (!(VAR_7 = FUNC_3(VAR_4, VAR_5))) return VAR_7;

 return VAR_1;
}
