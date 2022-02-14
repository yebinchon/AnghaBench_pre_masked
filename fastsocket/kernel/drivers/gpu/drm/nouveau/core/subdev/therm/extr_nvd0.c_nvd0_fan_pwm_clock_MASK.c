
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_therm {int dummy; } ;
struct TYPE_2__ {int crystal; } ;


 TYPE_1__* FUNC_0 (struct nouveau_therm*) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_therm *VAR_0)
{
 return (FUNC_0(VAR_0)->crystal * 1000) / 20;
}
