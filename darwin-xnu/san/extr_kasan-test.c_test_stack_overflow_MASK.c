
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct kasan_test {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kasan_test*) ;
 int FUNC_2 (struct kasan_test*) ;
 int FUNC_3 (struct kasan_test*) ;

__attribute__((used)) static int FUNC_4(struct kasan_test *VAR_1)
{
 FUNC_3(VAR_1);

 int VAR_2;
 volatile uint8_t VAR_3[VAR_0];

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3[VAR_2] = VAR_2;
 }

 FUNC_1(VAR_1);
 VAR_3[VAR_2] = VAR_2;
 FUNC_2(VAR_1);

 FUNC_0();

 return !(VAR_3[0] == 0);
}
