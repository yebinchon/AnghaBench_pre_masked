
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* in_cubemap_face_order; float* input_mirror_modifier; int * in_cubemap_face_rotation; } ;
typedef TYPE_1__ V360Context ;






 float const VAR_0 ;
 float const VAR_1 ;
 float const VAR_2 ;


 float FUNC_0 (float const) ;
 float FUNC_1 (float const,float const) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float) ;
 int FUNC_5 (float*,float*,int ) ;

__attribute__((used)) static void FUNC_6(const V360Context *VAR_3,
                        const float *VAR_4,
                        float *VAR_5, float *VAR_6, int *VAR_7)
{
    const float VAR_8 = FUNC_1(VAR_4[0], -VAR_4[2]);
    const float VAR_9 = FUNC_0(-VAR_4[1]);
    float VAR_10, VAR_11;
    int VAR_12;

    if (VAR_8 >= -VAR_2 && VAR_8 < VAR_2) {
        *VAR_7 = 131;
        VAR_10 = VAR_8;
    } else if (VAR_8 >= -(VAR_1 + VAR_2) && VAR_8 < -VAR_2) {
        *VAR_7 = 130;
        VAR_10 = VAR_8 + VAR_1;
    } else if (VAR_8 >= VAR_2 && VAR_8 < VAR_1 + VAR_2) {
        *VAR_7 = 129;
        VAR_10 = VAR_8 - VAR_1;
    } else {
        *VAR_7 = 133;
        VAR_10 = VAR_8 + ((VAR_8 > 0.f) ? -VAR_0 : VAR_0);
    }

    VAR_11 = FUNC_2(FUNC_4(VAR_10));
    if (VAR_9 > VAR_11) {
        *VAR_7 = 132;
    } else if (VAR_9 < -VAR_11) {
        *VAR_7 = 128;
    }

    switch (*VAR_7) {
    case 129:
        *VAR_5 = VAR_4[2] / VAR_4[0];
        *VAR_6 = -VAR_4[1] / VAR_4[0];
        break;
    case 130:
        *VAR_5 = VAR_4[2] / VAR_4[0];
        *VAR_6 = VAR_4[1] / VAR_4[0];
        break;
    case 128:
        *VAR_5 = VAR_4[0] / VAR_4[1];
        *VAR_6 = -VAR_4[2] / VAR_4[1];
        break;
    case 132:
        *VAR_5 = -VAR_4[0] / VAR_4[1];
        *VAR_6 = -VAR_4[2] / VAR_4[1];
        break;
    case 131:
        *VAR_5 = -VAR_4[0] / VAR_4[2];
        *VAR_6 = VAR_4[1] / VAR_4[2];
        break;
    case 133:
        *VAR_5 = -VAR_4[0] / VAR_4[2];
        *VAR_6 = -VAR_4[1] / VAR_4[2];
        break;
    default:
        FUNC_3(0);
    }

    VAR_12 = VAR_3->in_cubemap_face_order[*VAR_7];
    FUNC_5(VAR_5, VAR_6, VAR_3->in_cubemap_face_rotation[VAR_12]);

    (*VAR_5) *= VAR_3->input_mirror_modifier[0];
    (*VAR_6) *= VAR_3->input_mirror_modifier[1];
}
