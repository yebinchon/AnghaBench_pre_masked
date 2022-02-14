
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int light_level; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
 if (FUNC_1(VAR_1, ((void*)0), VAR_2, ((void*)0)))
  FUNC_0("Error setting light sensor level\n");
 VAR_0->light_level = VAR_2;
}
