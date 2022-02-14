
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int salt ;
typedef int addr ;
typedef int SHA256_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(
 vm_offset_t VAR_1,
 vm_offset_t *VAR_2,
 uint64_t VAR_3)
{
 FUNC_5(VAR_3 != 0);

 if (VAR_1 == 0) {
  *VAR_2 = 0;
  return;
 }

 if (FUNC_3(VAR_1)) {
  *VAR_2 = FUNC_4(VAR_1);
  return;
 }

 vm_offset_t VAR_4[VAR_0/sizeof(vm_offset_t)];
 SHA256_CTX VAR_5;

 FUNC_1(&VAR_5);
 FUNC_2(&VAR_5, &VAR_3, sizeof(VAR_3));
 FUNC_2(&VAR_5, &VAR_1, sizeof(VAR_1));
 FUNC_0(VAR_4, &VAR_5);

 *VAR_2 = VAR_4[0];
}
