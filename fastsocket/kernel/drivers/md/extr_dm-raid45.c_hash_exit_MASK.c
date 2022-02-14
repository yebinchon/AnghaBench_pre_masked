
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_hash {int * hash; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct stripe_hash *VAR_0)
{
 if (VAR_0->hash) {
  FUNC_0(VAR_0->hash);
  VAR_0->hash = ((void*)0);
 }
}
