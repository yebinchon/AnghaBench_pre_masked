
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* blist_t ;
struct TYPE_3__ {int bl_skip; int bl_radix; int bl_root; } ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;

void
FUNC_2(blist_t VAR_0)
{
 FUNC_1("BLIST {\n");
 FUNC_0(VAR_0->bl_root, 0, VAR_0->bl_radix, VAR_0->bl_skip, 4);
 FUNC_1("}\n");
}
