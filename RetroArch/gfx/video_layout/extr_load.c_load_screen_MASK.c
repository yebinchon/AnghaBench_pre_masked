
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int scope_t ;
typedef int rxml_node_t ;
struct TYPE_10__ {TYPE_4__* components; } ;
typedef TYPE_3__ element_t ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {TYPE_2__ screen; } ;
struct TYPE_11__ {TYPE_1__ attr; int bounds; } ;
typedef TYPE_4__ component_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_3__*,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char const*) ;

__attribute__((used)) static bool FUNC_6(scope_t *VAR_1, element_t *VAR_2, rxml_node_t *VAR_3)
{
   component_t *VAR_4;
   const char *VAR_5 = FUNC_4(VAR_3, "index");

   FUNC_1(VAR_2, ((void*)0), 1);
   VAR_4 = &VAR_2->components[0];

   FUNC_0(VAR_4, VAR_0);
   VAR_4->bounds = FUNC_3();
   VAR_4->attr.screen.index = FUNC_2(FUNC_5(VAR_1, VAR_5));

   return 1;
}
