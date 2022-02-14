
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsan_violation {int dummy; } ;


 int FUNC_0 (int *,size_t*,size_t) ;
 size_t FUNC_1 (int *) ;
 size_t FUNC_2 (size_t) ;
 struct ubsan_violation* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

void
FUNC_3(struct ubsan_violation *VAR_5)
{
 if (!VAR_4) {
  return;
 }


 size_t VAR_6 = FUNC_1(&VAR_2);
 size_t VAR_7;
 do {
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7 == VAR_3) {
   return;
  }
 } while (!FUNC_0(&VAR_2, &VAR_6, VAR_7));

 VAR_0[VAR_6] = *VAR_5;


 size_t VAR_8;
 do {
  VAR_8 = VAR_6;
 } while (!FUNC_0(&VAR_1, &VAR_8, VAR_7));
}
