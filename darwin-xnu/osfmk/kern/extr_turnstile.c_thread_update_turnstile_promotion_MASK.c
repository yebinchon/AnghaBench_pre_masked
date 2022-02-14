
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct turnstile {int dummy; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct turnstile*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct turnstile*) ;
 int FUNC_5 (int,int,struct turnstile*) ;

__attribute__((used)) static boolean_t
FUNC_6(
 thread_t VAR_3,
 struct turnstile *VAR_4)
{

 boolean_t VAR_5 = FUNC_2(VAR_3, VAR_4);

 if (!VAR_5) {
  FUNC_5(1, VAR_1 |
   VAR_2 | VAR_0, VAR_4);
  return VAR_5;
 }


 FUNC_1(VAR_3);
 VAR_5 = FUNC_4(VAR_3, VAR_4);


 if (!VAR_5) {
  FUNC_5(1,
   FUNC_0(VAR_3) |
   VAR_2 | VAR_0,
   VAR_4);
 }
 FUNC_3(VAR_3);
 return VAR_5;
}
