
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; int b; } ;
typedef int ITEM ;
typedef TYPE_1__ CFG_ENUM_PARAM ;


 int FUNC_0 (int ,int *,int ) ;

bool FUNC_1(ITEM *VAR_0, void *VAR_1)
{
 CFG_ENUM_PARAM *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = (CFG_ENUM_PARAM *)VAR_1;
 FUNC_0(VAR_2->b, VAR_0, VAR_2->depth);

 return 1;
}
