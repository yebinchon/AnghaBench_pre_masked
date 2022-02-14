
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_7__ {int vmp_offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ,int ,TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

void
FUNC_5(
 vm_page_t VAR_1)
{
        FUNC_3(VAR_0,
     "vm_page_zero_fill, object 0x%X offset 0x%X page 0x%X\n",
     FUNC_2(VAR_1), VAR_1->vmp_offset, VAR_1, 0,0);
 FUNC_4(FUNC_1(VAR_1));
}
