
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int ts_waitq; } ;
typedef int spl_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct turnstile*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

boolean_t
FUNC_5(
 struct turnstile *VAR_1)
{
 boolean_t VAR_2 = VAR_0;
 spl_t VAR_3 = FUNC_0();

 FUNC_3(&VAR_1->ts_waitq);

 VAR_2 = FUNC_2(VAR_1);

 FUNC_4(&VAR_1->ts_waitq);
 FUNC_1(VAR_3);
 return VAR_2;

}
