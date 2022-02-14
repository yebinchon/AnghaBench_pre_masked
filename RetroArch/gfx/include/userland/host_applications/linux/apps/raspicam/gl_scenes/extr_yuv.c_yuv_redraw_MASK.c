
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * attribute_locations; int program; } ;
struct TYPE_4__ {int texture; int v_texture; int u_texture; int y_texture; } ;
typedef TYPE_1__ RASPITEX_STATE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,float,float) ;
 int FUNC_9 (int ,int,int ,int ,int ,int ) ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static int FUNC_10(RASPITEX_STATE *VAR_9)
{
    FUNC_3(VAR_0 | VAR_1);

    FUNC_0(FUNC_7(VAR_8.program));
    FUNC_0(FUNC_1(VAR_4));
    FUNC_0(FUNC_6(VAR_8.attribute_locations[0]));
    FUNC_0(FUNC_9(VAR_8.attribute_locations[0],
             2, VAR_3, VAR_2, 0, VAR_7));


    FUNC_0(FUNC_2(VAR_5, VAR_9->y_texture));
    FUNC_0(FUNC_8(VAR_8.attribute_locations[1], -1.0f, 1.0f));
    FUNC_0(FUNC_5(VAR_6, 0, 6));


    FUNC_0(FUNC_2(VAR_5, VAR_9->u_texture));
    FUNC_0(FUNC_8(VAR_8.attribute_locations[1], 0.0f, 1.0f));
    FUNC_0(FUNC_5(VAR_6, 0, 6));


    FUNC_0(FUNC_2(VAR_5, VAR_9->v_texture));
    FUNC_0(FUNC_8(VAR_8.attribute_locations[1], 0.0f, 0.0f));
    FUNC_0(FUNC_5(VAR_6, 0, 6));


    FUNC_0(FUNC_2(VAR_5, VAR_9->texture));
    FUNC_0(FUNC_8(VAR_8.attribute_locations[1], -1.0f, 0.0f));
    FUNC_0(FUNC_5(VAR_6, 0, 6));

    FUNC_0(FUNC_4(VAR_8.attribute_locations[0]));
    FUNC_0(FUNC_7(0));
    return 0;
}
