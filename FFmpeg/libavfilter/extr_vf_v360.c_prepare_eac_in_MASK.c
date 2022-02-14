
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t* in_cubemap_face_order; void** in_cubemap_face_rotation; scalar_t__ iv_flip; scalar_t__ ih_flip; } ;
typedef TYPE_1__ V360Context ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ AVFilterContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;

__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_15)
{
    V360Context *VAR_16 = VAR_15->priv;

    if (VAR_16->ih_flip && VAR_16->iv_flip) {
        VAR_16->in_cubemap_face_order[VAR_7] = VAR_1;
        VAR_16->in_cubemap_face_order[VAR_6] = VAR_3;
        VAR_16->in_cubemap_face_order[VAR_14] = VAR_11;
        VAR_16->in_cubemap_face_order[VAR_4] = VAR_13;
        VAR_16->in_cubemap_face_order[VAR_5] = VAR_2;
        VAR_16->in_cubemap_face_order[VAR_0] = VAR_12;
    } else if (VAR_16->ih_flip) {
        VAR_16->in_cubemap_face_order[VAR_7] = VAR_11;
        VAR_16->in_cubemap_face_order[VAR_6] = VAR_13;
        VAR_16->in_cubemap_face_order[VAR_14] = VAR_1;
        VAR_16->in_cubemap_face_order[VAR_4] = VAR_3;
        VAR_16->in_cubemap_face_order[VAR_5] = VAR_12;
        VAR_16->in_cubemap_face_order[VAR_0] = VAR_2;
    } else if (VAR_16->iv_flip) {
        VAR_16->in_cubemap_face_order[VAR_7] = VAR_3;
        VAR_16->in_cubemap_face_order[VAR_6] = VAR_1;
        VAR_16->in_cubemap_face_order[VAR_14] = VAR_13;
        VAR_16->in_cubemap_face_order[VAR_4] = VAR_11;
        VAR_16->in_cubemap_face_order[VAR_5] = VAR_2;
        VAR_16->in_cubemap_face_order[VAR_0] = VAR_12;
    } else {
        VAR_16->in_cubemap_face_order[VAR_7] = VAR_13;
        VAR_16->in_cubemap_face_order[VAR_6] = VAR_11;
        VAR_16->in_cubemap_face_order[VAR_14] = VAR_3;
        VAR_16->in_cubemap_face_order[VAR_4] = VAR_1;
        VAR_16->in_cubemap_face_order[VAR_5] = VAR_12;
        VAR_16->in_cubemap_face_order[VAR_0] = VAR_2;
    }

    if (VAR_16->iv_flip) {
        VAR_16->in_cubemap_face_rotation[VAR_11] = VAR_9;
        VAR_16->in_cubemap_face_rotation[VAR_12] = VAR_10;
        VAR_16->in_cubemap_face_rotation[VAR_13] = VAR_9;
        VAR_16->in_cubemap_face_rotation[VAR_1] = VAR_8;
        VAR_16->in_cubemap_face_rotation[VAR_2] = VAR_8;
        VAR_16->in_cubemap_face_rotation[VAR_3] = VAR_8;
    } else {
        VAR_16->in_cubemap_face_rotation[VAR_11] = VAR_8;
        VAR_16->in_cubemap_face_rotation[VAR_12] = VAR_8;
        VAR_16->in_cubemap_face_rotation[VAR_13] = VAR_8;
        VAR_16->in_cubemap_face_rotation[VAR_1] = VAR_9;
        VAR_16->in_cubemap_face_rotation[VAR_2] = VAR_10;
        VAR_16->in_cubemap_face_rotation[VAR_3] = VAR_9;
    }

    return 0;
}
