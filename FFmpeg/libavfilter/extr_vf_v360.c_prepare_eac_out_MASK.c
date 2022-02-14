
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** out_cubemap_face_rotation; int * out_cubemap_direction_order; } ;
typedef TYPE_1__ V360Context ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_15)
{
    V360Context *VAR_16 = VAR_15->priv;

    VAR_16->out_cubemap_direction_order[VAR_11] = VAR_6;
    VAR_16->out_cubemap_direction_order[VAR_12] = VAR_5;
    VAR_16->out_cubemap_direction_order[VAR_13] = VAR_7;
    VAR_16->out_cubemap_direction_order[VAR_1] = VAR_4;
    VAR_16->out_cubemap_direction_order[VAR_2] = VAR_0;
    VAR_16->out_cubemap_direction_order[VAR_3] = VAR_14;

    VAR_16->out_cubemap_face_rotation[VAR_11] = VAR_8;
    VAR_16->out_cubemap_face_rotation[VAR_12] = VAR_8;
    VAR_16->out_cubemap_face_rotation[VAR_13] = VAR_8;
    VAR_16->out_cubemap_face_rotation[VAR_1] = VAR_9;
    VAR_16->out_cubemap_face_rotation[VAR_2] = VAR_10;
    VAR_16->out_cubemap_face_rotation[VAR_3] = VAR_9;

    return 0;
}
