
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t FUNC_3 (void*,size_t) ;
 size_t FUNC_4 (void*,size_t) ;

__attribute__((used)) static void
FUNC_5(void * VAR_2, size_t * VAR_3)
{
 size_t VAR_4;


 FUNC_0(*VAR_3 % sizeof(uint64_t) == 0);

 VAR_4 = (*VAR_3) / sizeof(uint64_t);
 if (FUNC_2() & VAR_1) {
  VAR_4 = FUNC_4(VAR_2, VAR_4);
  *VAR_3 = VAR_4 * sizeof(uint64_t);
 } else if (FUNC_1() & VAR_0) {
  VAR_4 = FUNC_3(VAR_2, VAR_4);
  *VAR_3 = VAR_4 * sizeof(uint64_t);
 } else {
  *VAR_3 = 0;
 }
}
