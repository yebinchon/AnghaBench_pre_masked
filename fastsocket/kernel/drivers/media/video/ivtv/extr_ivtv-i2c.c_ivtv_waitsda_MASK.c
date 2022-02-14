
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int dummy; } ;


 int FUNC_0 (struct ivtv*) ;
 int FUNC_1 (struct ivtv*) ;

__attribute__((used)) static int FUNC_2(struct ivtv *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0);
 for (VAR_2 = 0; VAR_2 < 1000; ++VAR_2) {
  if (FUNC_0(VAR_0) == VAR_1)
   return 1;
 }
 return 0;
}
