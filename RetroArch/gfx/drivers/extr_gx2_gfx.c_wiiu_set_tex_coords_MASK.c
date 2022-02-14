
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float u; float v; } ;
struct TYPE_10__ {TYPE_1__ coord; } ;
typedef TYPE_3__ frame_vertex_t ;
struct TYPE_9__ {float width; float height; } ;
struct TYPE_11__ {TYPE_2__ surface; } ;
typedef TYPE_4__ GX2Texture ;


 int FUNC_0 (int ,TYPE_3__*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(frame_vertex_t *VAR_1, GX2Texture *VAR_2, float VAR_3, float VAR_4,
                                float VAR_5, float VAR_6,
                                unsigned VAR_7)
{
   VAR_1[0].coord.u = VAR_3 / VAR_2->surface.width;
   VAR_1[0].coord.v = VAR_4 / VAR_2->surface.height;
   VAR_1[1].coord.u = VAR_5 / VAR_2->surface.width;
   VAR_1[1].coord.v = VAR_4 / VAR_2->surface.height;
   VAR_1[2].coord.u = VAR_5 / VAR_2->surface.width;
   VAR_1[2].coord.v = VAR_6 / VAR_2->surface.height;
   VAR_1[3].coord.u = VAR_3 / VAR_2->surface.width;
   VAR_1[3].coord.v = VAR_6 / VAR_2->surface.height;
   FUNC_0(VAR_0, VAR_1, 4 * sizeof(*VAR_1));
}
