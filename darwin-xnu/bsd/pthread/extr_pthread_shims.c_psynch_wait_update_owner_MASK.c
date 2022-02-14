
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct turnstile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (uintptr_t,struct turnstile**,int *) ;
 struct turnstile* FUNC_1 (uintptr_t,struct turnstile**,int ,int ) ;
 int FUNC_2 (struct turnstile*,int ,int) ;
 int FUNC_3 (struct turnstile*,int ) ;

__attribute__((used)) static void
FUNC_4(uintptr_t VAR_5, thread_t VAR_6,
  struct turnstile **VAR_7)
{
 struct turnstile *VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_7, VAR_3,
   VAR_4);

 FUNC_2(VAR_8, VAR_6,
   (VAR_0 | VAR_1));
 FUNC_3(VAR_8, VAR_2);
 FUNC_0(VAR_5, VAR_7, ((void*)0));
}
