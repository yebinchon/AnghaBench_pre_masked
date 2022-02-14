
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_hash {int dummy; } ;
struct stripe {int key; scalar_t__ lists; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stripe_hash*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct stripe_hash *VAR_1, struct stripe *VAR_2)
{
 FUNC_1(VAR_2->lists + VAR_0, FUNC_0(VAR_1, VAR_2->key));
}
