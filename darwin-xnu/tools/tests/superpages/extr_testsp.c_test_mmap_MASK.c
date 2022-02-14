
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (uintptr_t,char*) ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (uintptr_t,int,int *) ;
 int FUNC_4 (uintptr_t,int) ;
 int FUNC_5 (uintptr_t,int,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (void*,int,int ,int,int ,int ) ;
 int FUNC_7 (void*,int) ;
 int FUNC_8 (int ,char*) ;

boolean_t
FUNC_9() {
 int VAR_9, VAR_10;
 uintptr_t VAR_11 = 0;
 int VAR_12 = VAR_5;

 VAR_11 = (uintptr_t)FUNC_6((void*)VAR_11, VAR_12, VAR_4, VAR_1 | VAR_3, VAR_7, 0);
 if (VAR_11 == (uintptr_t)VAR_2) {
  FUNC_8(VAR_8, "mmap()");
  return VAR_0;
 }
 if (!(VAR_10 = FUNC_0(VAR_11, "mach_vm_allocate"))) return VAR_10;
 if (!(VAR_10 = FUNC_1(VAR_11))) return VAR_10;
 if (!(VAR_10 = FUNC_5(VAR_11, VAR_5, ((void*)0)))) return VAR_10;
 if (!(VAR_10 = FUNC_4(VAR_11, VAR_5))) return VAR_10;
 VAR_9 = FUNC_7((void*)VAR_11, VAR_12);
 if (!(VAR_10 = FUNC_2(VAR_9, "munmap"))) return VAR_10;
 if (!(VAR_10 = FUNC_3(VAR_11, VAR_12, ((void*)0)))) return VAR_10;

 return VAR_6;
}
