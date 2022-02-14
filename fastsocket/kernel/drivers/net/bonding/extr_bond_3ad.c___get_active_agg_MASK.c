
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aggregator {scalar_t__ is_active; } ;


 struct aggregator* FUNC_0 (struct aggregator*) ;

__attribute__((used)) static struct aggregator *FUNC_1(struct aggregator *VAR_0)
{
 struct aggregator *VAR_1 = ((void*)0);

 for (; VAR_0; VAR_0 = FUNC_0(VAR_0)) {
  if (VAR_0->is_active) {
   VAR_1 = VAR_0;
   break;
  }
 }

 return VAR_1;
}
