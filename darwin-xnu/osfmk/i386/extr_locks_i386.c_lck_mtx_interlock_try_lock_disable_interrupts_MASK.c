
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lck_mtx_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int
FUNC_3(
 lck_mtx_t *VAR_1,
 boolean_t *VAR_2)
{
 uint32_t VAR_3;

 *VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_1, &VAR_3)) {
  return 1;
 } else {
  FUNC_1(*VAR_2);
  return 0;
 }
}
