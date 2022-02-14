
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kasan_test {int dummy; } ;


 int FUNC_0 (struct kasan_test*) ;
 int FUNC_1 (struct kasan_test*) ;
 int FUNC_2 (struct kasan_test*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct kasan_test *VAR_0)
{
 FUNC_2(VAR_0);
 char VAR_1[9] = {};


 FUNC_3(VAR_1, "abcd", 4);
 FUNC_3(VAR_1, "efgh", 4);

 FUNC_0(VAR_0);
 FUNC_3(VAR_1, "i", 1);
 FUNC_1(VAR_0);

 return VAR_1[0] != 'a';
}
