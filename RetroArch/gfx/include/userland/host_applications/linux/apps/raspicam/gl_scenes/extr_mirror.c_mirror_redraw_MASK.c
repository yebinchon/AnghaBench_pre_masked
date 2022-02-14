
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * attribute_locations; int * uniform_locations; int program; } ;
struct TYPE_4__ {int texture; } ;
typedef TYPE_1__ RASPITEX_STATE ;
typedef float GLfloat ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,float) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ,int ,int ,float*) ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static int FUNC_9(RASPITEX_STATE *VAR_7) {
    static float VAR_8 = 0.0;


    FUNC_2(VAR_0 | VAR_1);


    FUNC_1(VAR_4, VAR_7->texture);

    VAR_8 += 0.05;
    FUNC_0(FUNC_7(VAR_6.program));
    FUNC_0(FUNC_5(VAR_6.attribute_locations[0]));
    GLfloat VAR_9[] = {
        -1.0f, -1.0f,
        1.0f, 1.0f,
        1.0f, -1.0f,

        -1.0f, 1.0f,
        1.0f, 1.0f,
        -1.0f, -1.0f,
    };
    FUNC_0(FUNC_8(VAR_6.attribute_locations[0], 2, VAR_3, VAR_2, 0, VAR_9));
    FUNC_0(FUNC_6(VAR_6.uniform_locations[1], VAR_8));
    FUNC_0(FUNC_4(VAR_5, 0, 6));

    FUNC_0(FUNC_3(VAR_6.attribute_locations[0]));
    FUNC_0(FUNC_7(0));
    return 0;
}
