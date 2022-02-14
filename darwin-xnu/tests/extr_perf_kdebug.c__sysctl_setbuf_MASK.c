
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int*,int,int *,int *,int *,int ) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_3) {
 int VAR_4[] = { VAR_0, VAR_1, VAR_2, (int)VAR_3 };
 if (FUNC_1(VAR_4, 4, ((void*)0), ((void*)0), ((void*)0), 0)) {
  FUNC_0("KERN_KDSETBUF sysctl failed");
 }
}
