
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* out_cubemap_direction_order; int * out_cubemap_face_rotation; } ;
typedef TYPE_1__ V360Context ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float*) ;
 int FUNC_2 (float*,float*,int ) ;

__attribute__((used)) static void FUNC_3(const V360Context *VAR_0,
                        float VAR_1, float VAR_2, int VAR_3,
                        float *VAR_4, float VAR_5, float VAR_6)
{
    const int VAR_7 = VAR_0->out_cubemap_direction_order[VAR_3];
    float VAR_8, VAR_9, VAR_10;

    VAR_1 /= VAR_5;
    VAR_2 /= VAR_6;

    FUNC_2(&VAR_1, &VAR_2, VAR_0->out_cubemap_face_rotation[VAR_3]);

    switch (VAR_7) {
    case 129:
        VAR_8 = 1.f;
        VAR_9 = -VAR_2;
        VAR_10 = VAR_1;
        break;
    case 130:
        VAR_8 = -1.f;
        VAR_9 = -VAR_2;
        VAR_10 = -VAR_1;
        break;
    case 128:
        VAR_8 = VAR_1;
        VAR_9 = 1.f;
        VAR_10 = -VAR_2;
        break;
    case 132:
        VAR_8 = VAR_1;
        VAR_9 = -1.f;
        VAR_10 = VAR_2;
        break;
    case 131:
        VAR_8 = VAR_1;
        VAR_9 = -VAR_2;
        VAR_10 = -1.f;
        break;
    case 133:
        VAR_8 = -VAR_1;
        VAR_9 = -VAR_2;
        VAR_10 = 1.f;
        break;
    default:
        FUNC_0(0);
    }

    VAR_4[0] = VAR_8;
    VAR_4[1] = VAR_9;
    VAR_4[2] = VAR_10;

    FUNC_1(VAR_4);
}
