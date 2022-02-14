
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int*,int,int *,size_t*,int *,int ) ;

__attribute__((used)) static void FUNC_2(uint8_t* VAR_4) {
 int VAR_5[] = { VAR_0, VAR_2, VAR_3 };
 size_t VAR_6 = VAR_1;
 if(FUNC_1(VAR_5, 3, VAR_4, &VAR_6, ((void*)0), 0)) {
  FUNC_0("KERN_KDSET_TYPEFILTER sysctl failed");
 }
}
