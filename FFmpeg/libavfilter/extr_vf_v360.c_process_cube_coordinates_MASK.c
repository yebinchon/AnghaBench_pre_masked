
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* in_cubemap_face_order; int * in_cubemap_face_rotation; } ;
typedef TYPE_1__ V360Context ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float*,float*,int ) ;
 int FUNC_2 (float*,float*,int ) ;

__attribute__((used)) static void FUNC_3(const V360Context *VAR_0,
                                     float VAR_1, float VAR_2, int VAR_3,
                                     float *VAR_4, float *VAR_5, int *VAR_6)
{
    *VAR_6 = VAR_0->in_cubemap_face_order[VAR_3];
    FUNC_2(&VAR_1, &VAR_2, VAR_0->in_cubemap_face_rotation[*VAR_6]);

    if ((VAR_1 < -1.f || VAR_1 >= 1.f) && (VAR_2 < -1.f || VAR_2 >= 1.f)) {

        *VAR_4 = VAR_1;
        *VAR_5 = VAR_2;
    } else if (VAR_1 < -1.f) {
        VAR_1 += 2.f;
        switch (VAR_3) {
        case 129:
            VAR_3 = 131;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 130:
            VAR_3 = 133;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 128:
            VAR_3 = 130;
            *VAR_4 = VAR_2;
            *VAR_5 = -VAR_1;
            break;
        case 132:
            VAR_3 = 130;
            *VAR_4 = -VAR_2;
            *VAR_5 = VAR_1;
            break;
        case 131:
            VAR_3 = 130;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 133:
            VAR_3 = 129;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        default:
            FUNC_0(0);
        }
    } else if (VAR_1 >= 1.f) {
        VAR_1 -= 2.f;
        switch (VAR_3) {
        case 129:
            VAR_3 = 133;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 130:
            VAR_3 = 131;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 128:
            VAR_3 = 129;
            *VAR_4 = -VAR_2;
            *VAR_5 = VAR_1;
            break;
        case 132:
            VAR_3 = 129;
            *VAR_4 = VAR_2;
            *VAR_5 = -VAR_1;
            break;
        case 131:
            VAR_3 = 129;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 133:
            VAR_3 = 130;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        default:
            FUNC_0(0);
        }
    } else if (VAR_2 < -1.f) {
        VAR_2 += 2.f;
        switch (VAR_3) {
        case 129:
            VAR_3 = 128;
            *VAR_4 = VAR_2;
            *VAR_5 = -VAR_1;
            break;
        case 130:
            VAR_3 = 128;
            *VAR_4 = -VAR_2;
            *VAR_5 = VAR_1;
            break;
        case 128:
            VAR_3 = 133;
            *VAR_4 = -VAR_1;
            *VAR_5 = -VAR_2;
            break;
        case 132:
            VAR_3 = 131;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 131:
            VAR_3 = 128;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 133:
            VAR_3 = 128;
            *VAR_4 = -VAR_1;
            *VAR_5 = -VAR_2;
            break;
        default:
            FUNC_0(0);
        }
    } else if (VAR_2 >= 1.f) {
        VAR_2 -= 2.f;
        switch (VAR_3) {
        case 129:
            VAR_3 = 132;
            *VAR_4 = -VAR_2;
            *VAR_5 = VAR_1;
            break;
        case 130:
            VAR_3 = 132;
            *VAR_4 = VAR_2;
            *VAR_5 = -VAR_1;
            break;
        case 128:
            VAR_3 = 131;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 132:
            VAR_3 = 133;
            *VAR_4 = -VAR_1;
            *VAR_5 = -VAR_2;
            break;
        case 131:
            VAR_3 = 132;
            *VAR_4 = VAR_1;
            *VAR_5 = VAR_2;
            break;
        case 133:
            VAR_3 = 132;
            *VAR_4 = -VAR_1;
            *VAR_5 = -VAR_2;
            break;
        default:
            FUNC_0(0);
        }
    } else {

        *VAR_4 = VAR_1;
        *VAR_5 = VAR_2;
    }

    *VAR_6 = VAR_0->in_cubemap_face_order[VAR_3];
    FUNC_1(VAR_4, VAR_5, VAR_0->in_cubemap_face_rotation[*VAR_6]);
}
