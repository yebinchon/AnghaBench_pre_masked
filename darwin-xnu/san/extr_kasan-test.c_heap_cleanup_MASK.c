
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kasan_test {int * data; int datasz; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct kasan_test *VAR_0)
{
 if (VAR_0->data) {
  FUNC_0(VAR_0->data, VAR_0->datasz);
  VAR_0->data = ((void*)0);
 }
}
