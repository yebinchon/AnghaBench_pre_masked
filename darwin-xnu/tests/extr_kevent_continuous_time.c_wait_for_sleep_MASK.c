
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int FUNC_4() {
 if(!VAR_0) return 0;

 uint64_t VAR_1 = FUNC_3();

 for(int VAR_2 = 0; VAR_2 < 30; VAR_2++) {
  uint64_t VAR_3 = FUNC_3();



  if(FUNC_1((int64_t)VAR_1 - (int64_t)VAR_3) > 2) {
   return VAR_2 + 1;
  }

  FUNC_2(1);
  FUNC_0("waited %d seconds for sleep...", VAR_2+1);
 }
 return -1;
}
