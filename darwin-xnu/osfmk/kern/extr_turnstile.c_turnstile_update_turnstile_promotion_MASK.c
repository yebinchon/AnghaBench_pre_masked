
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int ts_waitq; scalar_t__ ts_inheritor; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct turnstile*,struct turnstile*) ;
 int FUNC_1 (int,int,struct turnstile*) ;
 scalar_t__ FUNC_2 (struct turnstile*,struct turnstile*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static boolean_t
FUNC_5(
 struct turnstile *VAR_4,
 struct turnstile *VAR_5)
{

 boolean_t VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_1(1, VAR_2 |
   VAR_3 | VAR_0,
   VAR_5);
  return VAR_6;
 }


 FUNC_3(&VAR_4->ts_waitq);
 VAR_6 = FUNC_2(VAR_4, VAR_5);


 if (!VAR_6) {
  FUNC_1(1,
   (VAR_4->ts_inheritor ? VAR_2 : VAR_1) |
   VAR_3 | VAR_0, VAR_5);
 }
 FUNC_4(&VAR_4->ts_waitq);
 return VAR_6;
}
