
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
 int FUNC_4 (int *,float,int) ;

__attribute__((used)) static int FUNC_5(struct kasan_test *VAR_1)
{
 FUNC_3(VAR_1);
 uint8_t VAR_2[VAR_0];


 FUNC_4(VAR_2, 'e', VAR_0);

 FUNC_0();


 FUNC_1(VAR_1);
 FUNC_4(VAR_2, 'f', VAR_0+1);
 FUNC_2(VAR_1);

 return 0;
}
