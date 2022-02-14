
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {scalar_t__ ts_proprietor; int ts_free_turnstiles; } ;


 int FUNC_0 (int *,struct turnstile*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct turnstile*) ;
 int FUNC_3 (struct turnstile*,int ) ;

__attribute__((used)) static void
FUNC_4(
 struct turnstile *VAR_2,
 struct turnstile *VAR_3)
{
 FUNC_1(FUNC_2(VAR_2) == FUNC_2(VAR_3));
 FUNC_1(VAR_2->ts_proprietor == VAR_3->ts_proprietor);
 FUNC_3(VAR_3, VAR_0);
 FUNC_0(&VAR_2->ts_free_turnstiles, VAR_3, VAR_1);
}
