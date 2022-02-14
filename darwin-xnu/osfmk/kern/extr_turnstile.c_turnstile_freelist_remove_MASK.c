
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int ts_free_turnstiles; } ;


 int FUNC_0 (int *) ;
 struct turnstile* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct turnstile* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (struct turnstile*,int ) ;

__attribute__((used)) static struct turnstile *
FUNC_6(
 struct turnstile *VAR_3)
{
 struct turnstile *VAR_4 = VAR_0;
 FUNC_4(!FUNC_0(&VAR_3->ts_free_turnstiles));
 VAR_4 = FUNC_1(&VAR_3->ts_free_turnstiles);
 FUNC_3(&VAR_3->ts_free_turnstiles, VAR_2);
 FUNC_4(VAR_4 != VAR_0);
 FUNC_5(VAR_4, VAR_1);

 FUNC_2(&VAR_4->ts_free_turnstiles);
 return VAR_4;
}
