
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pack_line_10; int pack_line_8; } ;
typedef TYPE_1__ V210EncContext ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_4(void)
{
    V210EncContext VAR_2;

    FUNC_2(&VAR_2);

    if (FUNC_0(VAR_2.pack_line_8, "v210_planar_pack_8"))
        FUNC_1(VAR_1, 0xffffffff);

    if (FUNC_0(VAR_2.pack_line_10, "v210_planar_pack_10"))
        FUNC_1(VAR_0, 0x03ff03ff);

    FUNC_3("planar_pack");
}
