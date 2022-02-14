
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lck_mtx_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(
 lck_mtx_t *VAR_1,
 boolean_t VAR_2)
{
 uint32_t VAR_3;

 if (VAR_2) {

  FUNC_3(VAR_1, VAR_0);
  return;
 }

 VAR_3 = FUNC_2(VAR_1);
 FUNC_1(VAR_1, &VAR_3);

 FUNC_3(VAR_1, VAR_0);

 FUNC_0();
}
