
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* in_forder; int* in_cubemap_face_order; char* in_frot; int* in_cubemap_face_rotation; } ;
typedef TYPE_1__ V360Context ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_3)
{
    V360Context *VAR_4 = VAR_3->priv;

    for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        const char VAR_6 = VAR_4->in_forder[VAR_5];
        int VAR_7;

        if (VAR_6 == '\0') {
            FUNC_1(VAR_3, VAR_0,
                   "Incomplete in_forder option. Direction for all 6 faces should be specified.\n");
            return FUNC_0(VAR_1);
        }

        VAR_7 = FUNC_2(VAR_6);
        if (VAR_7 == -1) {
            FUNC_1(VAR_3, VAR_0,
                   "Incorrect direction symbol '%c' in in_forder option.\n", VAR_6);
            return FUNC_0(VAR_1);
        }

        VAR_4->in_cubemap_face_order[VAR_7] = VAR_5;
    }

    for (int VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        const char VAR_9 = VAR_4->in_frot[VAR_8];
        int VAR_10;

        if (VAR_9 == '\0') {
            FUNC_1(VAR_3, VAR_0,
                   "Incomplete in_frot option. Rotation for all 6 faces should be specified.\n");
            return FUNC_0(VAR_1);
        }

        VAR_10 = FUNC_3(VAR_9);
        if (VAR_10 == -1) {
            FUNC_1(VAR_3, VAR_0,
                   "Incorrect rotation symbol '%c' in in_frot option.\n", VAR_9);
            return FUNC_0(VAR_1);
        }

        VAR_4->in_cubemap_face_rotation[VAR_8] = VAR_10;
    }

    return 0;
}
